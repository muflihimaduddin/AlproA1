/* Nama File    		: JumBarKolMat.c */
/* Deskripsi    		: Menjumlahkan semua elemen pada baris dan kolom tabel 2 dimensi */
/* Pembuat      		: Muflih Muhammad Imaduddin - 24060122140103 */
/* Tanggal Pembuatan	: 21 Maret 2023 */		

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int N;  /* Ukuran matriks persegi */
    int i; /* Counter 1 */
    int j; /* Counter 2 */
    int total; /* Nilai total baris / kolom matriks */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai ukuran matriks persegi = ");
    val = scanf("%d",&N);
    int tabel[N][N]; /* Tabel */

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Masukkan nilai matriks baris ke-%d dan kolom ke-%d = ", i, j);
            val = scanf("%d", &tabel[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        total = 0;
        for (j = 0; j < N; j++) {
            total += tabel[i][j];
        }
        printf("Baris ke-%d = %d\n",i + 1,total);
    }

    for (i = 0; i < N; i++) {
        total = 0;
        for (j = 0; j < N; j++) {
            total += tabel[j][i];
        }
        printf("Kolom ke-%d = %d\n",i + 1,total);
    }
    
    return 0;
}
