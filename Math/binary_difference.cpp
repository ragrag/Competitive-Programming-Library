int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int FlippedCount(int a, int b)
{
    return countSetBits(a^b);
}