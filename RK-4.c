/*
File: RK-4 algorith
Author: ChunyuanBai
Date:2020/03/07
Contact:1445011319@qq.com
*/
#include <stdio.h>
float first_order_derivative(float x,float y)//Solve the first-order-derivative of function;
{
    float result;
    result = 3*x*x + 2*x;//First-Order-Differential-Equation;
    return result;
}
float func1(float stride ,float x_0,float x)//Solve the vaule of the function;
{
    int i, n;
    float result, difference;
    n =(x-x_0)/stride;//Cycles;
    result = 0;
    for(i=0;i<=n;i++)//Find function value by cyclic simulation of RK-4 algorithm;
    {
        difference = (first_order_derivative(x_0+i*stride,0) + 2*first_order_derivative(x_0+(i+1)*stride,0) + 2*first_order_derivative(x_0+(i+2)*stride,0)+first_order_derivative(x_0+(i+3)*stride,0))*stride/6;
        result+=difference;
    }
    return result;
}
int main()
{
    float initial ,stride ,result ,x_0 ,x ,y;
    printf("Please enter the starting point:\n");
    scanf("%f",&x_0);
    printf("Please enter the variable of the corresponding to the function value to be solved:\n");
    scanf("%f",&x);
    printf("Please enter the stride:\n");//The recommended step size is less than one thousandth;
    scanf("%f",&stride);
    printf("Please enter the initial value:\n");
    scanf("%f",&initial);
    result = func1(stride ,x_0 ,x);
    printf("The result is %f\n",result);
    return 0;
}