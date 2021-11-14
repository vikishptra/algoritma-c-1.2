#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,max,min,arr1[100],n,x;
    printf("Masukkan jumlah bilangan data anda : ");
    scanf("%d", &n);
    min=100;
    max=0;
    for(i=0; i < n; i++){
        printf("Masukkan data %d anda : ", i);
        scanf("%d", &arr1[i]);
        if(max<arr1[i]){
            max=arr1[i];
        }
    }
    for(i=0; i < n; i++){
        if(min>arr1[i]){
            min=arr1[i];
        }
    }
    
    printf("nilai max %d\n", max);
    printf("nilai min %d", min);
}


