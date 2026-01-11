#include "main.h"

int inputMatkul(struct khs mk[], int n){
    printf("\n===== INPUT MATA KULIAH =====\n");
    for(int i=0;i<n;i++){
        printf("------------------\n");
        printf("Mata Kuliah ke-%d\n", i+1);
        printf("------------------\n");
        printf("Kode  : "); scanf(" %[^\n]", mk[i].kode);
        printf("Nama  : "); scanf(" %[^\n]", mk[i].matkul);
        printf("SKS   : "); scanf("%d", &mk[i].sks);
    }
}
