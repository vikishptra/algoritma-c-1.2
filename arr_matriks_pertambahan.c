#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrik1[100][100],matrik2[100][100];
    int klm,brs,i,j;
    printf("Masukkan jumlah baris matriks anda yang anda inginkan = ");
    scanf(" %d", &brs);
    printf("Masukkan jumlah kolom  matriks anda yang anda inginkan = ");
    scanf(" %d", &klm);
    for(i=0; i<brs; i++){
        for(j=0; j<klm; j++){
            printf("Masukkan baris ke [%d] kolom ke [%d] = ",i+1,j+1);
            scanf(" %d", &matrik1[i][j]);
        }
        printf("\n");
    }
    puts("==================MATRIKS 2==============");
    for(i=0; i<brs; i++){
        for(j=0; j<klm; j++){
            printf("Masukkan baris ke [%d] kolom ke [%d] = ",i+1,j+1);
            scanf(" %d", &matrik2[i][j]);
        }
        printf("\n");
    }
    printf("Hasil inputan dari matrik 1\n");
    for(i=0; i<brs; i++){
        for(j=0; j<klm; j++){
            printf("\t  %d",matrik1[i][j]);
        }
        printf("\n");
    }
    printf("\nHasil inputan dari matrik 2\n");
    for(i=0; i<brs; i++){
        for(j=0; j<klm; j++){
           printf("\t  %d",matrik2[i][j]);
        }
        printf("\n");
    }
    printf("\nHasil Pertambahan Kedua matrik 1 dan 2\n");
    for(i=0; i<brs; i++){
        for(j=0; j<klm; j++){
            printf("\t  %d",matrik1[i][j] + matrik2[i][j]);
        }
        printf("\n");
    }
}



