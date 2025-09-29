#include <stdio.h>

int retornaDobro(int num);

int main(){
    int dobro = retornaDobro(2);
    printf("%d",dobro);
    return 0;
}

int retornaDobro(int num){
    int dobro = num*2;
    return dobro;
}