#ifndef Message_h__
#define Message_h__

#include <string>
#include "Folder.h"
#include <set>

class Message {
private:
	std::string contents;
	std::set<Folder *> folders;
	void putMessageInFolders(const std::set<Folder*>&);
	void removeMessageFromFolder();

	void addFolder(Folder&);
	void removeFolder(Folder&);

public:
	Message(const std::string& str = "") : contents(str) {}
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();

	void save(Folder&);
	void remove(Folder&);
};



#endif // Message_h__
