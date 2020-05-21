#include<stdio.h>
int fact(int n){
    
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n,k;
    printf("enter the value");
    scanf("%d", &n);
    k=fact(n);
    printf("%d",k);
    return 0;
}