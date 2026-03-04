
// Butterfly pattern
/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Upper Wings
    for(int i = 1; i <= n; i++) {

        // Left stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for(int k = 1; k <= 2*(n - i); k++) {
            cout << " ";
        }

        // Right stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Wings
    for(int i = n; i >= 1; i--) {

        // Left stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for(int k = 1; k <= 2*(n - i); k++) {
            cout << " ";
        }

        // Right stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}