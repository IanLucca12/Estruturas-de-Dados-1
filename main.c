#include <stdio.h>
#include <stdlib.h>

// Esta função rearranja o vetor v[0..n-1] em ordem crescente.
//Ref.: https://www.ime.usp.br/~pf/algoritmos/aulas/ordena.html
struct esforco_comp {
    int naloc;
    float eB;
    float eI;
};


void salva_arquivo(){
    struct esforco_comp EC;
    FILE*esforco;
        esforco=fopen("esforcocomputacional.txt","w");
    if(esforco == NULL)
        printf("/n Erro salvando o arquivo");
    fprintf(esforco,"[ %d - %f - %f]", EC.naloc, EC.eB, EC.eI);
    fclose(esforco);
}

long int insercao(int n, int v[])
{
   long int pesforco = 0;
   for (int j = 1; j < n; ++j) {
      int x = v[j];
      int i;
      for (i = j-1; i >= 0 && v[i] > x; --i){
         v[i+1] = v[i];// COMANDO A SER CONTABILIZADO
         pesforco++;
      }
      v[i+1] = x;
   }
   return pesforco;
}



// Bubble sort algorithm.
// Ref.: https://github.com/kayelserafim/bubble-sort-mpi/blob/main/src/parallel_master.c

long int bs(int n, int *vetor) {
	int c = 0, d, troca, trocou = 1;
    long int pesforco = 0;
	while ((c < (n - 1)) & trocou) {
		trocou = 0;
		for (d = 0; d < n - c - 1; d++){
            pesforco++;
			if (vetor[d] > vetor[d + 1]) { // COMANDO A SER CONTABILIZADO

				troca = vetor[d];
				vetor[d] = vetor[d + 1];
				vetor[d + 1] = troca;
				trocou = 1;
			}
		}
		c++;
	}
}
int *gera_vet_aleatorio(int pn){
    int *pvet = (int *)malloc(sizeof(int)*pn);
    int pind;
    for(pind=0;pind<pn;pind++)
        pvet[pind] = rand();

    return pvet;
}

int main2(){

    FILE *pArqTeste, *pArqComp;
    int p, n, *V;
    pArqTeste = fopen("testes.txt", "r");
    if(!pArqTeste){
        printf("Arquivo de Teste n„o encontrado");
        return 0;
    }
    while(!feof(pArqTeste)){
        if (!fscanf(pArqTeste,"%d", &n))
            break;
        V = gera_vet_aleatorio(n);
        for(p=0;p<n;p++)
            printf("\n %d:%d", p, V[p]);
            printf("\n %d", n);
    break;


    }

    return 0;
}

int main(){
    char ch;
    FILE*esforco;
    printf("Digite a sua opÁ„o no menu:");
    scanf("%c",&ch);
    switch(ch){
        case('T'):
            main2();
            salva_arquivo();
            break;
        case('R'):
            main2();
            break;
        case('S'):
            main2();
            break;
    }
}


