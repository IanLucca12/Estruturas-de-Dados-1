#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int nextword(FILE *pfile, char *word[1024]){
while (fscanf(pfile,word) == 1) {
        puts(word);}
}


int word2vec(char *pNomeTxtEntrada){
    FILE *fo, *fc;
    char ch;
    char palavra [50];
    int contador=0;
    int pula=0;
    fo = fopen(pNomeTxtEntrada,"r");

    while (!feof(fo)){
    if(nextword(fo, palavra)){

       if(strlen(palavra)>3){

        if(ch == EOF){
        break;}

                if (palavra != ' '){
                printf("\n '%s' ", palavra);}
          }
    }
        }


    fc = fopen("copia.txt","w");
    if (fo== NULL){
    puts("Cannot open the file");
    system("pause");
    exit(0);}






fclose(fo);
fclose(fc);

}


int main(){
    char nomearq[30];
    char x[30];
  printf("digite o nome e tipo de arquivo desejado:\n\n");
  scanf("%s", nomearq);
  printf("\n%s",nomearq);

  if (!word2vec(nomearq)){
         printf(" \n Erro na geração do vocábulo!");}



  return 0;



}








































/*int main(){
FILE *fo , *fc;

struct ler {
char ch[20]};

fo = fopen("tarefa.txt","r");
fc = fopen("copia.txt","w");
if(fo==NULL){
    puts("Cannot open the file");
    system("pause");
    exit(0);
}
while(1){
    ch=getc(fo);
    if(ch == EOF)
        break;

}

fclose(fo);
fclose(fc);


*/
