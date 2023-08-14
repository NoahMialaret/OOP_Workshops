#include <iostream>

int* readNumbers()
{
    int* nums = new int[10];
    for (int i = 0; i < 10; i++)
    {
        //std::cout << "Please enter a number (" << i + 1 << "/10): ";
        std::cin >> nums[i];
    }

    return nums;
}

void printNumbers(int* numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}