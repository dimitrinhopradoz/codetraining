#include<stdio.h>

int main() {
    int n; scanf("%i\n", &n);
  
    char num[13]; int ca[10];
    
    int j, i, test;
    
    int count = 0;
    
    while(n--){
        scanf("%s\n", num);
    
        for(j = 0; j<10; j++){
            ca[j] = 0;
        }
        
        test = 1;
        count = 0;
        
        for (j = 0; j < 13; j++){
            ca[num[j] - '0']++;
        }
        
        for (j = 0; j < 10; j++){
            if(ca[j] % 2 == 1) count++;
        }
        if (count > 1) test = 0; 
        

        
        if (test) {
            printf("Na vasta densa floresta de Hyrule, por longo tempo, servi como espirito guardiao\n");
        }
        else{
            printf("Ocarina Ocarina\n");
        }
    }
    
}
