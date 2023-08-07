#include <iostream>
#include "workshop.h"

int main()
{
    double d = 24.5;
    // char c = 62;
    double* pd = &d;
    // char* pc = &c;

    changeValue(pd);

    int size = 10;
    double* dArr = dynamicArray(size, d);


    printArray(dArr, size);
    std::cout << "Max: " << arrayMax(dArr, size) << std::endl;

    delete[] dArr;

    return 0;
}