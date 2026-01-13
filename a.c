#include <stdio.h>

int main(){

    int x[] = {9,16,27,34,49,52,63,78,85,91};
    int size= sizeof (x)/sizeof (int);

    int s,e,m,k,i;

    for(i=0;i<size;i++)
        printf("%d ",x[i]);

        printf("\n\nEnter a search key:");
        scanf("%d", &k);

        s=0;
        e=size-1;

        while(s<=e){
            m=(s+e)/2;
            if(x[m]==k){
                printf("Element found at index %d\n", m);
                break;
             } else if(k<x[m])
                e=m-1;
            else
                s=m+1;
        }
        return 0;
    }