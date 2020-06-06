#include <iostream> // You know why
#include <iomanip>  // For setprecision() b/c I don't want too many decimals
#include <map>      // For fuelMap and speedUpgradeMap

using namespace std; // Suckers I'm gonna use "using namespace std;" too bad

/*
TODO:
-Commas to output
-Add space to output if numberOfMinions is double digits
-Create function to ask question rather than manually?
*/

int main()
{
  // Stuff that's best to ignore, basically sets the kind of number I want to print
  cout << fixed;
  cout << setprecision(2);

  // Input variables, mostly self-explanatory
  // Main variables
  double minionSpeed = 1;
  double itemsPerAction;
  double unitPrice;
  int numberOfMinions;

  // Upgrade variables
  // Bonus speed input variables
  string fuelType;
  string upgradeOne;
  string upgradeTwo;
  // Bonus speed total
  double bonusSpeed = 0;
  // Variable saying if you're using diamond spreading or not, which then adds to total profit
  bool diamondSpreading = false;

  // Output variable, displayed at the end
  double profit;

  // Maps
  // Fuel map for different fuels and their boost values, taken directly from hypixel-skyblock.fandom.com
  map<string, double> fuelMap =
      {{"Nothing", 0}, {"Coal", .05}, {"Block of Coal", .05}, {"Enchanted Bread", .05}, {"Enchanted Coal", .1}, {"Enchanted Charcoal", .2}, {"Solar Panel", .25}, {"Enchanted Lava Bucket", .25}, {"Hamster Wheel", .5}, {"Foul Flesh", .9}, {"Catalyst", 2}};

  // Upgrade map for different upgrades and their boost values, taken directly from hypixel-skyblock.fandom.com
  map<string, double> speedUpgradeMap =
      {{"Flycatcher", .2}, {"Minion Expander", .05}};

  // Intro and disclaimer
  cout << endl
       << "Welcome to the Hypixel Skyblock Minion Profit Calculator!" << endl
       << endl
       << "Notes/Disclaimer:" << endl
       << "-You must type in one of the options listed, if text is required. Otherwise the program doesn't work." << endl
       << "-You cannot add extra spaces." << endl
       << endl;

  // Input/asks for data
  // Minion action input
  cout << "What is the minion speed per action? (Vanilla speed without boosts, check speed from minion screen)"
       << endl;
  cin >> minionSpeed;

  // Items per action input
  cout << "How many items do you get per action? (Remember, placing/spawning also counts as an action)"
       << endl;
  cin >> itemsPerAction;

  // Unit price input
  cout << "What is the price of each item?" << endl;
  cin >> unitPrice;

  // Number of minions input
  cout << "How many minions are you using?" << endl;
  cin >> numberOfMinions;

  // Fuel input
  cout << "Which fuel are you using? (\"Nothing\", \"Coal\", \"Block of Coal\", \"Enchanted Bread\", \"Enchanted Coal\", \"Enchanted Charcoal\", \"Solar Panel\", \"Enchanted Lava Bucket\", \"Hamster Wheel\", \"Foul Flesh\", \"Catalyst\")"
       << endl;
  getline(cin, fuelType); // This line is a buffer, otherwise it wouldn't take input because there previously was a cin
  getline(cin, fuelType);

  // Upgrade input
  // Upgrade one input
  cout << "Which upgrade are you using in slot 1? (\"Nothing\", \"Other\", \"Diamond Spreading\" (You can only have one, and if you put it in twice, it just sets the upgrade as \"Nothing\"), \"Flycatcher\", or \"Minion Expander\")"
       << endl;
  getline(cin, upgradeOne); // This getline() doesn't need a buffer because the previous input was a getline()

  // Upgrade sorting, basically just decides which kind of upgrade it is, what it does, how to apply it, etc.
  // Diamond spreading
  if (upgradeOne == "Diamond Spreading")
  {
    diamondSpreading = true;
  }
  // Adds to bonusSpeed if the upgrade is a speed upgrade
  else if (upgradeOne == "Flycatcher" || upgradeOne == "Minion Expander")
  {
    bonusSpeed += speedUpgradeMap[upgradeOne];
  }

  // Upgrade two input
  cout << "Which upgrade are you using in slot 2? (\"Nothing\", \"Other\", \"Diamond Spreading\" (You can only have one, and if you put it in twice, it just sets the upgrade as \"Nothing\"), \"Flycatcher\", or \"Minion Expander\")"
       << endl;
  getline(cin, upgradeTwo); // This getline() doesn't need a buffer because the previous input was a getline()

  // Upgrade sorting, basically just decides which kind of upgrade it is, what it does, how to apply it, etc.
  // Diamond spreading if the first upgrade isn't diamond spreading
  if (upgradeTwo == "Diamond Spreading" && upgradeOne != "Diamond Spreading")
  {
    diamondSpreading = true;
  }
  // Diamond spreading if the first upgrade is diamond spreading
  else if (upgradeTwo == "Diamond Spreading" && upgradeOne == "Diamond Spreading")
  {
    cout << "Bruh, you can't have two diamond spreadings!" << endl;
  }
  // Adds to bonusSpeed if the upgrade is a speed upgrade
  else if (upgradeOne == "Flycatcher" || upgradeTwo == "Minion Expander")
  {
    bonusSpeed += speedUpgradeMap[upgradeTwo];
  }

  // Adding fuel bonus to speed
  if (fuelMap.count(fuelType) == 1)
  {
    bonusSpeed += fuelMap[fuelType];
  }

  // Changing minionSpeed based on bonuses
  minionSpeed *= (1 - bonusSpeed / (1 + bonusSpeed));

  // Calculation
  // If you're using diamond spreading
  if (diamondSpreading == true)
  {
    profit =
        86400 / minionSpeed * itemsPerAction * unitPrice +
        138240 / minionSpeed;
  }
  // If you're not using diamond spreading
  else if (diamondSpreading == false)
  {
    profit = 86400 / minionSpeed * itemsPerAction * unitPrice;
  }

  // Output/profit display
  cout << endl
       << "Remember, all of these numbers are slightly lower than what you'll actually earn."
       << endl
       << endl
       << "Profit:" << endl;

  // 1 hour
  // Display 1 minion profit (always by default)
  cout << "                    1 hour (1 minion): " << profit / 24 << endl;
  // Display x minions profit (if numberOfMinions is 1, doesn't display)
  if (numberOfMinions != 1)
  {
    cout << "                   1 hour (" << numberOfMinions << " minions): " << profit * numberOfMinions / 24 << endl;
  }

  // 24 hours
  // Display 1 minion profit (always by default)
  cout << "                  24 hours (1 minion): " << profit << endl;
  // Display x minions profit (if numberOfMinions is 1, doesn't display)
  if (numberOfMinions != 1)
  {
    cout << "                 24 hours (" << numberOfMinions << " minions): " << profit * numberOfMinions << endl;
  }

  // 168 hours/1 week
  // Display 1 minion profit (always by default)
  cout << "          168 hours/1 week (1 minion): " << profit * 7 << endl;
  // Display x minions profit (if numberOfMinions is 1, doesn't display)
  if (numberOfMinions != 1)
  {
    cout << "         168 hours/1 week (" << numberOfMinions << " minions): " << profit * numberOfMinions * 7 << endl;
  }

  // 744 hours/31 days/1 month
  // Display 1 minion profit (always by default)
  cout << " 744 hours/31 days/1 month (1 minion): " << profit * 31 << endl;
  // Display x minions profit (if numberOfMinions is 1, doesn't display)
  if (numberOfMinions != 1)
  {
    cout << "744 hours/31 days/1 month (" << numberOfMinions << " minions): " << profit * numberOfMinions * 31 << endl;
  }

  // Thank you!
  cout << endl
       << "Thank you for using my Hypixel Skyblock Minion Profit Calculator!" << endl
       << "Created by: ChronoInferna" << endl;

  return 0;
}