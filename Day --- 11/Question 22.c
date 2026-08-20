// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main(){
    float cost_price;
    float selling_price;
    float profit_loss;
    float percentage;

    printf("Enter cost price: ");
    scanf("%f", &cost_price);

    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price){
    	
        profit_loss = selling_price - cost_price;
        percentage = (profit_loss / cost_price) * 100;
        
        printf("Profit = %.2f\n", profit_loss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (cost_price > selling_price){
    	
        profit_loss = cost_price - selling_price;
        percentage = (profit_loss / cost_price) * 100;
        
        printf("Loss = %.2f\n", profit_loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else{
    	
        printf("No profit, no loss.\n");
    }

    return 0;
}