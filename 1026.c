#include <stdio.h>
#include <stdint.h>

int pow2(int n2){
    int unsigned long result = 1;
    for(int i = 0; i<n2; i++){
        result *= 2;
    }
    
    return result;
}


int main() {
    
    int unsigned long n1, n2;
    
    while(scanf("%lu %lu", &n1, &n2) != EOF){
        int bin1[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int bin2[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int bin3[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
        int unsigned long n3 = 0;
        for(int i = 31; n1 > 0; i--){
            bin1[i] = n1%2;
            n1 = n1/2;
        }
        for(int i = 31; n2 > 0; i--){
            bin2[i] = n2%2;
            n2 = n2/2;
        }
        for(int i = 31; i >= 0; i--){
            if (bin1[i] && bin2[i]) bin3[i] = 0;
            else if(bin1[i] || bin2[i]) bin3[i] = 1;
        }
        
        for (int i = 31; i >= 0; i--){
            n3 += bin3[i]*pow2(31-i);
        }
        int test = 1;
        for (int i = 31; i >0; i--){
            if(!bin3[i]) {test = 0; break;}
        }
        if (test) n3 = 4294967295;
        
;
        printf("%lu\n", n3);
    }
    return 0;
}
