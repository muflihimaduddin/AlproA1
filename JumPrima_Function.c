/* Nama File    		: JumPrima_Function.c */
/* Deskripsi    		: Menampilkan nilai bilangan prima yang dapat dibentuk dari bilangan integer N sembarang positif dan juga hasil penjumlahan dari elemen bilangan prima yang terbentuk */
/* Pembuat      		: Muflih Muhammad Imaduddin - 24060122140103 */
/* Tanggal Pembuatan	: 28 Maret 2023 */		

#include <stdio.h>
#include <stdlib.h>

int isPrime (int N) {
    if (N <= 1) {
        return 0;
    }
    
    for (int i = 2; i < N ; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
/* Kamus */
    int N; /* Bilangan bulat positif */
    int i; /* Counter */
    int faktor; /* Faktor bilangan */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai bilangan bulat positif N = ");
    scanf("%d", &N);
    
    if (N <= 1) {
        printf("Tidak ada bilangan prima, sehingga jumlahannya Sn = 0");
    } else {
        faktor = 0;
        for (i = 2; i <= N ;i++) {
            if (isPrime(i)) {
                faktor = faktor + i;
                printf("%d ",i);            
            }
        }
    }
    printf("dengan jumlahan deret bilangannya adalah Sn = %d",faktor);

    return 0;
}