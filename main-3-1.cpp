#include <iostream>

extern int* readNumbers();
extern void printNumbers(int*, int);
extern bool equalsArray(int*, int*, int);

int main()
{
    int* nums1 = readNumbers();
    int* nums2 = readNumbers();


    std::cout   << "Are the two arrays the same? " 
                << (equalsArray(nums1, nums2, 10) ? "Yes" : "No") << std::endl;

    delete[] nums1;
    delete[] nums2;

    return 0;
}