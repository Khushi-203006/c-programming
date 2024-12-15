#include <stdio.h>

// Function to move disks recursively
void towerOfHanoi(int n, char start, char end, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", start, end);
        return;
    }
    towerOfHanoi(n - 1, start, auxiliary, end);

    printf("Move disk %d from %c to %c\n", n, start, end);

    towerOfHanoi(n - 1, auxiliary, end, start);
}

int main() {
    int n; 
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("Steps to solve the Tower of Hanoi:\n");
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}
