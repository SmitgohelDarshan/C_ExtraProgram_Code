// If cost price and selling price of an item is input through the keyboard, write a program to determine 
// whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he 
// incurred. 
#include <stdio.h>
void main(){
    int price, sellingPrice, profit, loss; 
    printf("Enter Cost price and Selling price: ");
    scanf("%d %d",&price, &sellingPrice);
    if(sellingPrice > price){
        profit = sellingPrice - price;
        printf("Seller has made %d profit.",profit);
    }
    else{
        loss = price - sellingPrice;
        printf("Seller %d loss.",loss);
    }
}