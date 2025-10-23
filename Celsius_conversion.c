/*
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
DESCRIPTION: conversion of temperature to Celsius 
*/
#include<stdio.h>
// function prototype
float convert_to_celsius(float Farenheit);
void main(){ 
    float Farenheit ;
    float Celsius ;
    printf("Enter temperature in Fahrenheit \n");
    scanf("%f",& Farenheit);
    Celsius = convert_to_celsius(Farenheit);
    printf("The temperature is %4.f °C", Celsius);

}
//function declaration 
     float convert_to_celsius(float Farenheit){
     float Celsius ;
     Celsius = ((Farenheit - 32)*5/9);
   return Celsius ;
   } 

    