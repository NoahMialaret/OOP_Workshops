#include <iostream>

extern int* readNumbers();
extern void printNumbers(int*, int);
extern int secondSmallestSum(int*, int);

int main()
{
    int* nums = readNumbers();

    int second = secondSmallestSum(nums, 4);

    std::cout << "The second smallest sum is: " << second << std::endl;

    delete[] nums;

    return 0;
}