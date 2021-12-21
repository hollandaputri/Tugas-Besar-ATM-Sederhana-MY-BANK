/**************************************************************************************************************
TUGAS BESAR KELOMPOK 10
ANGGOTA :
1. Made Hollanda Putri (2105551014)
2. Jesica Syalomitha Sule Ulang (2105551043)
JUDUL PROGRAM	: PROGRAM ATM SEDERHANA
**************************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    void main(){

    char username[10];
	char kode[10];
	int pilihan, pin ;

    login : {

        printf ("\n**************************************************************************\n");
        printf ("Masukan USERNAME Anda: ");
        scanf ("%s", username);

        printf ("Masukan KODE USER Anda: ");
        scanf ("%s", kode);


        if((strcmp(username, "Hollanda14") == 0) && (strcmp(kode, "Jesica43") == 0)) {
            printf ("ANDA BERHASIL LOGIN\n");
            printf ("\n**************************************************************************\n");
            printf (" \nTekan 1 UNTUK LANJUT");
            printf (" = ");
            scanf  ("%d" , &pilihan );
                if (pilihan != 1) goto login;
	}

        else {
            printf ("MAAF, USERNAME ATAU PASSWORD ANDA SALAH");
		goto login;
	}
	}


    struct pemilik_rekening
    {
    char *nama;
    char *norek;
    char *alamat;
    int umur;
    };

    // menggunakan struct
    struct pemilik_rekening pemilik_rekening_1, pemilik_rekening_2;

    // mengisi nilai ke struct
    pemilik_rekening_1.nama = "Hollanda Putri";
    pemilik_rekening_1.norek = "2105551014";
    pemilik_rekening_1.alamat = "Jalan Gili Layar No 17, Mataram" ;
    pemilik_rekening_1.umur = 18;

    pemilik_rekening_2.nama = "Jesica Syalomitha";
    pemilik_rekening_2.norek = "2105551043";
    pemilik_rekening_2.alamat = "Jl. Tegal Wangi Gg. Kenanga 9A, Denpasar" ;
    pemilik_rekening_2.umur = 18;

    // mencetak isi struct
    printf("\n\nMASUKAN PIN ATM ANDA = ");
    scanf("%d", &pin);
    if (pin == 111000) {
        printf("\n## Data Rekening 1 ##\n");
        printf("Nama: %s\n", pemilik_rekening_1.nama);
        printf("Nomor Rekening: %s\n", pemilik_rekening_1.norek);
        printf("Alamat: %s\n", pemilik_rekening_1.alamat);
        printf("Umur: %d\n", pemilik_rekening_1.umur); }


    else if (pin == 111001) {
        printf("\n## Data Rekening 2 ##\n");
        printf("Nama: %s\n",  pemilik_rekening_2.nama);
        printf("Nomor Rekening: %s\n",  pemilik_rekening_2.norek);
        printf("Alamat: %s\n",  pemilik_rekening_2.alamat);
        printf("Umur: %d\n",  pemilik_rekening_2.umur);}


    else {
    printf ("\nPIN SALAH");
        }

}
