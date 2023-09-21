#include<stdio.h>
#include<string.h>

int main() {
    int i, count, inter;
    char linha[100];
    char cod[4];
    
    scanf("%s\n", cod);
    
    while(cod[1] != 'A'){
        inter = 0;
        fgets(linha, 100, stdin);
        for(i = 0; linha[i+1] != '\0'; i++){
            if(linha[i] == '@' || linha[i] == '&' || linha[i] == '!' || linha[i] == '*'){
                inter++;
            }
        }
        
        float conta = (float) inter /  (float) i;
        if (conta > 0.50) printf("Base T, estou com muito QRT na mensagem, poderia reenviar ?\n");
        else printf("Imperatriz, o pouso será na zona %s", linha);
        
        scanf("%s\n", cod);
    }
}
