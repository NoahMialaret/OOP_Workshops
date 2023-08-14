#include <iostream>

int* readNumbers()
{
    int size = 4;
    int* nums = new int[size];
    for (int i = 0; i < size; i++)
    {
        //std::cout << "Please enter a number (" << i + 1 << "/" << size << "): ";
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

int secondSmallestSum(int* numbers, int length)
{
    if (length < 1)
    {
        return -1;
    }

    if (length == 1)
    {
        return numbers[0];
    }

    int smallest = 0;
    for (int i = 0; i < length; i++)
    {
        smallest += abs(numbers[i]);
    }
    int secondSmallest = smallest + 1;

    for(int i = 0; i < length; i++)
    {
        int sum = 0;

        for (int j = i; j < length; j++)
        {
            sum += numbers[j];

            if (sum <= smallest)
            {
                secondSmallest = smallest;
                smallest = sum;
            }
            else if (sum < secondSmallest)
            {
                secondSmallest = sum;
            }

            //std::cout   << "Cur sum is: " << sum << " - With smallest: " << smallest 
            //            << " - And second smallest: " << secondSmallest << std::endl;
        }
    }

    return secondSmallest;
}