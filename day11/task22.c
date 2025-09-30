//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()      
{
    float cp, sp, profit, loss, profit_perc, loss_perc;//cp=cost price, sp=selling price
    printf("Enter the cost price and selling price\n");
    scanf("%f%f", &cp, &sp);
    if (sp > cp)//if selling price is greater than cost price then profit
    {
        profit = sp - cp;//profit=selling price-cost price
        profit_perc = (profit / cp) * 100;//profit percentage=(profit/cost price)*100
        printf("The profit is %.2f and profit percentage is %.2f%%\n", profit, profit_perc);
    }
    else if (cp > sp)//if cost price is greater than selling price then loss
    {
        loss = cp - sp;//loss=cost price-selling price
        loss_perc = (loss / cp) * 100;//loss percentage=(loss/cost price)*100
        printf("The loss is %.2f and loss percentage is %.2f%%\n", loss, loss_perc);
    }
    else
    {
        printf("No profit no loss\n");//if cost price is equal to selling price then no profit no loss
    }
    return 0;
}