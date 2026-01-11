#include "main.h"
int hitungIPS(struct khs mk[], int n){
    int total_sks = 0;
    float total_ns = 0;

    for(int i=0;i<n;i++){
        switch (mk[i].nilai){
            case 'A':
                mk[i].bobot = 4;
            break;
            case 'B':
                mk[i].bobot = 3;
            break;
            case 'C':
                mk[i].bobot = 2;
            break;
            case 'D':
                mk[i].bobot = 1;
            break;
            case 'E':
                mk[i].bobot = 0;
            break;
            default:
                return 0;
            break;
        }
        mk[i].ns = mk[i].sks * mk[i].bobot;
        total_sks += mk[i].sks;
        total_ns  += mk[i].ns;
    }
    mk[0].jml_sks = total_sks;
    mk[0].jml_ns = total_ns;
    mk[0].ips = total_ns / total_sks;

    return 1;
}
