#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *fp;
char ch;
fp= fopen ("tarefa.txt", "r");
if (fp==NULL){
    printf("unable to open the file\n");
    system("pause");
    exit(0);
}
while(1){
    ch = fgetc (fp);
    if ( ch == EOF)
        break;
        printf("%c",ch);
}
    fclose(fp);

}
