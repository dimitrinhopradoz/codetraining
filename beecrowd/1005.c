#include<stdio.h>

int main() {
    float a,b; scanf("%f\n%f", &a, &b);
    float media = (a*3.5 + b*7.5) / 11;
    printf("MEDIA = %.5f\n", media);
    return 0;
}
