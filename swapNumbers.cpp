/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Function to swap two numbers
void SwapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "Here are the actual values before swapping: " << endl;
    cout << "VarB = " << varA <<endl<< "VarB = " << varB<<endl<<endl;

    // Call the SwapNumbers function to swap the values
    SwapNumbers(varA, varB);

    cout << "After swapping: " << endl;
    cout << "varA = " << varA <<endl<< "varB = " << varB << endl;

    return 0;
}