int count(int array[], int n)
{
    int count = 0;

    if (n < 1)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}