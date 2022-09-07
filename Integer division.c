#include <stdio.h>
#include <math.h>
int main()
{
    int n,k,r,d;
    printf("Please enter n,k\n");
    scanf("%i%i",&n,&k);
    d = n / k;
    r = n%k;
    printf("Integer division: %i divided by %i is %i\n", n, k, d);
    printf("The remainder when %i is divided by %i is %i\n",n,k,r);
    return 0;
}
