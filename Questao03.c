#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
char palavra[50];
int tamanho,i,j,palindromo;
printf("Palavra: ");
gets(palavra);
tamanho = strlen(palavra);
palindromo = 1;
i=0;
j=tamanho-1;
while( (i<=j) && (palindromo==1) ){
    if(toupper(palavra[i]) != toupper(palavra[j]) ){
        palindromo = 0;
    }else{
        i++;
        j--;
    }

}if(palindromo == 1){
        printf("Eh Palindromo");
    }else{
        printf("Nao eh Palindromo");
    }





}
