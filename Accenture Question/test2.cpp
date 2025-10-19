#include <iostream>
#include <cctype>  // for isalpha() and isdigit()

using namespace std;

int countNumbersBetweenLetters(const string &s) {
    int count = 0;
    int i = 0;
    int n = s.length();

    while (i < (int)s.length() - 1) {
        if (isalpha(s[i])) {  
            int j = i + 1;

            // Move j while digits continue
            while (j < (int)s.length() && isdigit(s[j])) {
                j++;
            }

            // Count if we found digits followed by a letter
            if (j > i + 1 && j < (int)s.length() && isalpha(s[j])) {
                count++;
            }

            i = j; // Skip processed part
        } else {
            i++;
        }
    }

    return count;
}

int main() {
    string s = "A123b12c123";
    cout << countNumbersBetweenLetters(s) << endl; // Output: 2
    return 0;
}