#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;// declare & initialize local variable n.
printf("Here is our crazy sum:{x*x}*{x+4}/2\nlet's see the answer!\n");
printf("choose a number: ");
scanf("%d", &n);
int sum = (pow(n,2) * (n + 4) ) / 2; /* define the mathematical formula to calculate the sum of given number. */
printf("The answer is = %d", sum); // print the sum

    return 0;
}
