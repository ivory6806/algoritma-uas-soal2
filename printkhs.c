#include "main.h"

void tampilkanKHS(struct biodatakhs mhs, struct khs mk[], int n){
    printf("==================================================================================\n");
    printf("                               KARTU HASIL STUDI\n");
    printf("                           Target Yang Ingin Dicapai\n");
    printf("==================================================================================\n\n");
    printf("NIM      : %s\n", mhs.nim);
    printf("Nama     : %s\n", mhs.nama);
    printf("Prodi    : %s\n", mhs.prodi);
    printf("Semester : %s\n", mhs.smt);
    printf(" ---------------------------------------------------------------------------------\n");
    printf("| No |  Kode MK  |             Mata Kuliah             | SKS | Nilai | Bobot | NS |\n");
    printf(" ---------------------------------------------------------------------------------\n");
    for(int i=0;i<n;i++){
        printf("| %2d | %-9s | %-35s | %3d |   %c   | %4d  | %2d |\n",
            i + 1, mk[i].kode, mk[i].matkul, mk[i].sks, mk[i].nilai, mk[i].bobot, mk[i].ns);
    }
    printf(" ---------------------------------------------------------------------------------\n");
    printf("Total SKS: %d\n", mk[0].jml_sks);
    printf("Total NS : %d\n", mk[0].jml_ns);
    printf("IPS      : %.2f\n", mk[0].ips);
}
