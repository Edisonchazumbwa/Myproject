#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char ch : str) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch) && !inWord) {
            count++;
            inWord = true;
        } else if (!isalpha(ch)) {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize only the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string capitalized = str;
    bool capitalizeNext = true;
    for (char& ch : capitalized) {
        if (isalpha(ch)) {
            if (capitalizeNext) {
                ch = toupper(ch);
                capitalizeNext = false;
            } else {
                capitalizeNext = true;
            }
        }
    }
    return capitalized;
}

int main() {
    // Write text to the file
    ofstream file("input.txt");
    if (!file) {
        cerr << "Error: Unable to open input file for writing." << endl;
        return 1;
    } else {
        file << "This is the Advanced Computer Programming Module";
        file.close();
    }

    // Open the text file for reading
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open input file for reading." << endl;
        return 1;
    }

    // Read the contents of the file into a string variable
    string fileData;
    getline(inputFile, fileData);
    inputFile.close();

    // Calculate and output the number of vowels
    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    // Calculate and output the number of words
    int numWords = countWords(fileData);
    cout << "Number of words: " << numWords << endl;

    // Reverse the statement and output it
    string reversed = reverseString(fileData);
    cout << "Reversed statement: " << reversed << endl;

    // Capitalize only the second letter of each word and output the result
    string capitalized = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letter of each word: " << capitalized << endl;

    return 0;
}
