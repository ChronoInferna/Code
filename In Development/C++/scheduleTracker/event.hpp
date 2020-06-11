#include <iostream>
#include <map>
#include <ctime>

using std::string;

class Event
{
public:
    // Event variables
    string eventName;        // Name of event
    bool eventAllDay;        // All day or not
    int eventTime;           // Int for now, eventually change to a time struct
    string eventLocation;    // Location
    string eventDescription; // Description of event

    // Time functions
    void setName();
    string getName();

    // All day or not functions
    void setAllDay();
    bool getAllDay();

    // Time functions
    void setTime();
    int getTime();

    // Location functions
    void setLocation();
    string getLocation();

    // Description functions
    void setDescription();
    string getDescription();
};
// Needs a destructor or smthn