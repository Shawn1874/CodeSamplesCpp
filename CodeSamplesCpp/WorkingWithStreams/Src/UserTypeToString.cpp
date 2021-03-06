#include "stdafx.h"
#include "UserTypeToString.h"

/* Constructor
*/
UserTypeToString::UserTypeToString(std::string name, int age, double netWorth) : name(name), age(age), netWorth(netWorth)
{
}

/* Destructor
*/
UserTypeToString::~UserTypeToString()
{
}

/* when streaming an instance of this type to an ostream of any kind this function will build the string 
   containing the state of the object.
*/
std::ostream& operator<<(std::ostream& os, const UserTypeToString& obj)
{
    // write obj to stream
    os << "name - " << obj.name.c_str() << " age - " << obj.age << " netWorth - " << obj.netWorth;
    return os;
}
