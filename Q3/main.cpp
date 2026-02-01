/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

double average(vector<int> nums) {
    int sum = 0;
    for (int n : nums) {
        sum += n;
    }
    return (double)sum / nums.size();
}

int main() {
    vector<int> numbers = {2, 4, 6, 8};
    cout << "Average = " << average(numbers);
    return 0;
}

