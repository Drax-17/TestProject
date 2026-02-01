/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double median(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    if (n % 2 == 0)
        return (nums[n/2 - 1] + nums[n/2]) / 2.0;
    else
        return nums[n/2];
}

int main() {
    vector<int> numbers = {5, 2, 1, 4, 3};
    cout << "Median = " << median(numbers);
    return 0;
}
