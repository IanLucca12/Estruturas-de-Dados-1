#include <stdio.h>
#include <time.h>

 struct dados{
int ibge;
char uf[10];
char municipio[40];
char regiao[40];
int populacao;
char porte[40];
};

int buscaBinaria(int *V, int n, int chave){
   int p, inicio, final, meio;
 inicio = 0;
 final = n - 1;
 while(inicio <= final){
   meio = (inicio + final)/2;
  if (chave == V[meio])
       return meio;
 if (chave < V[meio])
 final = meio - 1;
 else
 inicio = meio + 1;
 }
 return -1;
 }

int guardavalor() {
    char ch, uf[3], cidade[40], regiao[40], porte[40];
    int id, popula;
    FILE *fp;
    fp = fopen ( "Tarefa.csv", "r" ) ;
    if ( fp == NULL ){
        puts ( "Cannot open file" ) ;
        system("pause");
        exit(0) ;
    }
    while(1){
        char result;
        result = fscanf(fp, "%d %s[^/;]  %s[^/;]  %s[^/;] %d  %s[^\n]", &id, uf, cidade, regiao, &popula, porte);
        if ( result == EOF)
            break;
        printf("%d %s[^/;]  %s[^/;]  %s[^/;] %d  %s[^\n]", id, uf, cidade, regiao, popula, porte);
    }
    fclose(fp);
}


 int main(){
     int a;

    printf("Digite a chave de busca:\n");
    scanf("%d",a);
    struct dados D;
        char ch ;
            FILE *fp;
            fp = fopen ( "Tarefa2.csv", "r" ) ;
            if ( fp == NULL ){
                puts ( "Cannot open file" ) ;
                system("pause");
                exit(0) ;
            }
            while(1){
                char result;

                result = fscanf(fp, "%d %s %s %s %d %s", &D.ibge, D.uf,D.municipio, D.regiao, &D.populacao, D.porte);

                if ( result == EOF)
                    break;
                printf("%d - %s - %s - %s - %d - %s\n", D.ibge, D.uf,D.municipio, D.regiao, D.populacao, D.porte);
            }
            fclose(fp);




          }


