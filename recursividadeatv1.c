#include <stdio.h>
#include<math.h>
#include<conio.h>


int tamanho (char x[0]){
    if(x[0]=='\0'){return 0;}

    else{return 1+ tamanho(&x[1]);
    }
    }


int main (){
 char z [60];
    printf("digite uma string para a operação:\n\n");
    scanf("%s", &z);


int d = tamanho(z);
    printf("O resultado será: %d \n",d);


}
