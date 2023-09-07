#include <stdio.h>

int main() {
    int i;float n; scanf("%f", &n);
    
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    
    printf("NOTAS:\n");
    for(i = 0; i < 6; i++) {  // do the first part
        int a = 0;
        if ((int) (n) / notas[i]) {
            a = n / notas[i];
            n = n - notas[i] * a;
        }
        printf("%i nota(s) de R$ %i.00\n", a, notas[i]);
    }
    n = (n * 100); // work only with integers
    
    if (n + 0.5 < (int)(n)) n = (int) n; // ceil up and down function
    else n = (int) (n + 0.1);  // ceil up and down function
    
    printf("MOEDAS:\n");
    for(i = 0; i < 6; i ++){ // do the second part
        int a = 0;
        if ((int) (n) / moedas[i]){
            a = n / moedas[i];
            n = n - moedas[i] * a;
        }
        printf("%i moeda(s) de R$ %.2f\n", a, ((float) (moedas[i])) / 100);
    }

    return 0;
}
