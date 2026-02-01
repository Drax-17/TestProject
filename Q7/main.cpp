/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

vector<int> removeEven(vector<int> nums) {
    vector<int> result;
    for (int n : nums) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> result = removeEven(nums);

    cout << "Odd numbers: ";
    for (int n : result)
        cout << n << " ";

    return 0;
}
