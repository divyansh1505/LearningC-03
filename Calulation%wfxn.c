#include<stdio.h>

int calcPer(int science, int maths, int english);

int main (){
    int sc, maths, eng;
    printf("Science marks :");
    scanf("%d", &sc);
    printf("Maths marks : ");
    scanf("%d", &maths);
    printf("English marks : ");
    scanf("%d", &eng);
    printf("Percentage is : %d", calcPer(sc, maths, eng));   // yaha pr jo variables h unhe consider kia jata h


    return 0;
}

int calcPer(int science, int maths, int english){
    return ((science+maths+english)/3);
}