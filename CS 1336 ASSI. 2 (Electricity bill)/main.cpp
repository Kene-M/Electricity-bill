/*
Pseudocode
- Calculate the total for Bulb usage,  Fan usage and AC usage in KWH
- Calculate total usage by adding the total for Bulb usage,  Fan usage and AC usage
- Calculate the percentage of each usage wrt total usage
- Calculate electricity bill in dollars.  Remember the price is specified in cents
*/


// Programs that computes electricity usage and bill by
// getting input from the consumer ( money entered is in cents ).

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare the variables to get from user.
    int numBulbs, numFans;
    double hrsBulbOn, hrsFanOn, unitAC, hrsACOn, unitPrice;

    // Declare the variables to be calculated by program.
    double totalBulb_C, totalFan_C, totalAC_C, totalConsumption;
    double percentBulb_C, percentFan_C, percentAC_C ;
    double billAmount;

    // Getting input
    cout << "# of light bulbs: ";
    cin >> numBulbs;

    cout << "Average # of hours each bulb in ON in a day: ";
    cin >> hrsBulbOn;

    cout << "AC unit's power: ";
    cin >> unitAC;

    cout << "Typical # of hours AC unit is ON in a day: ";
    cin >> hrsACOn;

    cout << "# of Fans: ";
    cin >> numFans;

    cout << "Average # of hours each Fan is ON in a day: ";
    cin >> hrsFanOn;

    cout << "Per-unit price of electricity: ";
    cin >> unitPrice;

    // Calculate the total consumption.
    totalBulb_C = ( numBulbs * hrsBulbOn * 60 * 30 ) / 1000.0 ;
    totalFan_C = ( numFans * hrsFanOn * 40 * 30) / 1000.0 ;
    totalAC_C = ( hrsACOn * unitAC * 30 ) / 1000.0 ;

    totalConsumption = totalBulb_C + totalFan_C + totalAC_C ;

    // Calculate the percentage of each usage.
    percentBulb_C = ( totalBulb_C / totalConsumption ) * 100.0;
    percentFan_C = ( totalFan_C / totalConsumption) * 100.0;
    percentAC_C = ( totalAC_C / totalConsumption ) * 100.0;

    // Calculate the electricity bill in dollars.
    billAmount = totalConsumption * ( unitPrice * 0.01 ) ;

    // Display output to the user.
    cout << fixed << setprecision(0);
    cout << endl << endl << "Total electricity usage: " << totalConsumption << " kWh" << endl;
    cout << fixed << setprecision(1);
    cout << "Bulbs: " << percentBulb_C << "% AC: " << percentAC_C << "% Fans: " << percentFan_C << "%" << endl;
    cout << fixed << setprecision(2);
    cout << "Electricity bill for the month: $ " << billAmount << endl;

    return 0;
    }
