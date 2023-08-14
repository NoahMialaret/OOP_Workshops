extern int* readNumbers();
extern void printNumbers(int*, int);

int main()
{
    int* nums = readNumbers();

    printNumbers(nums, 10);

    delete[] nums;

    return 0;
}