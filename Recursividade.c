#include <stdio.h>
#include<math.h>
#include<conio.h>


int elevado (int x, int y){
    if(y==0){return 1;}

    else{return x*elevado(x,y-1);
    }
    }


int main (){
 int z;
 int f;

    printf("digite um n�mero que sera a base da opera��o:\n\n");
    scanf("%d", &z);

    printf("digite um n�mero que ser� elevado a base:\n\n");
    scanf("%d", &f);

int d = elevado(z,f);
    printf("O resultado ser�: %d \n",d);


}
