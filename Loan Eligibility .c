/*
Name: Gaius Gicharu
Reg No:CT101/G/26513/25
Description: checking eligibility of a loan
*/
#include<stdio.h>
//main function 
int main() {
    //variable decelerations 
    int age;
    float income;
    //prompt the user to enter age
    printf(" Enter your age:\n");
    scanf("%d",&age); 
    //prompt the user to enter income
    printf("Enter your  annual income:\n");
    scanf("%f",&income);
    //checking eligibility 
    if (age>=21 && income>=21000){printf("congratulations you qualify for a loan "); }
    else {printf(" Unfortunately we are unable to give you a loan at this time");
    }
    
    return 0;
}