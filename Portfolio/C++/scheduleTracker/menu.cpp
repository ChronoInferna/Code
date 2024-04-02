#include <iostream>
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

            break;

        // New event
        case 2:
        {
            Event newEvent;
            newEvent.createEvent();
            break;
        }
        // Edits event
        case 3:

            break;

        // Deletes event
        case 4:

            break;

        // Checks seasonal events
        case 5:

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

void displayEvent()
{
}