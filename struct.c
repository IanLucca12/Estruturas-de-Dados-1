typedef struct
{
char nome[100];
int idade;
} pessoa;
main()
{

pessoa *p = (pessoa*) malloc(sizeof(pessoa));
if (p)
{
p->idade = 3;
printf("%d\n", p->idade);
free(p);
}
}
