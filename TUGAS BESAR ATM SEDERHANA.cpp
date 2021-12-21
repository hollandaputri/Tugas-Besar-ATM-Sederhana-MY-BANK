/**************************************************************************************************************
TUGAS BESAR KELOMPOK 10
ANGGOTA :
1. Made Hollanda Putri (2105551014)
2. Jesica Syalomitha Sule Ulang (2105551043)
JUDUL PROGRAM	: PROGRAM ATM SEDERHANA "MY BANK"
**************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main () {
	int bahasa, indonesia, english, awal, cek_user1, username = 1111 , password = 2222, pilihan;
	
// fungsi selamat datang program atm sederhana	
awal :
	printf ("**************************************************************************\n");
	printf ("**************************************************************************\n");
	printf ("\n	SELAMAT DATANG DI PROGRAM ATM SEDERHANA MY BANK	\n\n");
	printf ("**************************************************************************\n");
	printf ("**************************************************************************\n");
	
//fungsi pemilihan bahasa oleh user
	
	printf ("SILAHKAN PILIH BAHASA ANDA \n");
	printf ("PLEASE SELECT YOUR LANGUAGE \n");
	printf (" 1. Indonesia\n 2. English\n");
	printf (" = ");
	scanf  ("%d" , &bahasa );
		
		if (bahasa == 1) goto indonesia;
		else if (bahasa == 2) goto english;
		else goto awal;
		
indonesia : {
	system ("cls");
	printf ("============================================================================\n");
	printf ("============================================================================\n");
	printf ("\n 		SELAMAT DATANG DI MENU UTAMA ATM MY BANK \n");
	printf ("\n============================================================================\n");
	printf ("============================================================================\n"); 
	goto cek_user1 ;
	}
	
cek_user1 :
	printf("\n\nMasukkan Username anda = ");
    scanf("%d", &username);
	printf("\n\nMasukkan Password anda = ");
    scanf("%d", &password);
    
    
    if(username == 1111 && password == 2222) {
            printf("Username dan Password yang anda masukan benar");
            goto menu1;
    }    
    else if(username == 1111) {
            printf("Password yang anda masukan salah!");
            goto cek_user1;
           
    }    
	else if (password == 2222) {
            printf("Username yang anda masukan salah!\n");
            goto cek_user1;
	}
    else {
			printf("Username dan Password yang anda masukan salah!\n");
            goto cek_user1;
    }
    
menu1 :
	system("cls");
        printf("\n------------- SELAMAT DATANG DI ATM MY BANK-----------");
        printf("\n\n======================Menu Utama========================");
        printf("\n\n1. CEK SALDO");
        printf("\n\n2. TARIK TUNAI");
        printf("\n\n3. TRANSFER");
        printf("\n\n4. SETOR TUNAI");
        printf("\n\n5. Keluar");
        printf("\n\n Masukan pilihan anda: ");
        scanf("%d", &pilihan);


english : {
	system ("cls");
	printf ("============================================================================\n");
	printf ("============================================================================\n");
	printf ("\n 		WELCOME TO MAIN MENU MY BANK ATM\n");
	printf ("\n============================================================================\n");
	printf ("============================================================================\n"); 
	return (0);
	goto selesai ;
}
selesai : {
	printf ("\nTERIMA KASIH");
	printf ("\nTHANK YOU");
}
	return (0);
}
	

