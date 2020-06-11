#include "event.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Name functions
void Event::setName()
{
    cin >> eventName;
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