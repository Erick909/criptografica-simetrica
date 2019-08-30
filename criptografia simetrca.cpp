#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main(){

    char nome[100] = " ";
    char criptografado[100] = " ";
    char descriptografado[100] = " ";
    char alfabeto[57];
    int i =0,j=0,aux=0, aux2=0, qtd_caractere, desloca = 2, posicao_modulo;


    for(i = 65 ; i <123;i++){
        if(i == 91) i+=6;

        alfabeto[j] = (char)i;
        j++;
    }

    printf("Palavra para criptografar\n");
    gets(nome);
    qtd_caractere = strlen(nome);
    //printf("%i\n",qtd_caractere);
    for(aux = 0; aux < qtd_caractere; aux++){ //for para cada letra da frase
       j=0;
        for(i = 65 ; i <123; i++){ //for para a palavra ter suas letras alteradas
        if(i == 91) i+=6;
        if(nome[aux] == alfabeto[j]){
            posicao_modulo = (j+desloca)%52;
            criptografado[aux2] = alfabeto[posicao_modulo];
            aux2++;
        }
        j++;
        }
    }
    printf("Palavra criptografada: %s\n\n\n",criptografado);

    aux2 =0;
    for(aux = 0; aux < qtd_caractere; aux++){ //for para cada letra da frase
       j=0;
        for(i = 65 ; i <123; i++){ //for para a palavra ter suas letras ateradas
        if(i == 91) i+=6;
        if(criptografado[aux] == alfabeto[j]){
            posicao_modulo = (j-desloca)%52;
            descriptografado[aux2] = alfabeto[posicao_modulo];
            aux2++;
        }
        j++;
        }
    }
    printf("Palavra descriptografada: %s \n\n\n",descriptografado);




}
