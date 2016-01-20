#include "eecs230.h"

//
// Lab 3 EXAMPLE functions
//

/* The main function, or the "entry function" of the lab3 program, simply calls the other
 * functions to run.
 */

void feet_to_cm()
{
    vector<double> feet;
    double input;
    vector<double> centimeters;

    while (cin >> input && input != 0)
    {
        if (input!=0) {
            feet.push_back(input);
        }

        for (int i = 0; i < feet.size(); i++) {
            centimeters.push_back(feet[i] * 30.48);

        }

        for (int i =0; i < centimeters.size(); i++) {
            cout << centimeters[i] << endl;
        }


    }


}

int main() {
    cout << "Enter length in feet" << endl;
    feet_to_cm();

    return 0; // Lets the operating system know everything ran successfully.
}





//11 5 0