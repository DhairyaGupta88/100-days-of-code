#include<stdio.h>
int main()
{ 
 float Radius,Area,Circumference; 
 //using float datatype for more precision
 // Input radius of circle from user
  printf("Enter the Radius \n");
  scanf("%f",&Radius);
  // Calculate area and circumference of circle
  
  Area=3.14*Radius*Radius;
  printf("the area of circle is \t %.2f\n",Area);
 

  Circumference = 2*3.14*Radius;
  printf("the circumference of circle is\t %.2f\n",Circumference);
  return 0; 
  //%.2f is used to print float value upto 2 decimal places
}
    

