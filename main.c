#include<stdio.h>

int main()

{
    int years =0 , months =0 , days=0;
    int n;

    scanf("%i", &n);

    while(n!= 0)
    {
        if(n>=365)
        {
            years++;
            n-=365;
        }
        else if(n>=30)
        {
            months++;
            n-=30;
        }
        else
        {
            days++;
            n--;
        }
    }


    printf("%i years\n%i months\n%i days\n", years, months, days);
}