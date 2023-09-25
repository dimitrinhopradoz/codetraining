#include<stdio.h>

int solveplus(int mat[10][5]){
    int i,j;
    int col[5] = {9,9,9,9,9};

    for(i = 0; i < 9; i++){
        for(j = 1; j < 4; j++){
            if(mat[i][j] && col[j] == 9) col[j] = i;
            if(mat[i][j-1] && mat[i-1][j-1] && !mat[i][j] && !mat[i-1][j] && mat[i][j+1] && mat[i-1][j+1] && col[j] > i) return 1;
        }
    }

    for (i = 0; i < 9; i++){
        if(mat[i][0] && col[0] == 9) col[0] = i;
        if(mat[i][4] && col[4] == 9) col[4] = i;
        if (!mat[i][0] && !mat[i+1][0] && mat[i][1] && mat[i+1][1] && col[j] >= i) return 1;
        if (!mat[i][4] && !mat[i-1][4] && mat[i][3] && mat[i-1][3] && col[j] >= i) return 1;
    }

    for(i = 9; i > 0; i--){
        for(j = 4; j > 0; j--){
            if(!mat[i][j] && !mat[i-1][j] && !mat[i-1][j-1] && mat[i][j-1] && col[j] >= i && col[j-1] >= i) {
                return 1;
                
            }
        }
    }
    
    return 0;
    
}


int solve(){
    int i, j, count, t, l;
    int tab[10][5];
    int test = 0;
    
    for(i = 0; i<10;i++){
        count = 0;
        for(j = 0; j < 5; j++){
            scanf("%i", &tab[i][j]);
            if (tab[i][j]) count++;
        }
        if (count == 5) test++;
    }

    if (test) return printf("Algo de errado nao esta certo...\n");
    

    if (solveplus(tab)) return printf("Eu amo jogar Tetrio.\n");
    return printf("AH NAO VEY\n");


}

int main() {
    int n; scanf("%i", &n);
    int count = 1;
    while (n--) {
        solve();
    }
}
