/* 
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
Description: password system 
*/
#include <stdio.h>
int main() {
   int password ;
   int correct_password = 1234;
   
   printf("Password required \n");
   
   do {
       printf("Enter password \n");
       scanf("%d",& password);
   
   if (password != correct_password){
       printf("Incorrect password.Please try again\n");
   }
   }
   while(password != correct_password);
       printf("Access Granted \n");
   
   return 0;

}