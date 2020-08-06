#include <fstream> // Included so you can store data for future reference
#include "event.hpp"

// Not using whole std namespace b/c of Event class
using std::cin;
using std::cout;
using std::endl;
using std::string;

std::fstream g_wholeSchedule;   // Text file that contains entire schedule
std::ifstream g_seasonalEvents; // Text file that contains all of the seasonal events

// Name functions
void Event::setName()
{
    cin.ignore();
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
    cin.ignore();
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
    std::getline(cin, eventDescription);
    cout << endl;
}
string Event::getDescription()
{
    return eventDescription;
}

// Menu interaction
// Read event function, so you can check the scheuld and stuff
void Event::readEvent()
{
}

// Create event function
void Event::createEvent()
{
    int identificationCounter; // Holds ID counter at the beginning of the text file
    int eventID = 1;           // Event number, to be changed around, basically an ID

    // Opens to read previous event number
    g_wholeSchedule.open("schedule.txt", std::ios::in); // Open for input to read previous event number

    // TODO:
    // -Eventually will make is to read the last event's ID, then add one, creating a new ID (use "if" to check if there actually anything there)
    // -Keep track of ID by using a number at the top
    // Pseudo:
    // int eventID = (read number at top, if none, write 1, increment that by 1, replace that number w/ new eventID)

    // Gets the event ID from the ID counter
    g_wholeSchedule >> identificationCounter;

    // If identificationCounter is never learned (like if it's not there in the text file) then print it out, otherwise increment identificationCounter
    // FIXME: How do I make it so that if the var is undeclared b/c it doesn't read anything, it keeps it at 1?
    if (!identificationCounter)
    {
        cout << "test" << endl; // Remove later
    }
    else
    {
        // Remove previous number here
        eventID++;
    }

    // Remove this later
    cout << identificationCounter << endl
        << endl;

    // Close it so I can open it in output mode
    g_wholeSchedule.close();

    // Open for output to write in
    g_wholeSchedule.open("schedule.txt", std::ios::out);

    // Writes down eventID for future reference (ID counter), then moves to end of file to output
    g_wholeSchedule << eventID << endl;
    g_wholeSchedule.seekp(0, std::ios::end); // FIXME: Why won't it go to the end?

    // Remove later
    cout << g_wholeSchedule.tellp() << endl;

    // Next lines ask for any input, the writes in text file

    // Writes down eventID from before, and other format stuff
    g_wholeSchedule << endl
        << "Event ID: " << eventID << endl;
    g_wholeSchedule << "---Event Details---" << endl;

    // Asks for name
    cout << "What is your event called?" << endl;
    cin.ignore();
    setName();
    g_wholeSchedule << "Event Name: " << eventName << endl;

    // Asks for all day
    cout << "Is your event all day? (0 for false, 1 for true)" << endl;
    setAllDay();
    g_wholeSchedule << "All Day: " << eventAllDay << endl;

    // If all day is true, doesn't ask, but if not, asks for time. Or ask for military time then add a ":"
    if (eventAllDay == false)
    {
        cout << "What time is the event at?" << endl; // TODO: Specify later the format (see event.hpp), make sure no spaces
        setTime();
        g_wholeSchedule << "Event Time: " << eventTime << endl;
    }

    // Asks for location
    cout << "Where is this event?" << endl;
    cin.ignore();
    setLocation();
    g_wholeSchedule << "Event Location: " << eventLocation << endl;

    // Asks for description
    cout << "Provide a description for this event:" << endl;
    setDescription();
    g_wholeSchedule << "Event Description: " << eventDescription << endl
        << endl;

    // Closes file for further use
    g_wholeSchedule.close();
}

void Event::editEvent()
{
}

void Event::deleteEvent()
{
}