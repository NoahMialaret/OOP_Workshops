#include <iostream>

extern int* readNumbers();
extern void printNumbers(int*, int);
extern bool equalsArray(int*, int*, int);
extern int* reverseArray(int*, int);

int main()
{
    int* nums = readNumbers();
    int* numsRev = reverseArray(nums, 10);


    std::cout   << "Are the two arrays the same? " 
                << (equalsArray(nums, numsRev, 10) ? "Yes" : "No") << std::endl;

    delete[] nums;
    delete[] numsRev;

    return 0;
}