#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    // Declare variables to store the number of rows and columns
    int numberOfRows;
    int numberOfColumns;

    // Prompt the user to input the number of rows for the 2D Array
    cout << "Enter the number of rows: ";
    while(true) {
        if(cin >> numberOfRows && numberOfRows >= 1 && numberOfRows <= 3) 
        {
            // Input is valid, break the loop
            break;
        } else
        {
            // Clear the error flag
            cin.clear();
            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Prompt the user again
            cout << "Invalid input. Number of rows must be between 1 and 3." << endl;
            cout << "Enter the number of rows: ";
        }
    }

    // Prompt the user to enter the number of columns for the 2D Array
    cout << "Enter the number of columns: ";
    while(true) {
        if(cin >> numberOfColumns && numberOfColumns >= 1 && numberOfColumns <= 3) 
        {
            // Input is valid, break the loop
            break;
        } else {
            // Clear the error flag
            cin.clear();
            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Prompt the user again
            cout << "Invalid input. Number of columns must be between 1 and 3." << endl;
            cout << "Enter the number of columns: ";
        }
    }

    // Dynamically allocate memory for the 2D array
    double** dynamic2DArray = new double*[numberOfRows];
    for (int y = 0; y < numberOfRows; ++y) 
    {
        dynamic2DArray[y] = new double[numberOfColumns];
    }

    // Prompt the user to enter values for each element of the array
    cout << "Enter the values for the array:" << endl;
    for (int k = 0; k < numberOfRows; ++k) 
    {
        for (int p = 0; p < numberOfColumns; ++p) 
        {
            cout << "Enter value for element at indecies (" << k << "," << p << "): ";
            cin >> dynamic2DArray[k][p];
        }
    }

    // Output the values of each element of the array
    cout << "\nValues of each element of the array:" << endl;
    for (int w = 0; w < numberOfRows; ++w) 
    {
        for (int d = 0; d < numberOfColumns; ++d) 
        {
            cout << dynamic2DArray[w][d] << " ";
        }
        cout << endl;
    }

    // Deallocate the dynamically allocated memory
    for (int c = 0; c < numberOfRows; ++c) 
    {
        delete[] dynamic2DArray[c];
    }
    delete[] dynamic2DArray;

    return 0;
}