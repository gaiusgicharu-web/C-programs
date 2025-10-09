/* 
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
Description:Bank ATM withdrawal
*/
#include <stdio.h>
main(){
    int amount;
    int balance = 5000;//start
    printf("your current balance is %d \n", balance);
    
    while(balance>=0)//stop
   {    printf("Enter amount to withdraw \n");
        scanf("%d",& amount);
        balance = balance-amount ;//balance =balance-amount
        printf("New balance = %d \n", balance);
    
    }
    printf("Inserficient balance");

}

