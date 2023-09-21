#include<stdio.h>

int solve(){
    int i, pos, final, metero = 0;
    int espaco[10];
    
    for(i = 0; i < 10; i++){
        scanf("%i", &espaco[i]);
        if (espaco[i] == 2) pos = i;
    }
    final = 9 - pos;
    
    for(i = pos; i >= 0; i--){
        if (espaco[i] == 1 && pos-i <= final){
            return printf("Nu, vou tascar um beijo numa pedra do espa¸co se eu entrar ai, paia.");
        }
    }
    
    for(i = pos; i < 10; i++){
        if (espaco[i] == 1){
            metero++;
        }
    }
    
    if (metero > 2){
        return printf("Nu, vou tascar um beijo numa pedra do espa¸co se eu entrar ai, paia.");
    }
    else{
        return printf("Explorador do espa¸co para base alpha, conseguimos passar pela chuva de meteoros!");
    }
    
    
}


int main() {
    int n; scanf("%i", &n);
    
    while (n--) {
        solve();
        printf("\n");
    }
}
