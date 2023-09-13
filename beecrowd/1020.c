#include<stdio.h>

int main() {
    
    int n;scanf("%i", &n);
    
    int ano = n / 365;
    int mes = (n % 365) / 30;    
    int dia = (n % 365) % 30;
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);
    return 0;
}
