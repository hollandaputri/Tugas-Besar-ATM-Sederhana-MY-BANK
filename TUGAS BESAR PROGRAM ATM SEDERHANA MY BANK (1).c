/**************************************************************************************************************
TUGAS BESAR KELOMPOK 10
ANGGOTA :
1. Made Hollanda Putri (2105551014)
2. Jesica Syalomitha Sule Ulang (2105551043)
JUDUL PROGRAM	: PROGRAM ATM SEDERHANA "MY BANK"
**************************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (){
		int bahasa, menu_awal, end, pin, cek_user1, pilihan, tarik_tunai1, transfer1, setor_tunai1, akhir1, setoran,
		tarik_tunai2, transfer2, setor_tunai2, akhir2, nominal, transfer, ulang1, ulang2, saldo = 500000 ;


	fungsi_login :{
	char username[100];
	char kode[100];
	int pilihan ;
        printf ("\n**************************************************************************\n");
        printf ("Masukan USERNAME Anda: ");
        scanf ("%s", username);

        printf ("Masukan KODE USER Anda: ");
        scanf ("%s", kode);


        if((strcmp(username, "Hollanda14") == 0) && (strcmp(kode, "Jesica43") == 0)) {
            printf ("ANDA BERHASIL LOGIN\n");
            printf ("\n**************************************************************************\n");
            printf (" \nNo Rek Anda : 210555101010");
            printf (" \nTekan 1 UNTUK LANJUT");
            printf (" = ");
            scanf  ("%d" , &pilihan );
                if (pilihan != 1) goto fungsi_login;
	}

        else {
            printf ("MAAF, USERNAME ATAU PASSWORD ANDA SALAH");
		goto fungsi_login;
	}

	}

	menu_awal : {
    system ("cls");
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
        printf ("           SELAMAT DATANG DI PROGRAM ATM SEDERHANA MY BANK	\n\n");
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
        printf ("\n\nSILAHKAN PILIH BAHASA ANDA \n");
        printf ("PLEASE SELECT YOUR LANGUAGE \n");
        printf (" 1. Indonesia\n 2. English\n");
        printf (" = ");
        scanf  ("%d" , &bahasa );
            if (bahasa == 1) goto indonesia;

            else if (bahasa == 2) goto inggris;

            else
    goto menu_awal;
}

	indonesia : {
	system ("cls");
        printf ("============================================================================\n");
        printf ("============================================================================\n");
        printf ("\n 		SELAMAT DATANG DI MENU UTAMA ATM MY BANK \n");
        printf ("\n============================================================================\n");
        printf ("============================================================================\n");
	goto cek_user1;
	}

	inggris : {
	system ("cls");
        printf ("============================================================================\n");
        printf ("============================================================================\n");
        printf ("\n 		WELCOME TO THE MAIN MENU OF MY BANK ATM\n");
        printf ("\n============================================================================\n");
        printf ("============================================================================\n");
        goto cek_user2;
	}

	cek_user1 :{
	printf("\n\nMASUKAN PIN ATM ANDA = ");
    scanf("%d", &pin);

    if( pin == 111000111) {
        goto menu1;
    }
    else {
        printf("PIN yang anda masukan salah!");
        goto cek_user1;
    }
    }

    cek_user2 :{
	printf("\n\nENTER YOUR PIN = ");
    scanf("%d", &pin);

    if( pin == 111000111) {
        goto menu2;
    }
    else {
        printf("Your PIN is incorrect!");
        goto cek_user2;
    }
    }


    menu1 :{
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

        if (pilihan==1) goto cek_saldo1;
        	else if (pilihan==2) goto tarik_tunai1;
        	else if (pilihan==3) goto transfer1;
        	else if (pilihan==4) goto setor_tunai1;
        	else if (pilihan==5) goto end;
        else
            printf("Masukan pilihan Anda");
    }

    menu2 :{
	system("cls");
        printf("\n------------- WELCOME TO MY BANK ATM-----------");
        printf("\n\n======================Main Menu========================");
        printf("\n\n1. INQUIRY BALANCE");
        printf("\n\n2. CASH WITHDRAWAL");
        printf("\n\n3. TRANSFER");
        printf("\n\n4. CASH DEPOSIT");
        printf("\n\n5. EXIT");
        printf("\n\n Enter your choice: ");
        scanf("%d", &pilihan);

        if (pilihan==1) goto cek_saldo2;
        	else if (pilihan==2) goto tarik_tunai2;
        	else if (pilihan==3) goto transfer2;
        	else if (pilihan==4) goto setor_tunai2;
        	else if (pilihan==5) goto end;
        else
            printf("Enter your choice:");
        }

    cek_saldo1 :{
    system ("cls");
		printf ("============================================================================\n");
        printf("Saldo anda adalah Rp. %d\n\n", saldo);
        printf ("============================================================================\n");
        goto ulang1;
        }

    cek_saldo2 :{
	system ("cls");
		printf ("============================================================================\n");
        printf("Your Balance is Rp. %d\n\n", saldo);
        printf ("============================================================================\n");
        goto ulang2;
        }

    tarik_tunai1 :{
	system("cls");
        printf("\n\n====================== PILIH NOMINAL YANG INGIN ANDA AMBIL ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Pilih jumlah nominal lain");
        printf("\n\n5. Keluar");
        printf("\n\nMasukkan pilihan anda: ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	if(saldo>=100000){
        	printf("\n\nNominal yang akan anda tarik adalah : Rp. 100000");
        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo = saldo-100000);
}
        	else if(saldo<100000){
        	printf("Saldo anda kurang!");
			}
		}
		else if(pilihan==2){
      		if(saldo>=200000){
        		printf("\n\nNominal yang akan anda tarik adalah : Rp. 200000");
        		printf("\n\nSisa saldo anda = Rp. %d", saldo=saldo-200000);
        	}
        	else if(saldo<200000){
        	printf("Saldo anda kurang!");
			}
		}
		else if(pilihan==3){
		printf("\nMasukkan nominal yang akan anda tarik = ");
        scanf("%d", &nominal);

        	if(saldo>=nominal){
      		printf("\n\nApakah anda akan menarik uang sebesar Rp. %d ?", nominal);
        	printf("\n\n1. Ya  2. Tidak\n\n");
        	printf("\n\nMasukkan pilihan anda = ");

       			scanf("%d", &pilihan);{
      					  if (pilihan==1){
            			    printf("\n\nTransaksi Berhasil");
              				printf("\n\nSisa saldo Anda = Rp. %d", saldo=saldo-nominal); }
           				 else if (pilihan==2){
              				  printf("\n\nTransaksi Dibatalkan");}
        					}
						}
        	else if(saldo<nominal){
        	printf("\nTransaksi Dibatalkan");
        	printf("\nSaldo anda kurang!");
       			}
   		}
        else
        printf("Masukan pilihan yang benar");
         goto ulang1;
    }

    tarik_tunai2 :{
	system("cls");
        printf("\n\n====================== CHOOSE THE NOMINAL YOU DESIRE ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Enter Another Nominal");
        printf("\n\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	if(saldo>=100000){
        	printf("The nominal you will withdraw is : Rp. 100000");
        	printf("\n\nYour balance is = Rp. %d", saldo = saldo-100000);
}
        	else if(saldo<100000){
        	printf("Your balance is not enough!");
			}
		}
		else if(pilihan==2){
      	 	if(saldo>=200000){
        		printf("The nominal you will withdraw is : Rp. 200000");
        		printf("\n\nYour Balance is = Rp. %d", saldo=saldo-200000);
        	}
        	else if(saldo<200000){
        	printf("Your balance is not enough!");
			}
		}
		else if(pilihan==3){
		printf("Enter the nominal you will withdraw = ");
        scanf("%d", &nominal);

        	if(saldo>=nominal){
      		printf("Is the nominal Rp. %d that you will withdraw correct?", nominal);
        	printf("\n\n1. Yes 2. No\n\n");
        	printf("\n\nEnter your choice = ");

       			scanf("%d", &pilihan);{
      					  if (pilihan==1){
            			    printf("\n\nTransaction was successful");
              				printf("\n\nYour Balance is = Rp. %d", saldo=saldo-nominal); }
           				 else
              				  printf("\nTransaction failed");
        					}
							}
        	else if(saldo<nominal){
        	printf("Your balance is not enough!");
       }
   }
        else
        printf("Please enter the right number!");
        goto ulang2;
    }


    transfer1 :{
	system("cls");
        printf("Silahkan masukkan nomor rekening tujuan anda = ");
        scanf("%d", &transfer);
        printf("\n\nMasukkan nominal yang akan anda transfer = ");
        scanf("%d", &nominal);
        printf("\n\nApakah anda ingin mentransfer %d ke rekening %d?", nominal, transfer);
        printf("\n\n1. Ya  2. Tidak\n\n");
        printf("\nMasukkan pilihan anda = ");
        scanf("%d", &pilihan);
{
         if(pilihan==1){
        	if(nominal<=saldo){
        	printf("Transaksi Berhasil");
        	printf("\n\nSisa Saldo Anda = Rp. %d", saldo = saldo-nominal);
}
        	else if(nominal>saldo){
        	printf("\nTransaksi Dibatalkan");
        	printf("\n\nSaldo anda kurang!");
			}
		}
		else if(pilihan==2){
      		printf("Transaksi di Batalkan!");
			}
		}
        goto ulang1;
    }


    transfer2 :{
	system("cls");
        printf("Please enter the bank account destination = ");
        scanf("%d", &transfer);
        printf("\n\nPlease enter the nominal = ");
        scanf("%d", &nominal);
        printf("\n\nDo you want to transfer %d to %d bank account?", nominal, transfer);
        printf("\n\n1. Yes  2. No\n\n");
        printf("\nEnter your choice = ");
        scanf("%d", &pilihan);
{
         if(pilihan==1){
        	if(nominal<=saldo){
        	printf("\n\nTransaction was successful");
        	printf("\n\nYour balance is  = Rp. %d", saldo = saldo-nominal);
}
        	else if(nominal>saldo){
        	printf("Transaction failed");
        	printf("\n\nYour Balance is not enough!");
			}
		}
		else if(pilihan==2){
      		printf("Enter the right number!");
			}
		}
        goto ulang2;
}


    setor_tunai1 :{
	system("cls");
        printf("Masukkan nominal yang akan anda setor = ");
        scanf("%d", &nominal);
        printf("\nLetakan uang anda di dalam mesin!\n");
		printf("\n\nApakah anda ingin melakukan setor tunai sebesar : Rp. %d?", nominal);
        printf("\n\n1. Ya  2. Tidak\n\n");
        printf("\n\nMasukkan pilihan anda = ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	printf("\nTransaksi Berhasil");
    		printf("\n\nSisa saldo anda = Rp. %d", saldo = saldo+nominal);
    }
		else if(pilihan==2){
      		printf("Transaksi di Batalkan!");
      		goto ulang1;
			}
    }


    setor_tunai2 : {
    system("cls");
        printf("Please enter the nominal = ");
        scanf("%d", &nominal);
        printf("\n\nPlace the balance into the ATM Machine!\n");
		printf("\n\nDo you want to deposit Rp. %d?", nominal);
        printf("\n\n1. Yes  2. No\n\n");
        printf("\n\nEnter your choice = ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	printf("\nTransaction successful");
    		printf("\n\nYour balance is = Rp. %d", saldo = saldo+nominal);
}
		else if(pilihan==2){
      		printf("Transaction failed!");
      		goto ulang2;
			}
}


    ulang1 : {
	    printf("\n\nApakah Anda Ingin Transaksi Lagi?");
        printf("\n\n1. Ya 2. Tidak = ");
        scanf("%d", &pilihan);
        system("cls");
            if (pilihan==1) goto menu1;
            if (pilihan==2) goto end;
    }


    ulang2 :{
	    printf("\n\nDo you want to make another transaction?");
        printf("\n\n1. Yes 2. No = ");
        scanf("%d", &pilihan);
    system("cls");
            if (pilihan==1) goto menu2;
            if (pilihan==2) goto end;
}

	end : {
	system ("cls");
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
        printf("            TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI\n\n\n");
        printf("                THANK YOU FOR USING THIS PROGRAM\n");
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
    }
	return (0);
}
