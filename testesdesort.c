#include <stdio.h>
#include <time.h>



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

    int v [20]={23,446,21,78,124,764,542,67,12,79,12,85,35,74,0,1,2,56,53,666};
    int a [20]=insertionSort(v,20);

    printf( "%d",a[]);



          }


