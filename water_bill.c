/*
Name: Gaius Gicharu 
Reg No:CT101/G/26513/25
Description:water bill
*/
#include<stdio.h> 
int main (){
    //variable declaration 
    int water_unit;
    int water_bill;
    
    printf("Enter water units consumed \n");
    scanf("%d",&water_unit);
    
    if(water_unit <=30){water_bill = water_unit*20; }
    else if(water_unit >=31 && water_unit <=60){water_bill = water_unit*25;}
    else if(water_unit >60){water_bill = water_unit*30;}
    
    printf("Total water bill:%.2d",water_bill);
    
    return 0;
}
    