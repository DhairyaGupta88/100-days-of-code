//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>  
int main()  
{  
    int units;  
    int bill=0;  
    printf("Enter the number of units consumed: ");  // Input units consumed
    scanf("%d", &units);  
    if(units <= 100)  // First 100 units at ₹5/unit
    {  
        bill = units * 5;  // Calculate bill for first 100 units
    }  
    else if(units <= 200)  // Next 100 units at ₹7/unit
    {  
        bill = (100 * 5) + ((units - 100) * 7);  // Calculate bill for next 100 units
    }  
    else if(units <= 300)  // Next 100 units at ₹10/unit
    {  
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);  // Calculate bill for next 100 units
    }  
    else  
    {  
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);  // Calculate bill for above 300 units
    }  
    printf("The total electricity bill is: Rs. %d\n", bill);  
    return 0;
}