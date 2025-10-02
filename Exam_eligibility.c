/*
Name: Gaius Gicharu 
Reg No:CT101/G/26513/25
Description: Exam eligiblity 
*/
#include<stdio.h> 
int main (){
    //variable declaration 
    int Attendance;
    int Average_marks;
    //prompt the user to enter:
    printf("Enter attendance \n");
    scanf("%d",&Attendance); 
    
    printf("Enter average marks\n");
    scanf("%d",&Average_marks);
    
    if(Attendance>=75 && Average_marks>=40){
    printf("Eligible for final exam");
    } else { printf("Not eligible");}
    
    return 0;
}
    