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

void insertionSort(int list[], int n)
 {
	 int i, j;
	 int next;
	 for (i=1; i<n; i++) {
		 next= list[i];
	 for (j=i-1; j>=0&&next<list[j];j--)
		 list[j+1] = list[j];
		 list[j+1] = next;
		}
 }



 int main(){

    struct dados D;
        char ch ;
            FILE *fp;
            fp = fopen ( "Tarefasort.csv", "r" ) ;
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


