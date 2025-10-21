//question was in Java 

#include <iostream>
#include <cctype>  // for isalpha() and isdigit()

using namespace std;

int countNumbersBetweenLetters(const string &s) {
    int count = 0;
    int i = 0;
    int n = (int)s.length();

    while(i<n-1){
        if(isalpha(s[i])){
            int j = i+1;

            while(j<n && isdigit(s[j])){
                j++;
            }

            if(j>i+1 && j<n && isalpha(s[j])){
                count++;
            }
            i=j;
        }else{
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