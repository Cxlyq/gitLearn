#include "stdio.h"
void func(int a,int b){
    printf("%d",a+b);
}
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    func(a,b);
}