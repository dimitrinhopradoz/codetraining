#include<stdio.h>
#include<string.h>

int ordem[500];
int pos = 0;

int solve(){
    int i, soma = 0;
    
    char linha[500];
    fgets(linha, 500, stdin);
    int len = strlen(linha);
    
    int aux = len;
    if (len % 2) aux = len - 2;

    if (aux < 1) soma = linha[1] - '0';
    
    for(i = 1; i < aux - 1; i = i+2){
        soma = soma + (linha[i] - '0');
    }
    
    if (soma <= (linha[len-2] - '0')) {
        ordem[pos] = 0;
        pos++;
    }
    else{
        ordem[pos] = linha[len-2] - '0';
        if (ordem[pos] == 0) ordem[pos] = -1;
        pos++;
    }
}


int main() {
    int n, i, j, count; scanf("%i\n", &n);

    while(n--) solve();

    int aux[500];
    
     for(i = 0; i < pos; i++){
         if (ordem[i] == 0) aux[i] = 1;
         else {
             aux[i] = 2;
             count = ordem[i];
             j = i;
             while (count-- && j-- && ordem[i] != -1) {
                 if (ordem[j] > 0) count = count + ordem[j];
                 aux[j] = 0;
             }
         }
     }
     
    for(i = 0; i < pos; i++){ 
        if (aux[i] == 1) printf("adaga do tempo miadissima to fora\n");
        if (aux[i] == 2) printf("essa adaga não ta bixada\n");
    }
    
}
