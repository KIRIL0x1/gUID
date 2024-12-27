#include <stdio.h>

int main(void) 
{
    char text[100];

    do {
        printf("Type text: ");
        fgets(text, sizeof(text), stdin);
          
        if (text[0] == '1'){
            break;
        }  

        printf("Encrypted text: ");
        for (int i = 0; text[i] != '\0'; i++){
            if (text[i] >= 'a' && text[i] <= 'z'){
                printf("%c", text[i] + 1);
            } 
            else if (text[i] >= 'A' && text[i] <= 'Z'){
                printf("%c", text[i] + 1);
            } 
            else{
                printf("%c", text[i]);
            }
        }
        printf("\n");

    } while (1);

    return 0;
}