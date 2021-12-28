/***************************************************************************************************
TUGAS BESAR KELOMPOK 10
ANGGOTA :
1. Made Hollanda Putri (2105551014)
2. Jesica Syalomitha Sule Ulang (2105551043)
JUDUL PROGRAM	: PROGRAM ATM SEDERHANA "MY BANK"
****************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    int main(){
    int bahasa, menu_awal, end, pin, pilihan, tarik_tunai1,
        transfer1, setor_tunai1, setoran, tarik_tunai2, transfer2,
        setor_tunai2, nominal, transfer, ulang1, ulang2, saldo = 500000;
    char username[10];
	char kode[10];

//=======================================================================//
//                    Fungsi Login                                       //
//=======================================================================//
// Nama Fungsi    : Login                                                //
// Deskripsi      : Fungsi ini digunakan agar hanya user yang            //
//                  menginputkan kode dan username yang bear yang dapat  //
//                  masuk ke dalam program dan dapat menggunakan program //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Menambahkan fungsi agar user dapat melakukan         //
//                  login.                                               //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 2                                                             //
// Revisi 2       : Mengubah tipe data fungsi login dari integer menjadi //
//                  char untuk kode dan usernamenya                      //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//

    login : {
        system ("cls");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t*************** Program ATM MY BANK ***************\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t*                        Oleh                      *\n");
        printf("\t\t\t\t*               1. Made Hollanda Putri             *\n");
        printf("\t\t\t\t*               2. Jesica Syalomitha               *\n");
        printf("\t\t\t\t ==================================================\n\n\n");
        printf("\t\t\t\t\t\t\n");
        printf("\t\t\t\t==================================================\n");
        printf("\t\t\t\t *             USERNAME & KODE USER              *\n");
        printf("\t\t\t\t==================================================\n\n");
        printf ("\t\t\t\t Masukan USERNAME Anda: ");
        scanf ("%s", username);
        printf ("\t\t\t\t Masukan KODE USER Anda: ");
        scanf ("%s", kode);


        if((strcmp(username, "Hollanda14") == 0) && (strcmp(kode, "Jesica43") == 0)) {
            printf ("\n\t\t\t\t ANDA BERHASIL LOGIN\n");
            printf("\t\t\t\t========================\n");
            printf ("\n\t\t\t\t Tekan 1 UNTUK LANJUT\n");
            printf("\t\t\t\t========================\n");
            printf ("\t\t\t\t = ");
            scanf  ("%d" , &pilihan );
                if (pilihan != 1) goto login;
	}

        else {
            pprintf ("\t\t\t\t MAAF, USERNAME ATAU PASSWORD ANDA SALAH\n");
            printf ("\n\t\t\t\t Tekan 1 UNTUK ULANG\n");
            printf("\t\t\t\t========================\n");
            printf ("\t\t\t\t = ");
            scanf  ("%d" , &pilihan );
                if (pilihan = 1) goto login;
	}
	}

//=======================================================================//
//                    Struct Pemilik Rekening                            //
//=======================================================================//
// Nama Fungsi    : struct pemilik_rekening                              //
// Deskripsi      : struct ini digunakan agar data-data user 1 dan 2     //
//                  yang diiputkan dapat disimpan di dalam struct yang   //
//                  sesuai dengan pin yang dimasukan oleh user           //
//                  pin 111000 untuk user 1 dan 111001 untuk user 2      //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Menambahkan output PIN SALAH saat user tidak         //
//                  memasukan PIN dengan benar.                          //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//

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
    printf("\n\t\t\t\t MASUKAN PIN ATM ANDA\n");
    printf("\t\t\t\t========================\n");
    printf ("\t\t\t\t = ");
    scanf("%d", &pin);
    if (pin == 111000) {
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\t\t\t\t Nama: %s\n", pemilik_rekening_1.nama);
        printf("\t\t\t\t Nomor Rekening: %s\n", pemilik_rekening_1.norek);
        printf("\t\t\t\t Alamat: %s\n", pemilik_rekening_1.alamat);
        printf("\t\t\t\t Umur: %d\n", pemilik_rekening_1.umur); }


    else if (pin == 111001) {
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\t\t\t\t Nama: %s\n",  pemilik_rekening_2.nama);
        printf("\t\t\t\t Nomor Rekening: %s\n",  pemilik_rekening_2.norek);
        printf("\t\t\t\t Alamat: %s\n",  pemilik_rekening_2.alamat);
        printf("\t\t\t\t Umur: %d\n",  pemilik_rekening_2.umur);}


    else {
        printf ("\n\t\t\t\t PIN SALAH");
        printf("\t\t\t\t========================\n");
        }

         printf ("\n\t\t\t\t Tekan 1 UNTUK TRANSAKSI\n");
         printf("\t\t\t\t========================\n");
         printf ("\t\t\t\t = ");
         scanf  ("%d" , &pilihan );
                if (pilihan != 1) goto login;

//=======================================================================//
//                          MENU AWAL                                    //
//=======================================================================//
// Nama Fungsi    : Menu Awal                                            //
// Deskripsi      : Fungsi ini dibuat untuk menampilkan Selamat Datang   //
//                  dan memberi pilihan user untuk memilih bahasa        //
//                  yang akan digunakan oleh user di program ATM ini     //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Menambahkan pilihan bahasa untuk dipilih oleh        //
//                  user.                                                //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 2                                                             //
// Revisi 2       : Merapikan fungsi agar tertata dan dan tidak          //
//                  berantakan                                           //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//

        menu_awal : {
    system ("cls");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t   SELAMAT DATANG DI PROGRAM ATM SEDERHANA MY BANK  \n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t              SILAHKAN PILIH BAHASA ANDA          \n");
        printf("\t\t\t\t                     1. INDONESIA                \n");
        printf("\t\t\t\t                     2. ENGLISH                  \n");
        printf("\t\t\t\t ==================================================\n\n\n");
        printf("\t\t\t\t\t\t\n");
        printf ("\t\t\t\t Masukan Pilihan Anda:\n");
        printf ("\t\t\t\t = ");
        scanf  ("%d" , &bahasa );
            if (bahasa == 1) goto indonesia;

            else if (bahasa == 2) goto inggris;

            else
    goto menu_awal;
}

//=======================================================================//
//                     FUNGSI INDONESIA & INGGRIS                        //
//=======================================================================//
// Nama Fungsi    : Indonesia, Inggris                                   //
// Deskripsi      : Fungsi ini dibuat untuk menampilkan kalimat          //
//                  SELAMAT DATANG DI MENU UTAMA ATM MY BANK             //
//                  dengan menggunakan bahasa yang dipilih di awal       //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Merapikan tampilan dari fungsi indonesia dan juga    //
//                  inggris.                                             //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//

	indonesia : {
	system ("cls");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t                    SELAMAT DATANG DI              \n\n");
        printf("\t\t\t\t                     # ATM MY BANK #               \n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
	goto menu1;
	}

	inggris : {
	system ("cls");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t                       WELCOME TO                \n\n");
        printf("\t\t\t\t                     # MY BANK ATM #               \n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
    goto menu2;
	}

//=======================================================================//
//                     MENU 1 dan MENU 2                                 //
//=======================================================================//
// Nama Fungsi    : Menu1 dan Menu2                                      //
// Deskripsi      : Fungsi ini dibuat untuk menampilkan transaksi-       //
//                  transaksi yang dapat dipilih atau dilakukan          //
//                  oleh user di program ATM ini                         //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Mentranslate menu1 ke dalam bahasa inggris dan       //
//                  ditaruh di dalam menu2 untuk user yg memilih inggris //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//
	menu1 :{
	system("cls");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t               SELAMAT DATANG DI MENU UTAMA        \n\n");
        printf("\t\t\t\t                       ATM MY BANK                 \n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\n\n\t\t\t\t MENU UTAMA");
        printf("\n\t\t\t\t 1. CEK SALDO");
        printf("\n\t\t\t\t 2. TARIK TUNAI");
        printf("\n\t\t\t\t 3. TRANSFER");
        printf("\n\t\t\t\t 4. SETOR TUNAI");
        printf("\n\t\t\t\t 5. Keluar");
        printf("\n\t\t\t\t Masukan pilihan anda:\n ");
        printf ("\t\t\t\t = ");
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
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t               WELCOME TO THE MAIN MENU OF         \n\n");
        printf("\t\t\t\t                       MY BANK ATM                 \n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\n\n\t\t\t\t MAIN MENU ");
        printf("\n\t\t\t\t 1. INQUIRY BALANCE");
        printf("\n\t\t\t\t 2. CASH WITHDRAWAL");
        printf("\n\t\t\t\t 3. TRANSFER");
        printf("\n\t\t\t\t 4. CASH DEPOSIT");
        printf("\n\t\t\t\t 5. EXIT");
        printf("\n\t\t\t\t Enter your choice: ");
        printf ("\t\t\t\t = ");
        scanf("%d", &pilihan);

        if (pilihan==1) goto cek_saldo2;
        	else if (pilihan==2) goto tarik_tunai2;
        	else if (pilihan==3) goto transfer2;
        	else if (pilihan==4) goto setor_tunai2;
        	else if (pilihan==5) goto end;
        else
            printf("Enter your choice:");
        }

//=======================================================================//
//                     Cek Saldo 1 dan  2                                //
//=======================================================================//
// Nama Fungsi    : Cek Saldo 1 dan  Cek Saldo 2                         //
// Deskripsi      : Fungsi ini dibuat untuk menampilkan jumlah saldo     //
//                  yang terdapat di rekening user di dalam program ini  //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Mentranslate ceksaldo1 ke dalam bahasa inggris dan   //
//                  mengisi ceksaldo2 dengan bahasa yang sudah           //
//                  ditranslate ke dalam bahasa inggris                  //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//

    cek_saldo1 :{
        printf ("\t\t\t\t========================================================\n");
        printf("\n\t\t\t\t                     SALDO ANDA SEBESAR \n" );
        printf("\n\t\t\t\t                        Rp. %d\n\n", saldo);
        printf ("\t\t\t\t========================================================\n");
        goto ulang1;
        }

    cek_saldo2 :{
        printf ("\t\t\t\t========================================================\n");
        printf("\n\t\t\t\t                     YOUR BALANCE IS \n" );
        printf("\n\t\t\t\t                       Rp. %d\n\n", saldo);
        printf ("\t\t\t\t========================================================\n");
        goto ulang2;
        }

//=======================================================================//
//                     Tarik Tunai 1 dan  2                              //
//=======================================================================//
// Nama Fungsi    : Tarik Tunai 1 dan  Tarik Tunai 2                     //
// Deskripsi      : Fungsi ini dibuat agar user bisa menarik uang dalam  //
//                  rekeningnya dengan syarat jumlah nominal yang ditarik//
//                  lebih kecil atau sama dengan saldonya                //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Mentranslate ceksaldo1 ke dalam bahasa inggris dan   //
//                  mengisi ceksaldo2 dengan bahasa yang sudah           //
//                  ditranslate ke dalam bahasa inggris                  //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//

    tarik_tunai1 :{
	system("cls");
        printf("\n\n\t\t\t\t====================== PILIH NOMINAL YANG INGIN ANDA AMBIL ========================");
        printf("\n\n\t\t\t\t 1. 100000");
        printf("\n\n\t\t\t\t 2. 200000");
        printf("\n\n\t\t\t\t 3. Pilih jumlah nominal lain");
        printf("\n\n\t\t\t\t 5. Keluar");
        printf("\n\n\t\t\t\t Masukkan pilihan anda:\n");
        printf ("\t\t\t\t = ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	if(saldo>=100000){
        	printf("\n\n\t\t\t\t Nominal yang akan anda tarik adalah : Rp. 100000");
        	printf("\n\n\t\t\t\t Saldo anda sekarang = Rp. %d", saldo = saldo-100000);
}
        	else if(saldo<100000){
        	printf("\n\t\t\t\t Saldo anda kurang!");
			}
		}
		else if(pilihan==2){
      		if(saldo>=200000){
        		printf("\n\n\t\t\t\t Nominal yang akan anda tarik adalah : Rp. 200000");
        		printf("\n\n\t\t\t\t Sisa saldo anda = Rp. %d", saldo=saldo-200000);
        	}
        	else if(saldo<200000){
        	printf("\n\t\t\t\t Saldo anda kurang!");
			}
		}
		else if(pilihan==3){
		printf("\n\t\t\t\t Masukkan nominal yang akan anda tarik \n ");
		printf ("\t\t\t\t = ");
        scanf("%d", &nominal);

        	if(saldo>=nominal){
      		printf("\n\n\t\t\t\t Apakah anda akan menarik uang sebesar Rp. %d ?", nominal);
        	printf("\n\n\t\t\t\t 1. Ya  2. Tidak\n\n");
        	printf("\n\n\t\t\t\t Masukkan pilihan anda \n ");
        	printf ("\t\t\t\t = ");

       			scanf("%d", &pilihan);{
      					  if (pilihan==1){
            			    printf("\n\n\t\t\t\t Transaksi Berhasil");
              				printf("\n\n\t\t\t\t Sisa saldo Anda = Rp. %d", saldo=saldo-nominal); }
           				 else if (pilihan==2){
              				  printf("\n\n\t\t\t\t Transaksi Dibatalkan");}
        					}
						}
        	else if(saldo<nominal){
        	printf("\n\t\t\t\t Transaksi Dibatalkan");
        	printf("\n\t\t\t\t Saldo anda kurang!");
       			}
   		}
        else{
            printf("\n\t\t\t\tMasukan pilihan yang benar\n");
            printf ("\t\t\t\t = ");}
         goto ulang1;
    }

    tarik_tunai2 :{
	system("cls");
        printf("\n\n\t\t\t\t ====================== CHOOSE THE NOMINAL YOU DESIRE ========================");
        printf("\n\n\t\t\t\t 1. 100000");
        printf("\n\n\t\t\t\t 2. 200000");
        printf("\n\n\t\t\t\t 3. Enter Another Nominal");
        printf("\n\n\t\t\t\t 5. Exit");
        printf("\n\t\t\t\t Enter your choice:\n ");
        printf ("\t\t\t\t = ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	if(saldo>=100000){
        	printf("\n\n\t\t\t\tThe nominal you will withdraw is : Rp. 100000");
        	printf("\n\n\t\t\t\tYour balance is = Rp. %d", saldo = saldo-100000);
}
        	else if(saldo<100000){
        	printf("\n\t\t\t\tYour balance is not enough!");
			}
		}
		else if(pilihan==2){
      	 	if(saldo>=200000){
        		printf("\n\n\t\t\t\tThe nominal you will withdraw is : Rp. 200000");
        		printf("\n\n\t\t\t\tYour Balance is = Rp. %d", saldo=saldo-200000);
        	}
        	else if(saldo<200000){
        	printf("\n\t\t\t\tYour balance is not enough!");
			}
		}
		else if(pilihan==3){
		printf("\n\t\t\t\t the nominal you will withdraw = ");
        scanf("%d", &nominal);

        	if(saldo>=nominal){
      		printf("\n\n\t\t\t\tIs the nominal Rp. %d that you will withdraw correct?", nominal);
        	printf("\n\n\t\t\t\t 1. Yes 2. No\n\n");
        	printf("\n\n\t\t\t\t Enter your choice \n ");
        	printf ("\t\t\t\t = ");

       			scanf("%d", &pilihan);{
      					  if (pilihan==1){
            			    printf("\n\n\t\t\t\tTransaction was successful");
              				printf("\n\n\t\t\t\t Your Balance is = Rp. %d", saldo=saldo-nominal); }
           				 else
              				  printf("\n\t\t\t\tTransaction failed");
        					}
							}
        	else if(saldo<nominal){
        	printf("\n\t\t\t\t Your balance is not enough!");
       }
   }
        else
        printf("\n\t\t\t\t Please enter the right number!");
        printf ("\n\t\t\t\t = ");
        goto ulang2;
    }


//=======================================================================//
//                     Transfer 1 dan Transfer 2                         //
//=======================================================================//
// Nama Fungsi    : Transfer 1 dan Transfer 2                            //
// Deskripsi      : Fungsi ini dibuat agar user bisa mentransfer         //
//                  tabungan atau saldo di dalam rekeningnya ke rekening //
//                  lain yang diinputkan user                            //
//                  yang terdapat di rekening user di dalam program ini  //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Mentranslate transfer1 ke dalam bahasa inggris dan   //
//                  mengisi transfer2 dengan bahasa yang sudah           //
//                  ditranslate ke dalam bahasa inggris                  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043                       //
//=======================================================================//

    transfer1 :{
	system("cls");
        printf ("\n\t\t\t\t**************************************************************************\n");
        printf("\n\t\t\t\t Silahkan masukkan nomor rekening tujuan anda = ");
        scanf("%d", &transfer);
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\n\t\t\t\t Masukkan nominal yang akan anda transfer = ");
        scanf("%d", &nominal);
        printf("\n\n\t\t\t\tApakah anda ingin mentransfer %d ke rekening %d?", nominal, transfer);
        printf("\n\n\t\t\t\t1. Ya  2. Tidak\n\n");
        printf("\n\n\t\t\t\t Masukkan pilihan anda = ");
        scanf("%d", &pilihan);
{
         if(pilihan==1){
        	if(nominal<=saldo){
        	printf("\n\t\t\t\tTransaksi Berhasil");
        	printf("\n\n\t\t\t\tSisa Saldo Anda = Rp. %d", saldo = saldo-nominal);
}
        	else if(nominal>saldo){
        	printf("\n\n\t\t\t\tTransaksi Dibatalkan");
        	printf("\n\n\t\t\t\tSaldo anda kurang!");
			}
		}
		else if(pilihan==2){
      		printf("\n\t\t\t\tTransaksi di Batalkan!");
			}
		}
        goto ulang1;
    }


    transfer2 :{
	system("cls");
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\t\t\t\t Please enter the bank account destination = ");
        scanf("%d", &transfer);
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\n\t\t\t\tPlease enter the nominal = ");
        scanf("%d", &nominal);
        printf("\n\n\t\t\t\tDo you want to transfer %d to %d bank account?", nominal, transfer);
        printf("\n\n\t\t\t\t1. Yes  2. No\n\n");
        printf("\n\n\t\t\t\t Enter your choice = ");
        scanf("%d", &pilihan);
{
         if(pilihan==1){
        	if(nominal<=saldo){
        	printf("\n\n\t\t\t\tTransaction was successful");
        	printf("\n\n\t\t\t\tYour balance is  = Rp. %d", saldo = saldo-nominal);
}
        	else if(nominal>saldo){
        	printf("\n\t\t\t\t Transaction failed");
        	printf("\n\n\t\t\t\t Your Balance is not enough!");
			}
		}
		else if(pilihan==2){
      		printf("\n\t\t\t\t Enter the right number!");
			}
		}
        goto ulang2;
}


//=======================================================================//
//                    Setor Tunai 1 dan Setor Tunai 2                    //
//=======================================================================//
// Nama Fungsi    : Setor Tunai 1 dan Setor Tunai 2                      //
// Deskripsi      : Fungsi ini dibuat agar user dapat menambah atau      //
//                  menyetor saldo ke dalam rekeningnya melalui program  //
//                  ATM MY BANK ini.                                     //
//                  yang terdapat di rekening user di dalam program ini  //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Mentranslate setor_tunai1 ke dalam bahasa inggris    //
//                  dan mengisi setor_tunai2 dengan bahasa yang sudah    //
//                  ditranslate ke dalam bahasa inggris                  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043                       //
//=======================================================================//

    setor_tunai1 :{
	system("cls");
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\t\t\t\t Masukkan nominal yang akan anda setor = ");
        scanf("%d", &nominal);
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\n\t\t\t\t Letakan uang anda di dalam mesin!\n");
		printf("\n\n\t\t\t\t Apakah anda ingin melakukan setor tunai sebesar : Rp. %d?", nominal);
        printf("\n\n\t\t\t\t 1. Ya  2. Tidak\n\n");
        printf("\n\n\t\t\t\t Masukkan pilihan anda = ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	printf("\n\n\t\t\t\t Transaksi Berhasil");
    		printf("\n\n\t\t\t\t Sisa saldo anda = Rp. %d", saldo = saldo+nominal);
    }
		else if(pilihan==2){
      		printf("\n\t\t\t\tTransaksi di Batalkan!");
			}
        goto ulang1;
    }


    setor_tunai2 : {
    system("cls");
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\t\t\t\t Please enter the nominal = ");
        scanf("%d", &nominal);
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\n\t\t\t\t Place the balance into the ATM Machine!\n");
		printf("\n\n\t\t\t\t Do you want to deposit Rp. %d?", nominal);
        printf("\n\n\t\t\t\t 1. Yes  2. No\n\n");
        printf("\n\n\t\t\t\t Enter your choice = ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	printf("\n\n\t\t\t\t Transaction successful");
    		printf("\n\n\t\t\t\t Your balance is = Rp. %d", saldo = saldo+nominal);
}
		else if(pilihan==2){
      		printf("\n\t\t\t\t Transaction failed!");
      		}
        goto ulang2;
}


//=======================================================================//
//                     Ulang 1 dan  2                                    //
//=======================================================================//
// Nama Fungsi    : Ulang 1 dan  Ulang 2                                 //
// Deskripsi      : Fungsi ini dibuat agar setelah user melakukan        //
//                  transaksi maka program akan memastikan apakah user   //
//                  ingin melakukan transaksi yang lain lagi.            //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Mentranslate ulang1 ke dalam bahasa inggris dan      //
//                  mengisi ulang2 dengan bahasa yang sudah              //
//                  ditranslate ke dalam bahasa inggris                  //
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//=======================================================================//

    ulang1 : {
	    printf("\n\n\t\t\t\t Apakah Anda Ingin Transaksi Lagi?");
        printf("\n\n\t\t\t\t 1. Ya 2. Tidak = ");
        scanf("%d", &pilihan);
    system("cls");
            if (pilihan==1) goto menu1;
            if (pilihan==2) goto end;
    }


    ulang2 :{
        printf("\n\n\t\t\t\t Do you want to make another transaction?");
        printf("\n\n\t\t\t\t1. Yes 2. No = ");
        scanf("%d", &pilihan);
    system("cls");
            if (pilihan==1) goto menu2;
            if (pilihan==2) goto end;
    }


//=======================================================================//
//                                 END                                   //
//=======================================================================//
// Nama Fungsi    : END                                                  //
// Deskripsi      : Fungsi ini dibuat untuk mengeluarkan output          //
//                  Terima Kasih dengan dua bahasa yaitu Indonesia       //
//                  dan Inggris yang ditujukan kepada user.               //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
//=======================================================================//

	end : {
	system ("cls");
        printf("\t\t\t\t==================================================\n\n");
        printf("\t\t\t\t    TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI\n\n");
        printf("\t\t\t\t         THANK YOU FOR USING THIS PROGRAM\n\n");
        printf("\t\t\t\t==================================================\n\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t*************** Program ATM MY BANK ***************\n");
        printf("\t\t\t\t ==================================================\n");
        printf("\t\t\t\t*                        Oleh                      *\n");
        printf("\t\t\t\t*               1. Made Hollanda Putri             *\n");
        printf("\t\t\t\t*               2. Jesica Syalomitha               *\n");
        printf("\t\t\t\t ==================================================\n\n\n");
    }
	return (0);
}



