#include<stdio.h>
int main (){
    int n;
    int fact;
    fact =1;
printf("Enter the number :  ");
scanf("%d", &n);

for(int i=1; i<=n; i++ ){
fact = fact*i;    
}
printf("Factorial of the given number is : %d", fact);
return 0;
}