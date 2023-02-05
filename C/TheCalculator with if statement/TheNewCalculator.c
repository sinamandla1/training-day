#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;// declare & initialize local variable n.
printf("Here is our crazy sum:{x*x}*{x+4}/2\nlet's see the answer!\n");
printf("choose a number: ");
scanf("%d", &n);
int sum = (pow(n,2) * (n - 4) ) / 2;
if (sum>0)
{
        printf("The answer is = %d", sum);
        }
else
{
        printf("Please use a number thats bigger than 0!");
        exit(0);
}
    return 0;
}
