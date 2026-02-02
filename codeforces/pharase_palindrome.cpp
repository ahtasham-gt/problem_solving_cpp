//given a pharase check if it is a palindrome ignoring spaces punctuation and case sensitivity
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isPalindrome(const string& phrase) {
    int left = 0;
    int right = phrase.length() - 1;

    while (left < right) {
        
        while (left < right && !isalnum(phrase[left])) {
            left++;
        }
        
        while (left < right && !isalnum(phrase[right])) {
            right--;
        }

        
        if (tolower(phrase[left]) != tolower(phrase[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string phrase;
    cout << "Enter a phrase: ";
    getline(cin, phrase);

    if (isPalindrome(phrase)) {
        cout << "The phrase is a palindrome." << endl;
    } else {
        cout << "The phrase is not a palindrome." << endl;
    }

    return 0;
}