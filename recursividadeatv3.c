#include <stdio.h>
#include<math.h>
#include<conio.h>


void reverse( char s[0]){
    if (s[0] == '\0')
        return "não fpi possível realizar a operação";
    else{
        for(int i=60; i>=-1;i--)
            printf("%s" ,s[i]);
    }
    return reverse;
}

int main(){

char z [60];
    printf("digite uma string para a operação:\n\n");
    scanf("%s", &z);


    printf("O resultado será: %s \n",reverse(z));

}
