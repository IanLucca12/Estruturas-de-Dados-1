#include <stdio.h>
#include<math.h>
#include<conio.h>


int charCounter(char j, char s[]){
if (s[0] == 0)
return 0;
if (s[0] == j)
return 1 + charCounter(j, s+1);
else{
return charCounter(j, s+1);
}
}

int main(){



char z [60];
    printf("digite uma string para a opera��o:\n\n");
    scanf("%s", &z);

  char v ;
    printf("digite um caract�r para a opera��o:\n\n");
    scanf(" %c", &v);

printf(" a resposta � :%d\n", charCounter(v, z));

printf("\n vem se meter comigo sua %s", z);




}
