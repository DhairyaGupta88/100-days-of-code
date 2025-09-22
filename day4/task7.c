//swapping two numbers without using third variable
#include<stdio.h>
int main()
{
 //declaration and initialization
int a=3;
int b=5;
printf("before swappng a=%d,b=%d\n",a,b);
a=a+b; //sum of a and b is stored in a a+b=8    
b=a-b;//value of a is stored in b 8-5=3
a=a-b;//value of b is stored in a 8-3=5
printf("after swapping a=%d,b=%d\n",a,b);//printing the values after swapping
return 0;   
}
