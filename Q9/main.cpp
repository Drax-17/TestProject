/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int sumList(vector<int> nums) {
    int total = 0;
    for (int n : nums) {
        total += n;
    }
    return total;
}

int main() {
    vector<int> nums = {2, 4, 6, 8};
    cout << "Sum = " << sumList(nums);
    return 0;
}
