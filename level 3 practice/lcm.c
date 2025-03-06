unsigned int    lcm(unsigned int a, unsigned int b)
{
    int num;

    if(a == 0 || b == 0)
        return(0);
    num = (a > b) ? a : b;
    while(1)
    {
        if(a % num == 0 && b % num == 0)
            return(num);
        num++;
    }
}