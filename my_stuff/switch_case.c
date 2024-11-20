#include<stdio.h>
int main(){
    float a,b,c,d,e,sum,per;
    int grade;
    printf("Enter marks: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per =sum/5;
    printf("%f\n",per);
    grade = (int)(per/10);
    printf("%d\n",grade);
    switch(grade){
        case(9):
            printf("A+");
            break;
        case(8):
            printf("A");
            break;
        case(7):
            printf("B+");
            break;
        case(6):
            printf("B");
            break;
        case(5):
            printf("C");
            break;
        default:
            printf("Fail");
            break;
    }
    return 0;
}