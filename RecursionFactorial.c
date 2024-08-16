#include<stdio.h>
 
 int fact(int n);

 int main (){
    int n;
printf("Enter number : ");
scanf("%d", &n);
fact(n);
 printf("%d", fact(n));
return 0;
 }

 int fact (int n){
if(n==0){                  //This is base case, which stops the recursion. You can imagine a tree.
    return 1;              // This can be used interchangeably with iteration
}                          // Iteration have infinite loop and recursion have stack overflow
int factNm1 = fact(n-1);
int factN = fact(n-1)*n;

 }
