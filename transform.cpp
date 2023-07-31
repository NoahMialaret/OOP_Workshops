#include <iostream>

void Transform(int n)
{
    //Should be able to represent any int
    int array[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    //Converts int to binary (in reverse)
    for (int i = 0; n != 0; i++)
    {
        array[i]= n % 2;
        n = n / 2;
    }

    //Prints array in reverse
    bool isOne = false;
    for (int i = 31; i >= 0; i--)
    {
        if (array[i] == 1)
        {
            isOne = true;
        }
        if (isOne)
        {
            std::cout << array[i];
        }
    }

    //Add endline
    std::cout << std::endl;
}

int main()
{
    Transform(696969);

    return 0;
}