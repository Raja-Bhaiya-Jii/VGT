int lengthstr(char *k)
{
    int i = 0;
    while (*(k + i) != '\0')
    {
        i++;
    }
    return i;
}
void Copystr(char *p, char *k)
{
    int i = 0;
    while (*(p + i) != '\0')
    {
        *(k + i) = *(p + i);
        i++;
    }
    *(k + i) = '\0';
}
void Reversestr(char *p1, char *p2, int k)
{
    int i, j = 0;
    i = k - 1;
    while (*(p1 + i) > 0)
    {
        *(p2 + j) = *(p1 + i);
        i--;
        j++;
    }
    *(p2 + j - 1) = '\0';
}

void Capitalstr(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) >= 97 && *(p + i) <= 122)
        {
            *(p + i) = *(p + i) - 32;
        }
    }
}

void Smallstr(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) >= 65 && *(p + i) <= 90)
        {
            *(p + i) = *(p + i) + 32;
        }
    }
}

void CapitalFstr(char *n)
{
    int i;
    for (i = 0; *(n+i) != '\0'; i++)
    {
        if (*(n+i) == 32)
        {
            if ( *(n+i+1) >= 97 &&  *(n+i+1) <= 122)
            {
               *(n+i+1) = *(n+i+1) - 32;
            }
        } 
    }
}
