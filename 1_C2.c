//Calculate the Total Cost After Discount. 
#include <stdio.h>
void main(){
    float price,discount,totalprice;
    printf("Enter a product price: ");
    scanf("%f",&price);
    printf("Enter a product discount percentage: ");
    scanf("%f",&discount);
    discount /= 100;
    totalprice = price - (price*discount);
    printf("%.2f",totalprice); 
}