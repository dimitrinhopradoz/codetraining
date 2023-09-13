#include<stdio.h>

int main() {
    int n; scanf("%i\n", &n);
    
    while (n --){
        int x; scanf("%i\n", &x);
        int m[x][x];
        int andar[x-1];
    
        int g, i, j;
        
        int vida = 3;
        int pontos = 0;
        for (i = 0; i<x; i++){ // GENERATING THE MATRIX WITH 0s
            for (j = 0; j<x; j++){
                m[i][j] = 0;
            }
        }
        
        
        for (i = 0; i < x-1; i++){ // GENERATING THE WALKING VECTOR
            scanf("%i ", &g);
            andar[i] = g;
            if (andar[i] > x - 1) andar[i] = x-1;
            
        }
        
        int k; scanf("%i", &k); // GHOSTS QUANTITY
        
        for (i = 0; i < k; i++){ // GHOSTS POSITION
            int p, q; scanf("%i,%i", &p, &q);
            m[p][q]++;
        }
        
        printf("\n");
        for (i = 0; i < x - 1; i++){ // HOW MUCH TO WALK PRINT
            printf("%i ", andar[i]);
        }
        
        printf("\n");
        for (i = 0; i<x; i++){ // MATRIX PRINT
            for (j = 0; j<x; j++){
                printf("%i ", m[i][j]);
            }
            printf("\n");
        }
        
        printf("MATRIZES:\n");
        
        for (i = 0; i < x - 1; i++){
            if (m[i][0]) {vida--; pontos = pontos - pontos / 2;} // GHOST TEST!
            for (j = 1; j <= andar[i]; j ++){
                if (m[i][j]) {vida--; pontos = pontos - pontos / 2;} // GHOST TEST!
                else {
                    pontos++;
                }
            }
        }
        
        if (m[x-1][0]) {vida--; pontos = pontos - pontos / 2;} // GHOST TEST!
        for (i = 1; i<x; i++){
            if (m[x-1][i]) {vida--; pontos = pontos - pontos / 2;}
            else pontos ++;
        }
        
        
            printf("\n");
        if (vida > 0){
            printf("YOU WIN!!!!!!!!!!!!! campeao mandou muito com %i pontos e %i vidas :D\n", pontos, vida);
        }
        else {
            printf("GAME OVER!! vc eh muito ruim e morreu!\n");
        }
        }
    
}


