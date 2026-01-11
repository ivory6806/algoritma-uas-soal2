#include "main.h"

struct biodatakhs inputBiodataKHS(){
    struct biodatakhs mhs;
    printf("\n===== INPUT BIODATA MAHASISWA =====\n");
    printf("NIM      : ");scanf("%[^\n]", mhs.nim);getchar();
    printf("Nama     : ");scanf("%[^\n]", mhs.nama);getchar();
    printf("Prodi    : ");scanf("%[^\n]", mhs.prodi);getchar();
    printf("Semester : ");scanf("%[^\n]", mhs.smt);getchar();

    return mhs;
}
