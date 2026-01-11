#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    biodatakelompok();

    printf("******** PROGRAM CEK TARGET IPK ********\n");
    struct biodatakhs mhs;
    mhs = inputBiodataKHS();

    int n;
    printf("\n");
    printf("Masukkan jumlah mata kuliah yang diambil: ");scanf("%d", &n);

    if(n>0){
        struct khs mk[n];
        inputMatkul(mk, n);
        inputNilai(mk, n);
        hitungIPS(mk, n);
        tampilkanKHS(mhs, mk, n);
        return 0;
    }else{
        printf("Mata kuliah yg diambil harus lebih dari 0 !\n");
    }
}
