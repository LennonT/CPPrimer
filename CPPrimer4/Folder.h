#ifndef Folder_h__
#define Folder_h__

#include "Message.h"
#include <set>

class Message;

class Folder {
private:
	std::set<Message*> messages;

public:
	void add(Message* ptrM) {
		messages.insert(ptrM);
	}

	void remove(Message* ptrM) {
		messages.erase(ptrM);
	}

};


#endif // Folder_h__
