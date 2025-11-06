/*
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
Description: university 
*/#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ? Define the structure
typedef struct {
    char name[100];
    int registrationNumber;
    float totalMarks;
} Student;

int main() {
    Student s; // ? Create an instance of the struct

    // ? Prompt the user to enter student details
    printf("Enter the name of student: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove newline

    printf("Enter the student's registration number: ");
    scanf("%d", &s.registrationNumber);

    printf("Enter the student's total marks: ");
    scanf("%f", &s.totalMarks);

    // ? Open file in binary write mode
    FILE *fp;
    fp = fopen("/storage/emulated/0/Download/CodingC/results.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    // ? Write the entire struct to the binary file
    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);

    printf("\nStudent record saved successfully to results.dat\n");
    
     fp=fopen("/storage/emulated/0/Download/CodingC/results.dat", "rb");
    if (fp==NULL) {
	printf("Error reading file");
	return 1;
	}
	fread(&s, sizeof(Student), 1, fp);
    fclose(fp);
    
	printf("\nContent from results.dat file:\n");
    printf("Name: %s\n", s.name);
    printf("Registration Number: %d\n", s.registrationNumber);
    printf("Total Marks: %.2f\n", s.totalMarks);
		
    return 0;
}