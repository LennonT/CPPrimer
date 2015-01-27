#ifndef Message_h__
#define Message_h__

#include <string>
#include "Folder.h"

class Message {
private:
	std::string contents;


public:
	Message* save(Folder& f);

};



#endif // Message_h__
