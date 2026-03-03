
// Find reminder without using modulus(%) operator without using recursion

#include <iostream>
using namespace std;

int findRemainder(int n, int d) 
{
    if (d == 0) 
    {
        cout << "Division by zero not allowed!" << endl;
        return -1;
    }

    return n - (n / d) * d;
}

int main() 
{
    int num, div;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the divisor: ";
    cin >> div;

    int rem = findRemainder(num, div);

    if (rem != -1)
        cout << "Remainder = " << rem << endl;

    return 0;
}