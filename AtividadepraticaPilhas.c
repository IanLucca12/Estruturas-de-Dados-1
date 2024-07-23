// Tipo a ser usado para sua pilha

 typedef struct no{
 char caracter;
 struct no *proximo;
}No;

// Função Main
 int main(){
 char exp[50];

 printf("\tDigite um expressao: ");
 scanf("%49[^\n]", exp);
 printf("\nExpressao: %s\nRetorno: %d\n", exp, identifica_formacao(exp));
 }

 // Função identifica_formacao
// Assinatura: int identifica_formacao(char x[]);
 // Retorno:
 //. 0 - Caso a expressão de entrada está bem formada
 //. 1 - Caso a expressão de entrada não esteja bem formada
 //

 int identifica_formacao(char x[]){

 /* #######
 VOCÊ DEVE IMPLEMENTAR ESTE CÓDIGO.
 */ #######

 }


// Função identifica_formacao
 // Assinatura: int forma_par(char f, char d);
 // Retorno:
 //. 0 - Caso f não seja o fechamento de d
 //. 1 - Caso f seja o fechamento de d
 //
 int forma_par(char f, char d){
 switch(f){
 case ')':
 if(d == '(')
 return 1; // bem formada
 else
 return 0; // mal formada
 break;
 case ']':
 if(d == '[')
 return 1; // bem formada
 else
 return 0; // mal formada
 break;
 case '}':
 if(d == '{')
 return 1; // bem formada
 else
 return 0; // mal formada
 break;
 }
 }
