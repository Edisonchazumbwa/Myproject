#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // Dynamically allocate a string using a dynamic pointer
    string *pName = new string;
    
    // Dynamically allocate an integer using a dynamic pointer
    int *pAge = new int;
    
    // Prompt the user for input of their Name
    cout << "Enter Your Name here please: ";
    getline(cin, *pName);

    // Prompt user for input of their age
    cout << "Enter Your Age here please: ";
    cin >> *pAge;

    // Output to the console the dynamically allocated Name and Age
    cout << "Hie " << *pName << "." << endl;
    cout << "You are " << *pAge << " years old." << endl;

    // Free the dynamically allocated memory
    delete pAge;
    delete pName;

    return 0;
}