#include<stdio.h>
int solve(){
    char prt[4][100] = {"Nitrato de Fala coruja297", "O2wlficiNASA", "GTX-Grace 4090", "Paodo-Competech2077"};
    int i, j, test = 0;
    char p[10];
    char mat[6][10];
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    char item = 'A';
    int posX = -1;
    int posY = -1;
    
    int somaX1 = 0;
    int somaY1 = 0;
    
    int somaX2 = 0;
    int somaY2 = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%s", p);
        for(j = 0; j < 10; j++){
            mat[i][j] = p[j];
            if(p[j] == '1') count1++;
            if(p[j] == '2') count2++;
            if(p[j] == '3') count3++;
            if(p[j] == 'F' || p[j] == 'O' || p[j] == 'G' || p[j] == 'C') {
                item = p[j];
                posX = j;
                posY = i;
            }
        }
    }
    
    if (item != 'A') {
        test = 1;
        for(i = posX+1; i<10; i++){
            if(mat[posY][i] != '0'){
                somaX1 = somaX1 + (mat[posY][i] - '0');
            }
        }
        for(i = 0; i < posX; i++){
            if(mat[posY][i] != '0'){
                somaX2 = somaX2 + (mat[posY][i] - '0');
            }
        }
    }
    if (item != 'A') {
        for(i = posY+1; i<6; i++){
            if(mat[i][posX] != '0'){
                somaY1 = somaY1 + (mat[i][posX] - '0');
            }
        }
        for(i = 0; i < posY; i++){
            if(mat[i][posX] != '0'){
                somaY2 = somaY2 + (mat[i][posX] - '0');
            }
        }
    }
    
    int curtoX;
    int curtoY;
    int tot;
    int prtt;
    int totponto = count1+2*count2+3*count3;
    
    if (test){
        if(somaX1<somaX2) curtoX = somaX1;
        else curtoX = somaX2;
        if(somaY1<somaY2) curtoY = somaY1;
        else curtoY = somaY2;
        if (curtoX < curtoY) tot = curtoX;
        else tot = curtoY;
        if (item == 'F') prtt = 0;
        else if (item == 'O') prtt = 1;
        else if (item == 'G') prtt = 2;
        else prtt = 3;
        printf("Opa, achei o item, %s, esta na posicao %ix%i, terei que fazer %i pontos para conseguir chegar la.\n",prt[prtt], posY, posX, tot);
     }
    else{
        printf("Nossa, cheio de predas, consegui %i pontos.\n", totponto);
    }
    
}

int main() {
    int n; scanf("%i\n", &n);
    while(n--) solve();
}
