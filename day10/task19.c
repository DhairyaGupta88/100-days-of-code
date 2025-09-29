//write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include<stdio.h>
int main()
{ 
    //enter the sides of triangle
    unsigned int side_1, side_2, side_3;

    printf("enter the sides of triangle\n"); // unsigned is used to enter only positive values
    scanf("%d %d %d",&side_1, &side_2, &side_3);
    //condtion for valid triangle
    if((side_1==0) || (side_2==0) || (side_3==0))
    {
        printf("the triangle is not valid\n");
        return 0;
    }
    // condition for equilateral triangle
    if((side_1==side_2) && (side_2==side_3))
    {
        printf("the triangle is Equilateral\n");
    }
    // condition for isoceles triangle
    else if ((side_1==side_2) || (side_2==side_3) || (side_1==side_3))
    {
        printf("the triangle is isoceles\n");
    }
    else {
        printf("THE triangle is scalene\n");
    }
    
    return 0;
}