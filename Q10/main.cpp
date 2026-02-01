/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverseStrings(vector<string> words) {
    for (string &w : words) {
        reverse(w.begin(), w.end());
    }
    return words;
}

int main() {
    vector<string> words = {"hello", "world", "ghana"};
    vector<string> reversed = reverseStrings(words);

    cout << "Reversed strings:\n";
    for (string w : reversed)
        cout << w << endl;

    return 0;
}
