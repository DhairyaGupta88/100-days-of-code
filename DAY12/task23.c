//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include <stdio.h>  
int main()  
{  
    int days;  
    int fine=0;  
    printf("Enter the number of days late: ");  
    scanf("%d", &days);  
    if(days <= 5) // First 5 days late: ₹2/day
    {  
        fine = days * 2; // Calculate fine for first 5 days  
    }  
    else if(days <= 10)  // Next 5 days late: ₹4/day 
    {  
        fine = (5 * 2) + ((days - 5) * 4); // Calculate fine for next 5 days  
    }  
    else if(days <= 30)  
    {  
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6); // Calculate fine for next 20 days  
    }  
    else  
    {  
        printf("Membership Cancelled\n");  // More than 30 days: Membership Cancelled
        return 0;  
    }  
    printf("The total fine is: Rs. %d\n", fine);  
    return 0;  
}