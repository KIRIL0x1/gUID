#include <stdio.h>
//  Σ калькулятор ряд суми 

int main(void){
int f = 2; 
int sum[f];
for (int q = 0;q < 3;q++) {
    int y = 0;

    int n;
    printf("enter  to the element E ");
    scanf("%i",&n);
    
    int x;
    printf("enter to the x ");
    scanf("%i",&x); 

    for(int i = n;i != 0;i--){
            y += (i-x);
    }
    for(int g = 0;g < 3;g++){
        sum[g] = y;
    }
}
printf("%i",sum[0]*sum[1]*sum[2]);
return 0;
}