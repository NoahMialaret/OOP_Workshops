extern int* readNumbers();
extern void printNumbers(int*, int);
void hexDigits(int*, int);

int main()
{
    int* nums = readNumbers();

    hexDigits(nums, 10);

    delete[] nums;

    return 0;
}