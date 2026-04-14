#include <stdio.h>

int main(void) {
   int currentPrice;
   int lastMonthsPrice;
   
   scanf("%d", &currentPrice);
   scanf("%d", &lastMonthsPrice);
   
   printf("This house is $%d. The change is $%d since last month.\nThe estimated monthly mortgage is $%f.", currentPrice, currentPrice-lastMonthsPrice, ((currentPrice*0.051)/12));
}
