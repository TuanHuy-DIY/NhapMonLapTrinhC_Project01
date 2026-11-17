#include "number.h"

int SoNguyenTo(int n)   //Kiem tra so nguyen to
{
    if(n < 2)
        return 0;

    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int UCLN(int a,int b)     //Tim UCLN
{
     while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int BCNN(int a, int b)
{
    if(a == 0 || b == 0)
        return 0;

    return (a / UCLN(a, b)) * b;
}

int Daonguocso(int n)
{
    int Daonguoc = 0;

    while(n>0)
    {
        Daonguoc=Daonguoc * 10 + n%10;
        n = n/10;
    }
    return Daonguoc;
}

int DemSo(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int Giaithua(int n)
{
    int s=1;
    for(int i=1;i<=n;i++)
        s=s*i;
    return s;
}

unsigned long long fibonacci(int n)
{
    if(n <= 1)
        return n;

    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long c;

    for(int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}
