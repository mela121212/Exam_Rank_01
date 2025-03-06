unsigned int    lcm(unsigned int a, unsigned int b)
{
    int n = 0;

    if(a == 0 || b == 0)
        return(0);
    n = (a > b) ? a : b;
    while(1) // BUCLE INFINITTOOOOO
    {
        if(n % a == 0 && n % b == 0)
            return(n);
        n++;
    }
}

//aqui si que pueden ser negativos pero en pgdg nooooo