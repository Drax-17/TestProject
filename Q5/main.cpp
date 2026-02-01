/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestString(vector<string> words) {
    string longest = words[0];
    for (string w : words) {
        if (w.length() > longest.length()) {
            longest = w;
        }
    }
    return longest;
}

int main() {
    vector<string> words = {"apple", "banana", "pear", "pineapple"};
    cout << "Longest string: " << longestString(words);
    return 0;
}
