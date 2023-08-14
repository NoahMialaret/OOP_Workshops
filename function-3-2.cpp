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

bool equalsArray(int* numbers1, int* numbers2, int length)
{
    if (length < 1)
    {
        return false;
    }

    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i])
        {
            return false;
        }
    }

    return true;
}

int* reverseArray(int* numbers1, int length)
{
    int* nums = new int[length];

    for (int i = 0; i < length; i++)
    {
        nums[length - i - 1] = numbers1[i];
    }

    return nums;
}