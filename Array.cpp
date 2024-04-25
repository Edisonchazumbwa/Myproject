#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int numElements = sizeof(elements) / sizeof(elements[0]);
    
    
    for (int i = 0; i < numElements; ++i) {
        
        string element = elements[i];
        
        
        if (element[0] == 'B') {
            
            cout << element << endl;
        }
    }

    return 0;
}
