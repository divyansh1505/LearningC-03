#include<stdio.h>
 
 int sum(int n);

 int main (){
    int n;
printf("Enter number : ");
scanf("%d", &n);
sum(n);
 printf("%d", sum(n));
return 0;
 }

 int sum (int n){
if(n==1){
    return 1;
}
int sumNm1 = sum(n-1);
int sumN = sum(n-1) + n;

 }
