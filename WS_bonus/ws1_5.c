#include <stdio.h>

int main(void) {
   int userNum;
   int num2;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   printf("You entered: %d\n", userNum);
   printf("%d squared is %d\n", userNum, userNum*userNum);
   printf("And %d cubed is %d!!\n", userNum, userNum*userNum*userNum);

   printf("Enter another integer:\n");
   scanf("%d", &num2);
   printf("%d + %d is %d\n", userNum, num2, userNum+num2);
   printf("%d * %d is %d\n", userNum, num2, userNum*num2);
}