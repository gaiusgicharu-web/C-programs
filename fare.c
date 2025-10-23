/*
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
DESCRIPTION: Calculate fare
*/
#include<stdio.h>
// function prototype
float bus_fare(int distance);
void main(){ 
    float distance;
    float fare;
    printf("Enter distance covered\t");
    scanf("%f",& distance);
    fare = bus_fare (distance);
    printf("The total fare is ksh %2.f",fare);

}
//function declaration 
float bus_fare(int distance){
   float amount; 
   amount = distance * 50 ;
   return amount;
}
    