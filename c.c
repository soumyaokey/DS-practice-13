#include <stdio.h>

int binary_search(int x[], int size, int key) {
    int s,e,m;
    s=0;
    e=size-1;
    while(s<=e){
        m=(s+e)/2;
        if(x[m]==key)
            return m;
        else if(key<x[m])
            e=m-1;
        else
            s=m+1;
    }
    return s>e?-(s)-1:m;
}

int main() {
    int x[] = {9, 16, 27, 34, 49, 52, 63, 78, 85, 91};
    int size = sizeof(x) / sizeof(int);
    int k,i;

    for(i=0;i<size;i++)
        printf("%d ",x[i]);

    printf("\n\nEnter a search key: ");
    scanf("%d", &k);

    int search_index = binary_search(x, size, k);
        printf("Element found at index %d\n", search_index);
    
    return 0;
}