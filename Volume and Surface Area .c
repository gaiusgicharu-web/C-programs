/*
Name :Gaius Gicharu
Reg No:CT101/G/26513/25
Description: volume and surface area of a cylinder 
*/
#include<stdio.h>
//main function 
int main (){
    //variable declaration 
    float radius; 
    float height;
    float pi = 3.142 ;
    float volume ;
    float surface_area ;
    
    //prompting the user to enter values of each variable 
    printf("Enter radius\n");
    scanf("%f",& radius);
    
    printf("Enter height\n");
    scanf("%f",& height);
    
    volume =pi * radius * radius * height;
    printf("\n volume is %.2f ",volume);
    surface_area=2 * pi * radius * radius + 2 * pi * radius * height;
    printf("\n surface area is %.2f", surface_area);
    
    return 0;
}

