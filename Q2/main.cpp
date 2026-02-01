/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{

    return 0;
}int countVowels(std::string str) {
    int count = 0;
    std::string vowels = "aeiouAEIOU";
    for (char c : str) {
        if (vowels.find(c) != std::string::npos) count++;
    }
    return count;
}