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

vector<string> sortStrings(vector<string> words) {
    sort(words.begin(), words.end());
    return words;
}

int main() {
    vector<string> words = {"orange", "apple", "banana", "grape"};
    vector<string> sorted = sortStrings(words);

    cout << "Sorted strings:\n";
    for (string w : sorted)
        cout << w << endl;

    return 0;
}
