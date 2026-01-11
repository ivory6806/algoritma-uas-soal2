#include "main.h"

void inputNilai(struct khs mk[], int n) {
    printf("\n===== INPUT TARGET NILAI MATA KULIAH =====\n");
    for(int i=0;i<n;i++){
        printf("Nilai untuk %s - %s : ", mk[i].kode, mk[i].matkul);
        scanf(" %c", &mk[i].nilai);
    }
    printf("\n");
}
