#include<stdio.h>
int Square(int num){
    return num * num;
}
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    int result = Square(num);
    printf("Square: %d\n", result);
    return 0;
}
