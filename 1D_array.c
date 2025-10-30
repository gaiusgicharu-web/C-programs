/*
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
DESCRIPTION: 1D array
*/
#include<stdio.h>
int main (){
    float revenue [7];
    float total_revenue=0;
    float average ;
    
    int i;
    for (i=0;i<7;i++){ 
    printf(" Enter revenue for the day %d:",i+1);
    scanf("%f",& revenue[i]);
    total_revenue+=revenue [i];
    }
    average=total_revenue/7;
    
    printf("\nTotal weekly revenue is KSH %.2f\n",total_revenue);
    printf(" The average daily revenue is KSH %.2f\n", average);
    
    return 0;
}

    