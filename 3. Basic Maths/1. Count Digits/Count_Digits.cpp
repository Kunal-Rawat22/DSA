int countDigits(int n)
{
    // Write your code here.
    int count = 0;
    int w = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit != 0 && w % lastDigit == 0)
            count++;
        n = n / 10;
    }
    return count;
}