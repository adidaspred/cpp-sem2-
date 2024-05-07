#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 
    't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    cout << "Enter text: ";
    cin >> s; // Input text
    
    // Loop through each lowercase letter
    for (int i = 0; i < 26; i++) {
        char ch = arr[i]; // Current letter to count
        int count = 0; // Counter for the current letter
        
        // Count occurrences of the current letter in the input text
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == ch) {
                count++;
            }
        }
        
        // Output the count if the letter appeared at least once
        if (count > 0) {
            cout << ch << " appeared " << count << " times." << endl;
        }
    }
    
    return 0;
}
