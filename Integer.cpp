#include <iostream>
#include <limits>

using namespace std;

int main() {
    int inputValue;

    
    cout << "Please enter an integer value between 5 and 10: " << endl;

    
    while (!(cin >> inputValue) || inputValue < 5 || inputValue > 10) {
        
        cin.clear();
    
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
    
        cout << "Invalid input. Please enter an integer value between 5 and 10: " << endl;
    }

    
    cout << "Your input value (" << inputValue << ") has been accepted." << endl;

    return 0;
}
