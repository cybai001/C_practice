/*
File: Integral
Author: ChunyuanBai
Time:2020/03/05
Contact:1445011319@qq.com
*/
#include <stdio.h>
float func1(float x)//The function to be integraled
{
    float result;
    result = x*x;
    return result;
}
float integral(float a,float b,int n)//The function of the process of the integral;
{
    int i;
    float h, sum, area;
    sum = 0;
    h = (b-a)/n;
    for(i =1;i<=n;i++)
    {
        area = (func1(a+(i-1)*h)+func1(a+i*h))*h/2;//The area of every trapezoid;
        sum+=area;
    }
    return sum;
}
int main()//Print a and b(start-end interval),print n(servings);
{
    int n;
    float a, b, result;
    printf("Please enter the a and b:\n");
    scanf("%f,%f",&a,&b);
    printf("Please enter the n:\n");
    scanf("%d",&n);
    result = integral(a,b,n);
    printf("The result is %f",result);
    return 0;
}