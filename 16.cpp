#include<stdio.h>
#include<stdlib.h>
int add(void);

int main(void){
    printf("2+4+6+~+100¥[Á`:%d\n", add());  
    system("pause");
    return 0;
}
int add(void){
    static int sum=0;
    int i;
    for(i=2;i<=100;i+=2){
        sum+=i;
    }
    return sum;
}
