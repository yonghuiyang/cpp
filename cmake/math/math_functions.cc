double power(double base, int exp)
{
    int res = 1;

    if (exp == 0)
    {
        return 1;
    }

    for (int i = 0; i < exp; i++)
    {
        res = res * base;
    }

    return res;
}

