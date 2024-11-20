#include<stdio.h>
int main(){
    float a,b,c,d,e,sum,per;
    printf("Enter marks:- ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per= sum/5;
    printf("Percentage= %f\n",per);
    if (per>90){
        printf("Grade= A+");
    }
    else if (per<=90 && per>80){
        printf("Grade= A");
    }
    else if (per<=80 && per>70){
        printf("Grade= B+");
    }
    else if (per<=70 && per>60){
        printf("Grade= B");
    }
    else if (per<=60 && per>50){
        printf("Grade= C");
    }
    else{
        printf("Grade F \n Fail!");
    }
return 0;
}