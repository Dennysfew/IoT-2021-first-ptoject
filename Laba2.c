#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,h,d,x,sum,ans;
    int k = 1;
    int p = -1;
    sum = 0;
    printf("Enter a: ");
    scanf("%f",&a);

    printf("Enter b: ");
    scanf("%f",&b);

    printf("Enter h: ");
    scanf("%f",&h);

    printf("Enter d: ");
    scanf("%f",&d);

    for (x = a; x <= b; x+=h)
    {

        do
        {

            ans=(pow(p,k)*pow(x,(2*k+1)))/((2*k+1)*(2*k+3));
            sum+=ans;
            k++;

        }
        while (ans>d);
        printf("For x = %f   sum  = %f\n", x, sum);
    }
    return 0;
}