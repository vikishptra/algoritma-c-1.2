#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hasil,n,temp,i,arr1[1000],hasil2,n2=7;
    printf("Masukkan data anda : ");
    scanf("%d", &n);
    hasil=n;
    for(i=0; i<n2; i++){
        if(hasil != 0){
            hasil2=hasil%2; 
            hasil=hasil/2;
            arr1[i]=hasil2;
        }   
    }
    for(i=5; i>=0; i--){
        printf("\t %d", arr1[i]); 
    }  
}


