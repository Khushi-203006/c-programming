#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    // Compare strings using strcmp
    result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result > 0) {
        printf("First string is greater than the second.\n");
    } else {
        printf("First string is less than the second.\n");
    }

    return 0;
}




/*#include<stdio.h>
#include<string.h>
int main(){
    char str_name[30], emp_name[30];
    printf("enter name: ");
    gets(str_name);
    strcpy(emp_name,str_name); 
    printf("emp name= %s",emp_name);
    return 0;
}*/