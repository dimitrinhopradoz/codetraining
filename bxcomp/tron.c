#include<stdio.h>

int main() {
    int i, n, pos, conta, cat, ang, test; scanf("%i", &n);
    int angs[3] = {8, 7, 5};
    
    while(n--){
        test = 1;
        for(i = 0; i<3; i++){
            scanf("%i,%i", &cat, &ang);
            pos = (ang / 15) - 2;
            conta = (cat*10) % angs[pos];
            if (conta) test = 0;
        }

        if (test) printf("Ele teve um encontron com a derrota, hora de tomar cafe no PET.\n");
        else printf("Lamentron, mas perdi, teremos que derrotar ele na batalha de motos de luz.\n");
    }
}
