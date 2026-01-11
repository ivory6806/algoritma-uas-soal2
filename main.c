#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    biodatakelompok();

    printf("******** PROGRAM CEK TARGET IPK ********\n");
    struct biodatakhs mhs;
    mhs = inputBiodataKHS();

    int jml_matkul;
    printf("\n");
    printf("Masukkan jumlah mata kuliah yang diambil: ");scanf("%d", &jml_matkul);

    if(jml_matkul>0){
        struct khs mk[jml_matkul];
        inputMatkul(mk, jml_matkul);
        inputNilai(mk, jml_matkul);
        if(hitungIPS(mk, jml_matkul) == 1){
            tampilkanKHS(mhs, mk, jml_matkul);
        }else{
            printf("Nilai mata kuliah harus rentang A-E !\n");
            printf("Silahkan ulangi kembali...\n");
        }
    }else{
        printf("Mata kuliah yg diambil harus lebih dari 0 !\n");
        printf("Silahkan ulangi kembali...\n");
    }
}
