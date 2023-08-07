#include <iostream>

void changeValue(double* pd)
{
    *pd = 42.0;
}

void printArray(double* pd, int length)
{
    if (length < 1)
    {
        return;
    }

    for (int i = 0; i < length; i++)
    {
        std::cout << pd[i] << " ";
    }

    std::cout << std::endl;
}

double arrayMax(double* pd, int length)
{
    if (length < 1)
    {
        return -1;
    }

    double max = pd[0];

    for (int i = 0; i < length; i++)
    {
        if (max < pd[i])
        {
            max = pd[i];
        }
    }

    return max;
}

double* dynamicArray(int arrSize, double initVal)
{
    if(arrSize < 1)
    {
        return nullptr;
    }

    double* dyArr = new double[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        dyArr[i] = initVal;
    }

    return dyArr;
}