#include <stdio.h>
void printHW(int count);

int main (){
int count;
    printf("Number of times you wish to print Hello world : ");
    scanf("%d", &count);
    printHW(count);
    
    return 0;
}

void printHW(int count){
    if(count ==0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);

}
