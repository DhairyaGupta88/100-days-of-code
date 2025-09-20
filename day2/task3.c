#include<stdio.h>
int main()
{ 
unsigned int L,B,Area,perimeter;
 // Input length and breadth of rectangle from user
  printf("enter the length \n");
  scanf("%d",&L);

  printf("enter the breadth \n");
  scanf("%d",&B);
  // Calculate area and perimeter of rectangle
  Area=L*B;
  printf("the area of rectangle is \t %d\n",Area);

  perimeter=2*(L+B);
  printf("the perimeter of rectangle is\t %d\n",perimeter);
  return 0; 
}
    

