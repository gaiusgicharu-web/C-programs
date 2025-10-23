/*
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
DESCRIPTION: Calculate electric bill
*/
#include<stdio.h>
// function prototype 
float Electric_bill(int units_consumed);

void main(){
    float total_amount,units_consumed;
    printf("Enter amount of units_consumed\n");
    scanf("%f", &units_consumed);
    total_amount = Electric_bill(units_consumed);
    printf("The total amount is ksh %2.f",total_amount);

}
//function declaration 
    float Electric_bill(int units_consumed){
        float total_amount;
        if(units_consumed <=100){
            total_amount = units_consumed*10;
        }
        else if (units_consumed <=200){
            total_amount = ((units_consumed-100)*15)+(100*10); 
        }
        else{
            total_amount = (100*10)+(100*15)+((units_consumed-200)*20);
        } 
        return total_amount;
    }
    