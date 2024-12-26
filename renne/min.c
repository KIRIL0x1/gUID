#include <stdio.h>
#include <stdlib.h>
#include "my_liber.h"

#define MAXX_SIZE 10

int main(){
    system("chcp 65001");
    system("cls");

    char shur[MAXX_SIZE] = {8,1,5,13,23,4,6,77,45,68};

    char shufr[MAXX_SIZE];

    fgets(shufr,sizeof(shufr),stdin);

    cazer(shufr);
    pidrahunock(shufr);
    facktorial(5);
    bubbleSort(shur,MAXX_SIZE);
    


}

