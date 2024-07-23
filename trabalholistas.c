#include <iostream>

typedef struct Cadastro{
char CNPJ[15];
char RazaoSocial[50];
char Cidade[30];
char Fone[12];
}TCadastro;

typedef struct NoI{
Tcadrasto*Dados;
struct NoI * Prox;
}TNoI;

typedef struct NoC{
TCadastro*Dados;
struct NoC * Ant;
struct NoC*Prox;
}TNoC;

typedef struct NoS{
TCadastro*Dados;
struct NoS *Ant;
struct NoS*Prox;
}TNoS;

typedef struct DescritorS{
TNoS*Inicio;
int tamanho;
TNoS*Fim;
}TDescritorS
