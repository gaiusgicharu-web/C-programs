/* 
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
Description:Number game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int secret_number;
    int guess ;
    int attempts=0;
    
    srand(time(NULL));
    
    secret_number = (rand() % 20)+1;
    
    printf("Secret number is between 1 and 20 \n");
    
    while (guess = secret_number){ 
    printf("Enter your guess \n");
    scanf("%d", & guess);
     
     attempts++;
     
     if (guess > secret_number){
         printf("Too high!\n");
     }else if (guess < secret_number){
         printf(" Too low!\n");
     }else{
         printf(" congratulations \n");
     }
    
    }
    printf("You guessed the number %d and you had %d attempts. \n",secret_number, attempts);
    
    return 0;
}