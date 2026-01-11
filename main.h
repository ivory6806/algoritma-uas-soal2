#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>

struct biodatakhs{
    char nim[20];
    char nama[100];
    char prodi[20];
    char smt[5];
};

struct khs{
    char kode[10];
    char matkul[100];
    int sks;
    char nilai;
    int bobot;
    int ns;
    int jml_sks;
    int jml_ns;
    float ips;
};

struct biodatakhs inputBiodataKHS();
void biodatakelompok();
int inputMatkul(struct khs mk[], int n);
int inputNilai(struct khs mk[], int n);
int hitungIPS(struct khs mk[], int n);
void tampilkanKHS(struct biodatakhs mhs, struct khs mk[], int n);

#endif // MAIN_H_INCLUDED
