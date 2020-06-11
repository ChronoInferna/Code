#include <iostream>
#include <map>
#include <ctime>

using std::map;
using std::string;

class Event
{
public:
    // Event variables
    string eventName; // Name of event
    bool eventAllDay; // All day or not
    int eventTime;    // Int for now, eventually change to a time struct

    // Time functions
    void setName();
    string getName();

    // All day or not functions
    void setAllDay();
    bool getAllDay();

    // Time functions
    void setTime();
    int getTime();
};
// need a destructor or smthn