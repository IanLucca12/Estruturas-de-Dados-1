#include <stdio.h>
#include <time.h>
struct dados{
    char category[40];
    float amount;
};
void insertionSort(float list[], int n){
    int i, j;
    float next;
    for (i=1; i<n; i++) {
        next = list[i];
        for (j=i-1; j>=0&&next<list[j];j--){
            list[j+1] = list[j];
        }
        list[j+1] = next;
    }
 }

 int main(){
    struct dados D;
    float lis[129000];
    int j, num=0;
    FILE *fp;
    fp = fopen ( "Amazonsale.csv", "r" ) ;
    if ( fp == NULL ){
        puts ( "Cannot open file" ) ;
        system("pause");
        exit(0) ;
    }
    while(1){
        char result;
        result = fscanf(fp, "%s %f", D.category, &D.amount);
        lis[num]=D.amount;
        num=num+1;
        if ( result == EOF)
            break;
            //printf("%s - %.2f \n", D.category,D.amount);
    }

    fclose(fp);
    insertionSort(lis,num);

    printf("\n ORDENADO: \n");
    for(j=0;j<=num;j++){
        printf("\n%.2f\n",lis[j]);
    }

}
