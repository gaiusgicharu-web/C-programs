/*
Name: Gaius Gicharu 
Reg No:CT101/G/26513/25
Description:Data bundle purchase 
*/
#include<stdio.h> 
int main (){
    //variable declaration 
    int choose;
    printf("1.100MB @ 50 KES\n");
    printf("2.500MB @ 200 KES\n");
    printf("3.1GB @ 350 KES\n");
    printf("4.2GB @ 600 KES\n");
    
    printf("Enter your choice(1-4)\t");
    scanf("%d",& choose);
    
    switch (choose){
    case 1:
    printf("\n You selected 100MB.Cost = 50 KES\n");
    break;
    
    case 2:
    printf("\n You selected 500MB.Cost = 200 KES\n");
    break;
    
    case 3:
    printf("\n You selected 1GB.Cost = 350 KES\n");
    break;
    
    case 4:
    printf("\n You selected 2GB.Cost = 600 KES\n");
    break;
    
    default:
    printf("\n Invalid choice!!");
    break;
    }
    
    return 0;
}
    