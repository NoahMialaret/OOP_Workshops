#include <iostream>

void Shift_Right(int array[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = 0;

    for(int i = 0; i < n; i++)
    {
        std::cout << array[i];
    }

    std::cout << std::endl;
}

void Shift_Left(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    array[n - 1] = 0;

    for(int i = 0; i < n; i++)
    {
        std::cout << array[i];
    }

    std::cout << std::endl;
}

void Addition(int array1[], int array2[], int n)
{
    int carry = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        int num = array1[i] + array2[i] + carry;
        if (num >= 2)
        {
            num = num - 2;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        array1[i] = num;
    }

    if(carry == 1)
    {
        std::cout << 1;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << array1[i];
    }

    std::cout << std::endl;
}

int main()
{
    int array1[12] = {1,1,1,0,1,1,1,0,1,0,1,1};
    int array2[12] = {1,1,1,0,1,1,1,0,1,0,1,1};

    for(int i = 0; i < 12; i++)
    {
        std::cout << array1[i];
    }

    std::cout << std::endl;

    Addition(array1, array2, 12);

    // Shift_Left(array, 12);

    // Shift_Right(array, 12);

    return 0;
}