#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    int marks;
};

int main() {
    struct student S1[5];int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d (ID Name Marks): ", i + 1);
        scanf("%d %s %d", &S1[i].id, S1[i].name, &S1[i].marks);
    }
    printf("\nStudent details:\n");
    for (i = 0; i < 5; i++) {
        printf("ID: %d, Name: %s, Marks: %d\n", S1[i].id, S1[i].name, S1[i].marks);
    }
    return 0;
}
