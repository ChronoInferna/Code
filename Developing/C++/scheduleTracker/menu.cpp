#include <iostream>
#include <fstream> // Included so you can store data for future reference
#include <chrono>
#include "menu.hpp"
#include "event.hpp"

using namespace std; // This is a basic program, bugger off

// TODO:
// -Seasonal events, i.e. holidays etc. that are automatic
// -Edits event option: choose which part of the information you want to change
// -Event dtails to add: Days of the week, one-time event
// -When checking schedule or something, set the data values in the check schedule function by reading the text file.
// -Maybe use some number in the text file, each event gets a number, adds one every time (maybe see what previous one was, then ++), and if delete, use iterator to subtract one from each event that has a higher number

fstream g_wholeSchedule; // Text file that contains entire schedule

// Global array here of seasonal events that are default for everyone (Christmas, July 4th, etc.)
// NOTE: Only for American events

int main()
{
    int menuChoice;       // Input for which option you want
    bool menuChoiceError; // If you input something that's not allowed, this is true

    // Display
    cout << endl
         << "Activity Tracker" << endl
         << endl;
    menu();

    do
    {
        // Asks for which option you want to do
        cout << "Which option do you want to do? Input a number:" << endl;
        cin >> menuChoice;
        cout << endl;

        // Switch that determines what happens based on your input
        switch (menuChoice)
        {
        // Checks schedule
        case 1:
            checkSchedule();
            break;

        // New event
        case 2:
            newEvent();
            break;

        // Edits event
        case 3:
            editEvent();
            break;

        // Deletes event
        case 4:
            deleteEvent();
            break;

        // Checks seasonal events
        case 5:
            checkSeasonalEvents();
            break;

        // Exits program
        case 9:
            cout << "Exiting program..." << endl
                 << endl;
            break;

        // Error if something that's not an option is input
        default:
            cout << "What you just did was create an error, try again." << endl
                 << endl;
            menuChoiceError = true;
            break;
        }

        // Ifs to change based on if menuChoice is an error, check above switch defualt
        if (menuChoice != 9 && menuChoiceError == false)
        {
            // Displays menu again
            cout << "Action complete! What's next?" << endl
                 << endl;
            menu();
        }
        else if (menuChoice != 9 && menuChoiceError == true)
        {
            // Displays menu again, and sets menuChoiceError to false so you can input an error later
            menu();
            menuChoiceError = false;
        }
    } while (menuChoice != 9);

    return 0;
}

void menu()
{
    cout << "Menu:" << endl
         << "1) Check schedule" << endl
         << "2) New event" << endl
         << "3) Edit an event" << endl
         << "4) Check seasonal events" << endl
         << "9) Exit program" << endl
         << endl;
}

void checkSchedule()
{
}

void newEvent()
{
    Event newEvent;                    // Event to write to file
    int identificationCounter;         // Holds ID counter at the beginning of the text file
    int *identificationCounterPointer; // Pointer to identificationCounter
    int eventID = 1;                   // Event number, to be changed around, basically an ID

    // Opens to read previous event number
    g_wholeSchedule.open("schedule.txt", ios::in | ios::app); // Open for input to read previous event number

    // TODO:
    // -Eventually will make is to read the last event's ID, then add one, creating a new ID (use "if" to check if there actually anything there)
    // -Keep track of ID by using a number at the top
    // Pseudo:
    // int eventID = (read number at top, if none, write 1, increment that by 1, replace that number w/ new eventID)

    // Gets the event ID from the ID counter
    g_wholeSchedule >> identificationCounter;
    identificationCounterPointer = &identificationCounter;

    // If identificationCounter is never learned (like if it's not there in the text file) then print it out, otherwise increment identificationCounter
    // FIXME: How do I make it so that if the var is undeclared b/c it doesn't read anything, it keeps it at 1?
    if (!identificationCounterPointer)
    {
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
    g_wholeSchedule.open("schedule.txt", ios::out | ios::app);

    // Writes down eventID for future reference (ID counter), then moves to end of file to output
    g_wholeSchedule << eventID;
    g_wholeSchedule.seekp(0, ios::end);

    // Next lines ask for any input, the writes in text file

    // Writes down eventID from before, and other format stuff
    g_wholeSchedule << endl
                    << "Event ID: " << eventID << endl;
    g_wholeSchedule << "---Event Details---" << endl;

    // Asks for name
    cout << "What is your event called?" << endl;
    newEvent.setName();
    g_wholeSchedule << "Event Name: " << newEvent.eventName << endl;

    // Asks for all day
    cout << "Is your event all day? (0 for false, 1 for true)" << endl;
    newEvent.setAllDay();
    g_wholeSchedule << "All Day: " << newEvent.eventAllDay << endl;

    // If all day is true, doesn't ask, but if not, asks for time. Or ask for military time then add a ":"
    if (newEvent.eventAllDay == false)
    {
        cout << "What time is the event at?" << endl; // TODO: Specify later the format (see event.hpp), make sure no spaces
        newEvent.setTime();
        g_wholeSchedule << "Event Time: " << newEvent.eventTime << endl;
    }

    // Asks for location
    cout << "Where is this event?" << endl;
    newEvent.setLocation();
    g_wholeSchedule << "Event Location: " << newEvent.eventLocation << endl;

    // Asks for description
    cout << "Provide a description for this event:" << endl;
    newEvent.setDescription();
    g_wholeSchedule << "Event Description: " << newEvent.eventDescription << endl
                    << endl;

    // Closes file for further use
    g_wholeSchedule.close();
}

void editEvent()
{
}

void deleteEvent()
{
}

void checkSeasonalEvents()
{
}