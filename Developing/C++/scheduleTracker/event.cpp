#include "event.hpp"

// Not using whole std namespace b/c of Event class
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Name functions
void Event::setName()
{
    std::getline(cin, eventName); // Buffer b/c this is after a cin
    std::getline(cin, eventName);
    cout << endl;
}
string Event::getName()
{
    return eventName;
}

// All day functions
void Event::setAllDay()
{
    cin >> eventAllDay;
    cout << endl;
}
bool Event::getAllDay()
{
    return eventAllDay;
}

// Time functions
void Event::setTime()
{
    cin >> eventTime;
    cout << endl;
}
int Event::getTime()
{
    return eventTime;
}

// Location funcions
void Event::setLocation()
{
    std::getline(cin, eventLocation); // Buffer b/c after a cin
    std::getline(cin, eventLocation);
    cout << endl;
}
string Event::getLocation()
{
    return eventLocation;
}

// Description functions
void Event::setDescription()
{
    std::getline(cin, eventLocation); // No buffer b/c not after a cin
    cout << endl;
}
string Event::getDescription()
{
    return eventDescription;
}