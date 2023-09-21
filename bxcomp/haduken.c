#include<stdio.h>

int main() {
    int combo, vitoria, valido, i, j;
    char str[31];
    int n; scanf("%i\n", &n);
    char pos[6] = {'A', 'W', 'S', 'D','J','K'};
    char had[4] = {'A', 'S', 'D', 'J'};
    while(n--){
        fgets(str, 31, stdin);
        combo = 0; vitoria = 0; valido = 1;
        
        
        for(i = 0; str[i+1] != '\0'; i++){
            for(j = 0; j < 6; j++){
                if(str[i] == pos[j]) break;
                else if (j == 5){
                    valido = 0;
                    str[i + 1] = '\0';
                }
            }
        }
        
        if(!valido) {
            printf("Para de apertar qualquer coisa noob\n");
            continue;
        }
        
        for(i = 0; str[i] != '\0'; i++){
            if(str[i] == had[combo]){
                combo++;
                if (combo == 4){
                    vitoria = 1;
                    str[i + 1] = '\0';
                    break;
                }
            }
            else {
                combo = 0;
            }
        }
        if (vitoria) printf("HADOUKEEEN\n");
        else printf("Uuugh Uuugh...Continue? 10, 9, 8, 7, 6, 5, 4, 3, 2, 1...\n");
    }
    return 0;
}
