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

void hexDigits(int *numbers,int length)
{
    for (int i = 0; i < length; i++)
    {
        switch (numbers[i])
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                std::cout << i << " " << numbers[i] << " " << numbers[i] << std::endl;
                break;
            case 10:
                std::cout << i << " " << numbers[i] << " " << 'A' << std::endl;
                break;
            case 11:
                std::cout << i << " " << numbers[i] << " " << 'B' << std::endl;
                break;
            case 12:
                std::cout << i << " " << numbers[i] << " " << 'C' << std::endl;
                break;
            case 13:
                std::cout << i << " " << numbers[i] << " " << 'D' << std::endl;
                break;
            case 14:
                std::cout << i << " " << numbers[i] << " " << 'E' << std::endl;
                break;
            case 15:
                std::cout << i << " " << numbers[i] << " " << 'F' << std::endl;
                break;
            default:
                std::cout << "This cannot be converted into a hex digit." << std::endl;
        }
    }
}