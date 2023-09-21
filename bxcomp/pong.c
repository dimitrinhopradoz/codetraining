#include<stdio.h>

int solve(){
    int n, j1, j2;scanf("%i ", &n);
    int v1 = 0, v2 = 0;
    
    while(n--){
        scanf("%i %i", &j1, &j2);
        
        if (j1 > j2) {
            v1++;
            printf("%i-1 ", j1);
            
        }
        else if (j1 < j2) {
            v2++;
            printf("%i-2 ", j2);
        }
        else printf("%i-Empate ", j2);
    }
    
    if (v1 > v2){
        printf("Resultado: 1\n");
    }
    else if (v1 < v2){
        printf("Resultado: 2\n");
    }
    else {
        printf("Resultado: Empate\n");
    }
    
}


int main() {
    int n;scanf("%i", &n);
    
    while(n--) solve();
}
