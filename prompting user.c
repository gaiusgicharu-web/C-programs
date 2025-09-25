/*
Name: Gaius Gicharu 
Reg No:CT101/G/26513/25
Description: program prompting the user to enter height, bank balance and phone number 
*/
#include<stdio.h> 
int main (){

           int height;
           int bankbalance;
           int phonenumber;
           printf("Enter your height:\n");
           scanf("%d",&height);
           printf("Enter your bank balance:\n");
           scanf("%d",&bankbalance);
           printf("Enter your phone number:\n");
           scanf("%d",&phonenumber);
           printf("your height is %dcm, your bank balance is ksh%d and your phone number is +254%d", height,bankbalance,phonenumber);
           
           return 0;
}
