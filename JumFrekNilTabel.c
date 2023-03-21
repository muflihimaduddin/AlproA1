/* Nama File    		: JumFrekNilTabel.c */
/* Deskripsi    		: Menampilkan jumlah nilai-nilai elemen tabel yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat      		: Muflih Muhammad Imaduddin - 24060122140103 */
/* Tanggal Pembuatan	: 21 Maret 2023 */		

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int *tabel; /* Tabel */
    int N; /* Panjang tabel */
    int i; /* Counter 1 */
    int j; /* Counter 2 */
    int frekuensiSementara; /* Penampung frekuensi sementara */
    int frekuensi; /* Frekuensi */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai panjang tabel N = ");
    val = scanf("%d",&N);
    
    tabel = (int*)malloc(N * sizeof(int));

    for (i = 0; i < N; i++) {
        printf("Masukkan nilai ke-%d = ",i + 1);
        val = scanf("%d",&tabel[i]);
    }

    for (i = 0; i < N; i++) {
        frekuensiSementara = 0;
        for (j = 0; j < N; j++) {
            if (tabel[i] == tabel[j]) {
                frekuensiSementara += 1;
            }
        }
        if (frekuensiSementara > 1) {
            frekuensi += tabel[i];
        }
    }
            
    printf("Jumlah nilai-nilai elemen tabel yang frekuensi kemunculannya lebih dari satu kali = %d",frekuensi);

    return 0;
}
