#include<stdio.h>

int main() {
    float por[7] = {100/64, 12.5/4, 12.5/2, 12.5, 25, 50, 100};

    int n; scanf("%i\n", &n);
    int a, b;
    float p;
    
    while(n--){
        scanf("%i\n", &a);
        p = 128 * (por[a-1]/100);
        if (p > (int) p) b = (int) p + 1;
        else b = p;
        
        if (b > 64) printf("Almeida %i: \"Voce eh frango, te falta fraco, fiz %i desafios do BX!\"\n", a, b);
        else if (b == 64) printf("Almeida %i: \"Rato melequento!\"\n", a);
        else printf("Sonic: \"Eu te falei, eu nao sou um RATO! eu sou um OURICO! Faltaram soh mais %i...\"\n", 64-b);
    }
    
}
