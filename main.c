#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 20

int main()
{
    int dizi1[N],dizi2[N];
    srand(time(0));
    printf("Unordered array:");
    for(int i=0;i<N;i++){
        dizi1[i]=rand();
        printf("%d ",dizi1[i]);
    }
    printf("9999999999");

    printf("\n\n\n");
    for (int j=0;j<N;j++){
        int enkucuk=INT_MAX;
        int enkucuk_indis;
        for(int k=0;k<N;k++){
            if(dizi1[k]<enkucuk){
                enkucuk=dizi1[k];
                enkucuk_indis=k;
            }
        }
        dizi2[j]=enkucuk;
        dizi1[enkucuk_indis]=INT_MAX;

    }
    printf("Ordered array:");
    for(int y=0;y<N;y++)
        printf("%d < ",dizi2[y]);
    printf("9999999999");

    return 0;
}
