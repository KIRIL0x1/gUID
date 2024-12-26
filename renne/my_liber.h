#ifndef MY_LIBERH
#define MY_LIBERH

#include "my_liber.h"

//підрахунок кількість символів
int pidrahunock(char tet[]){
int i;
for (i = 0;tet[i] != '\0';i++){}
printf("kilicisti cumvoliv:%i",i-1);
}

//шифир цезаря
char cazer(char text[]){
    int i;

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] + 1;  
        }
        else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 1; 
        }
    }

    printf("cazer shufr: %s", text);
}

//знаходження факторіала
void facktorial(int n){
    int d = 1;
    for (int i = 1;i <= n;i++){
        d *= i;
    }
printf("\nfacktorial: %i\n",d);
}

//сортування бульбашкой
void bubbleSort(char x[],int n){
printf("відсортований масив: \n");
    for(int i = 0;i < n - 1;i++){
        for(int j = 0;j < n - i - 1;j++){
            if (x[j]>x[j+1]){
                char temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
            
        }
    }
for (int k = 0; k < n; k++) {
    if (x[k] != 0){
        printf("%d ",x[k]);
    }
}

}


#endif