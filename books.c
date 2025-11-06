/*
Name:Gaius Gicharu 
Reg No:CT101/G/26513/25
Description:book keeping 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int number;
    char title[300];

    // Open file in append mode
    FILE *fp = fopen("/storage/emulated/0/Download/CodingC/borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Enter the number of books borrowed today: ");
    scanf("%d", &number);

    // Clear newline left by scanf
    getchar();
    int i;
    for ( i = 0; i < number; i++) {
        printf("Enter the title of book %d: ", i + 1);
        fgets(title, sizeof(title), stdin);

        // Remove trailing newline from fgets
        title[strcspn(title, "\n")] = '\0';

        // Write title to file
        fprintf(fp, "%s\n", title);
    }
    printf("\nAll book tittles are saved successfully in the file");

    fclose(fp);
    return 0;
}