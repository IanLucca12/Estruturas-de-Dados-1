#include <stdio.h>
#include<math.h>
#include<conio.h>


void reverse( char s[0]){
    if (s[0] == '\0')
        return "n�o fpi poss�vel realizar a opera��o";
    else{
        for(int i=60; i>=-1;i--)
            printf("%s" ,s[i]);
    }
    return reverse;
}

int main(){

char z [60];
    printf("digite uma string para a opera��o:\n\n");
    scanf("%s", &z);


    printf("O resultado ser�: %s \n",reverse(z));

}
