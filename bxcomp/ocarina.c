#include<stdio.h>

int main() {
    int n; scanf("%i\n", &n);
    
  
    char num[13];
    char po[10] = {'0', '1', '2', '3', '4','5','6','7','8','9'};
    int ca[10] = {0,0,0,0,0,0,0,0,0,0};
    
    int count = 0;
    int j, i;
    int test;
    for(i = 0; i < n; i++){
        scanf("%s\n", num);
        for(j = 0; j<10; j++){
            ca[j] = 0;
        }
        test = 1;
        count = 0;
        for (j = 0; j < 13; j++){
            for (int k = 0; k < 10; k++){
                if(num[j] == po[k]) {
                    ca[k]++;
                    break;
                }
            }   
        }
        for (j = 0; j < 10; j++){

            if(ca[j] % 2 == 1) count++;
            if (count > 1){
                test = 0;
                break;
            }
        }
        if (test) {
            printf("Na vasta densa floresta de Hyrule, por longo tempo, servi como espirito guardiao\n");
        }
        else{
            printf("Ocarina Ocarina\n");
        }
    }
    
}
