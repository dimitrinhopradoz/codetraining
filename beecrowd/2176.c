#include<stdio.h>

int main() {
    char bit[100]; scanf("%s", bit);
    
    int novo = 0, count = 0;
    
    while(bit[i] != '\0'){
        if (bit[i] - '0') {
            count++;
        }
    }
    
    if (count % 2){
        novo = 1;
    }
    
    printf("%s%i\n", bit, novo);
}
