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
#include <time.h>

    int main(){			     			//fungsi main () merupakan kepala dari program dimana program akan di eksekusi oleh fungsi main ini.
    	system ("color F0"); 				//variabel bahasa        => berfungsi untuk mewarnai tampilan dan tulisan program menjadi putih dan hitam
    int bahasa; 			 		//variabel bahasa        => berfungsi untuk mewarnai tampilan dan tulisan program menjadi putih dan hitam
	int menu_awal; 			 		//variabel menu_awal     => berfungsi untuk menampung menu awal yang diinputkan oleh user 
	int pin;				 	//variabel pin 	      	 => berfungsi untuk menampung pin yang diinputkan oleh user
	int pilihan;			 		//variabel pilihan       => berfungsi untuk menampung variabel pilihan yang diinputkan oleh user
	int tarik_tunai1; 		 		//variabel tarik_tunai1  => berfungsi untuk menampung saldo yang ditarik dari rekening user dalam bahasa Indonesia
    int transfer1;			 		//variabel transfer1     => berfungsi untuk menampung saldo yang dikirim dari rekening user ke rekening lain dalam bahasa Indonesia
	int setor_tunai1;	     			//variabel setor_tunai1  => berfungsi untuk menampung menu setor tunai yang diinputkan oleh user dalam bahasa Indonesia
	int setoran;		     			//variabel setoran       => berfungsi untuk menampung variabel setoran yang dimasukkan ke rekening user
	int tarik_tunai2;	     			//variabel tarik_tunai2  => berfungsi untuk menampung saldo yang ditarik dari rekening user dalam bahasa Inggris
	int transfer2;		     			//variabel transfer2     => berfungsi untuk menampung saldo yang dikirim dari rekening user ke rekening lain dalam bahasa Inggris
    int setor_tunai2;        				//variabel setor_tunai2  => berfungsi untuk menampung menu setor_tunai1 yang diinputkan oleh user dalam bahasa Inggris
	int nominal; 		     			//variabel nominal  	 => berfungsi untuk menampung nilai nominal di rekening user
	int transfer; 		     			//variabel transfer      => berfungsi untuk menampung variabel transfer dari rekening user
	int ulang1;			     		//variabel ulang1 	 => berfungsi untuk menampung menu ulang1 yang diinputkan oleh user dalam bahasa Indonesia
	int ulang2; 		     			//variabel ulang2	 => berfungsi untuk menampung menu ulang1 yang diinputkan oleh user dalam bahasa Inggris
	int saldo = 500000;      			//variabel saldo 	 => berfungsi untuk menampung nominal saldo dari rekening user sejumlah Rp 500.000,-	
	int end; 			     		//variabel end 		 => berfungsi untuk menampung proses akhir program
    time_t  ambil_waktu;     				//variavel waktuserver   => berfungsi untuk mengambil waktu dari sistem pada program
    char username[10];       				//Tipe data dan variabel untuk pilihan username dengan elemen ke 10
	char kode[10]; 		     			//Tipe data dan variabel untuk pilihan kode dengan elemen ke 10

//=======================================================================//
//                    Fungsi Login                                       //
//=======================================================================//
// Nama Fungsi    : Login                                                //
// Deskripsi      : Fungsi ini digunakan agar hanya user yang            //
//                  menginputkan kode dan username yang benar yang dapat //
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
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

    login : { 																	       			 //Memanggil fungsi menu login pada program
        system ("cls");																			//Menghapus layar terminal
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
        printf ("\t\t\t\t Masukan USERNAME Anda: ");								    							//Menampilkan output teks
        scanf ("%s", username);																		//Berfungsi untuk mencetak string
        printf ("\t\t\t\t Masukan KODE USER Anda: ");  															//Menampilkan output teks
        scanf ("%s", kode);																		//Berfungsi untuk mencetak string

        if((strcmp(username, "Hollanda14") == 0) && (strcmp(kode, "Jesica43") == 0)) {  //Syntax strcmp digunakan untuk membandingkan string satu dengan string lainnya	
            printf ("\n\t\t\t\t ANDA BERHASIL LOGIN\n");
            printf("\t\t\t\t========================\n");
            printf ("\n\t\t\t\t Tekan 1 UNTUK LANJUT\n");
            printf("\t\t\t\t========================\n");
            printf ("\t\t\t\t = ");
            scanf  ("%d" , &pilihan );																	//Simbol untuk menampilkan nilai angka atau bilangan desimal
                if (pilihan != 1) goto login;																//Percabangan jika angka yang diinput user tidak sama dengan angka satu maka program dibawa menuju menu login
	}

        else {
            printf ("\t\t\t\t MAAF, USERNAME ATAU PASSWORD ANDA SALAH\n");
            printf ("\n\t\t\t\t Tekan 1 UNTUK ULANG\n");
            printf("\t\t\t\t========================\n");
            printf ("\t\t\t\t = ");
            scanf  ("%d" , &pilihan );																	//Simbol untuk menampilkan nilai angka atau bilangan desimal
                if (pilihan = 1) goto login;																//Percabangan jika user menginput angka selain 1 maka program langsung dibawa menuju menu login

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
// Direvisi Oleh  : Made Hollanda Putri - 2105551014        		 //
//									 //
// Versi : 2                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

    struct pemilik_rekening //Tipe data struct pemilik_rekening dengan elemen char nama, norek, alamat dan integer umur
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
        printf("\t\t\t\t Nama			: %s\n", pemilik_rekening_1.nama);
        printf("\t\t\t\t Nomor Rekening : %s\n", pemilik_rekening_1.norek);
        printf("\t\t\t\t Alamat			: %s\n", pemilik_rekening_1.alamat);
        printf("\t\t\t\t Umur			: %d\n", pemilik_rekening_1.umur); }

    else if (pin == 111001) {
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\t\t\t\t Nama			: %s\n",  pemilik_rekening_2.nama);
        printf("\t\t\t\t Nomor Rekening : %s\n",  pemilik_rekening_2.norek);
        printf("\t\t\t\t Alamat			: %s\n",  pemilik_rekening_2.alamat);
        printf("\t\t\t\t Umur			: %d\n",  pemilik_rekening_2.umur);}

    else {
        printf ("\n\t\t\t\t PIN SALAH\n");
        printf("\t\t\t\t========================\n");
        printf ("\n\t\t\t\t Tekan 1 UNTUK ULANG\n");
        printf("\t\t\t\t========================\n");
        printf ("\t\t\t\t = ");
        scanf  ("%d" , &pilihan );																		//Simbol untuk menampilkan nilai angka atau bilangan desimal
            if (pilihan != 1) goto login;									 								//Percabangan Jika angka yang diinput user tidak sama dengan angka satu maka program dibawa menuju menu login
        goto login;
        }

         printf ("\n\t\t\t\t Tekan 1 UNTUK TRANSAKSI\n");
         printf("\t\t\t\t========================\n");
         printf ("\t\t\t\t = ");
         scanf  ("%d" , &pilihan );
                if (pilihan != 1) goto login;																	//Percabangan jika angka yang diinput user tidak sama dengan angka satu maka program dibawa menuju menu login

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
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

        menu_awal : {															      					//Memanggil fungsi menu login pada program
    system ("cls");																	  			//Menghapus layar terminal
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
        scanf  ("%d" , &bahasa );													 					//Simbol untuk menampilkan nilai angka atau bilangan desimal
            if (bahasa == 1) goto indonesia;										 							//Percabangan jika angka yang diinput user sama dengan angka satu maka program dibawa menuju menu menu indonesia

            else if (bahasa == 2) goto inggris;										 							//Kondisi lainnya Jika angka yang diinput user sama dengan angka satu maka program dibawa menuju menu menu indonesia

            else
    goto menu_awal;																	 			//Jika user menginput selain angka diatas maka program akan dibawa menuju menu awal
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
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

	indonesia : {																				//Memanggil fungsi menu indonesia
	system ("cls");																				//Menghapus layar terminal
	goto menu1;																				//Membawa program menuju menu1
	}

	inggris : {																				//Memanggil fungsi menu inggris
	system ("cls");																				//Menghapus layar terminal
    goto menu2;																					//Membawa program menuju menu1
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
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//
	menu1 :{																	   			//Memanggil fungsi menu indonesia
	system("cls");																   				//Menghapus layar terminal
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
        printf ("n\t\t\t\t = ");
        scanf("%d", &pilihan);													   						//Simbol untuk menampilkan nilai angka atau bilangan desimal

        if (pilihan==1) goto cek_saldo1;										   							//Percabangan jika user menginput angka satu maka program akan dibawa menuju menu cek_saldo1
        	else if (pilihan==2) goto tarik_tunai1;								   								//Kondisi lainnya jika user menginput angka dua maka program akan dibawa menujuu menu tarik_tunai1
        	else if (pilihan==3) goto transfer1;  								   								//Kondisi lainnya jika user menginput angka tiga maka program akan dibawa menujuu menu transfer1
        	else if (pilihan==4) goto setor_tunai1;								   								//Kondisi lainnya jika user menginput angka empat maka program akan dibawa menujuu menu setor_tunai1
        	else if (pilihan==5) goto end;										   							//Kondisi lainnya jika user menginput angka lima maka program akan dibawa menujuu menu end

        else
            printf("Masukan pilihan Anda");										   							//Pilihan terakhir Jika user menginput selain angka diatas maka output teks ditampilkan
    }

    menu2 :{ 																	   				//Memanggil fungsi menu indonesia
	system("cls");																   				//Menghapus layar terminal
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
        printf ("n\t\t\t\t = ");
        scanf("%d", &pilihan); 													   						//Simbol untuk menampilkan nilai angka atau bilangan desimal

        if (pilihan==1) goto cek_saldo2;										   							//Percabangan jika user menginput angka satu maka program akan dibawa menuju menu cek_saldo2
        	else if (pilihan==2) goto tarik_tunai2;								   								//Kondisi lainnya jika user menginput angka dua maka program akan dibawa menujuu menu tarik_tunai2
        	else if (pilihan==3) goto transfer2;  								   								//Kondisi lainnya jika user menginput angka tiga maka program akan dibawa menujuu menu transfer2
        	else if (pilihan==4) goto setor_tunai2;								   								//Kondisi lainnya jika user menginput angka empat maka program akan dibawa menujuu menu setor_tunai2
        	else if (pilihan==5) goto end;										   							//Kondisi lainnya jika user menginput angka lima maka program akan dibawa menujuu menu end

        else
            printf("Enter your choice:"); 										   							//Pilihan terakhir Jika user menginput selain angka diatas maka output teks ditampilkan
        }

//=======================================================================//
//                     Cek Saldo 1 dan 2                                 //
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
//									 //
// Versi : 2                                                             //
// Revisi 2	  : Menambahkan fungsi file *history_ceksaldo sebagai 	 //
//		    bukti transaksi cek saldo user pada program		 //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043			 //
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

    cek_saldo1 :{  																			 	//Memanggil fungsi menu ceksaldo1

                if (pin ==111000){																  	   	//Percabangan jika  pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan 
        printf("\n\n\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);				  	   							//Menampilkan string pada program
        printf("\n\t\t\t\t Nomor Rekening 		: %s\n", pemilik_rekening_1.norek);				  	   						//Menampilkan string pada program
        printf ("\n\t\t\t\t========================================================\n");
        printf("\n\t\t\t\t                     SALDO ANDA SEBESAR \n" );
        printf("\n\t\t\t\t                        Rp. %d\n\n", saldo);
        printf ("\n\t\t\t\t========================================================\n");
        time_t ambil_waktu;																			//Menginput waktu pada program
        time(&ambil_waktu);																			//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));							    						//Menampilkan waktu dari data perangkat user
         FILE *history_ceksaldo;																	    	//Membuat sebuah file bukti ceksaldo
            history_ceksaldo=fopen("history_ceksaldo.txt","a");										    					//Menyimpan bukti data ceksaldo pada file jenis txt
    		fprintf(history_ceksaldo,"\n\t\t  TRANSAKSI CEK SALDO");
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
       		fprintf(history_ceksaldo,"\n\n\t\t\tPemilik Rekening : %s\n", pemilik_rekening_1.nama );
       		fprintf(history_ceksaldo,"\n\t\t\tNomor Rekening   	 : %s\n", pemilik_rekening_1.norek);
    		fprintf(history_ceksaldo,"\n\t\t\tSisa Saldo       	 : %d\n", saldo);
    		fprintf(history_ceksaldo,"\n\t\t\tWaktu Transaksi  	 : %s\n", ctime (&ambil_waktu));
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
    		fclose(history_ceksaldo);																    	//Menutup file bukti ceksaldo
        }

                else if (pin==111001){																   		//Kondisi lainnya jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan 
        printf("\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_2.nama);						    						//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_2.norek);						   		 				//Menampilkan string pada program
        printf ("\n\t\t\t\t========================================================\n");
        printf("\n\t\t\t\t                     SALDO ANDA SEBESAR \n" );
        printf("\n\t\t\t\t                        Rp. %d\n\n", saldo);
        printf ("\n\t\t\t\t========================================================\n");
        time_t ambil_waktu;																			//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Waktu Transaksi : %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
         FILE *history_ceksaldo;																     		//Membuat sebuah file bukti ceksaldo
            history_ceksaldo=fopen("history_ceksaldo.txt","a");									        					//Menyimpan bukti data ceksaldo pada file jenis txt
    		fprintf(history_ceksaldo,"\n\t\t  TRANSAKSI CEK SALDO");
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
       		fprintf(history_ceksaldo,"\n\n\t\t\tPemilik Rekening : %s\n", pemilik_rekening_2.nama);
       		fprintf(history_ceksaldo,"\n\t\t\tNomor Rekening   	 : %s\n", pemilik_rekening_2.norek);
    		fprintf(history_ceksaldo,"\n\t\t\tSisa Saldo       	 : %d\n", saldo);
    		fprintf(history_ceksaldo,"\n\t\t\tWaktu Transaksi  	 : %s\n", ctime (&ambil_waktu));
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
    		fclose(history_ceksaldo); 																	//Menutup file bukti ceksaldo
        }

        goto ulang1; //Statement yang membawa program menuju menu ulang1								
        }

    cek_saldo2 :{																				//Memanggil fungsi menu ceksaldo2
                if (pin ==111000){ 																		//Percabangan jika pin yang diinputkan user dengan proses login awal maka output teks akan ditampilkan 
        printf("\n\n\t\t\t\t Bank Account Owner	: %s\n", pemilik_rekening_1.nama);				   								//Menampilkan string pada program
        printf("\n\t\t\t\t Bank Account Number	: %s\n", pemilik_rekening_1.norek);				   								//Menampilkan string pada program
        printf ("\n\t\t\t\t========================================================\n");
        printf("\n\t\t\t\t                     YOUR BALANCE IS \n" );
        printf("\n\t\t\t\t                       Rp. %d\n\n", saldo);
        printf ("\n\t\t\t\t========================================================\n");
        time_t ambil_waktu;																			//Menginput waktu pada program
        time(&ambil_waktu);																			//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\tTransaction Time : %s ", ctime (&ambil_waktu));							    						//Menampilkan waktu dari data perangkat user					 		
        FILE *history_ceksaldo;																			//Membuat sebuah file bukti ceksaldo
            history_ceksaldo=fopen("history_ceksaldo.txt","a");															//Menyimpan bukti data ceksaldo pada file jenis txt
    		fprintf(history_ceksaldo,"\n\t\t  INQUIRY BALANCE HISTORY");
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
       		fprintf(history_ceksaldo,"\n\n\t\t\tBank Account Owner 	: %s\n", pemilik_rekening_1.nama );
       		fprintf(history_ceksaldo,"\n\t\t\tBank Account Number   : %s\n", pemilik_rekening_1.norek);
    		fprintf(history_ceksaldo,"\n\t\t\tRemaining Balance     : %d\n", saldo);
    		fprintf(history_ceksaldo,"\n\t\t\tTransaction Time  	: %s\n", ctime (&ambil_waktu));
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
    		fclose(history_ceksaldo);																	//Menutup file bukti ceksaldo
        }

               else if (pin==111001){																		//Kondisi lainnya jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan 
        printf("\t\t\t\t Bank Account Owner 	: %s\n", pemilik_rekening_2.nama);												//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number    : %s\n", pemilik_rekening_2.norek);												//Menampilkan string pada program
        printf ("\n\t\t\t\t========================================================\n");
        printf("\n\t\t\t\t                     YOUR BALANCE IS \n" );
        printf("\n\t\t\t\t                       Rp. %d\n\n", saldo);
        printf ("\n\t\t\t\t========================================================\n");
        time_t ambil_waktu;																			 //Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Transaction Time 	: %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
        FILE *history_ceksaldo;																			//Membuat sebuah file bukti ceksaldo
            history_ceksaldo=fopen("history_ceksaldo.txt","a");															//Menyimpan bukti data ceksaldo pada file jenis txt
    		fprintf(history_ceksaldo,"\n\t\t  INQUIRY BALANCE HISTORY");
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
       		fprintf(history_ceksaldo,"\n\n\t\t\tBank Account Owner	: %s\n", pemilik_rekening_2.nama);
       		fprintf(history_ceksaldo,"\n\t\t\tBank Account Number   : %s\n", pemilik_rekening_2.norek);
    		fprintf(history_ceksaldo,"\n\t\t\tRemaining Balance 	: %d\n", saldo);
    		fprintf(history_ceksaldo,"\n\t\t\tTransaction Time  	: %s\n", ctime (&ambil_waktu));
    		fprintf(history_ceksaldo,"\n\t\t-----------------------------");
    		fclose(history_ceksaldo);																	//Menutup file bukti ceksaldo
        }

        goto ulang2; //Statement yang membawa program menuju menu ulang2
        }

//=======================================================================//
//                     Tarik Tunai 1 dan 2                               //
//=======================================================================//
// Nama Fungsi    : Tarik Tunai 1 dan Tarik Tunai 2                     //
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
//									 //
// Versi : 2                                                             //
// Revisi 2	  : Menambahkan fungsi file *history_tariktunai sebagai  //
//		    bukti transaksi tarik tunai user pada program	 //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043			 //
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

    tarik_tunai1 :{ 																				//Memanggil fungsi menu tarik_tunai1
	system("cls");  																			//Menghapus layar terminal

        printf("\n\n\t\t\t\t====================== PILIH NOMINAL YANG INGIN ANDA AMBIL ========================");
        printf("\n\n\t\t\t\t 1. 100000");
        printf("\n\n\t\t\t\t 2. 200000");
        printf("\n\n\t\t\t\t 3. Pilih jumlah nominal lain");
        printf("\n\n\t\t\t\t Masukkan pilihan anda:\n");
        printf ("\t\t\t\t = ");
        scanf("%d", &pilihan); 																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(pilihan==1){																				//Percabangan bertingkat jika user menginput angka satu maka program berikut yang akan dijalankan 
        	if(saldo>=100000){																		//Jika user menginput saldo lebih dari sama dengan Rp 100.000,- maka output teks akan ditampilkan
        	printf("\n\n\t\t\t\t Nominal yang anda tarik adalah : Rp. 100000");
        	printf("\n\t\t\t\t Saldo anda sekarang = Rp. %d", saldo = saldo-100000);
}
        	else if(saldo<100000){																		//Jika user menginput saldo kurang dari Rp 100.000,- maka output teks akan ditampilkan
        	printf("\n\t\t\t\t Saldo anda kurang!");
			}
		}
		else if(pilihan==2){																		//Kondisi lainnya jika user menginput angka dua maka maka program berikut yang akan dijalankan
      		if(saldo>=200000){																		//Jika user menginput saldo lebih dari sama dengan Rp 200.000,- maka output teks akan ditampilkan
        		printf("\n\n\t\t\t\t Nominal yang anda tarik adalah : Rp. 200000");
        		printf("\n\t\t\t\t Sisa saldo anda = Rp. %d", saldo=saldo-200000);
        	}
        	else if(saldo<200000){																		//Jika user menginput saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        	printf("\n\t\t\t\t Saldo anda kurang!");
			}
		}
		else if(pilihan==3){																		//Kondisi lainnya jika user menginput angka tiga maka output teks akan ditampilkan
		printf("\n\t\t\t\t Masukkan nominal yang akan anda tarik \n ");
		printf ("\t\t\t\t = ");
        scanf("%d", &nominal); 																			//Simbol untuk menampilkan nilai angka atau bilangan desimal

        	if(saldo>=nominal){																		//Jika user menginput saldo lebih dari nominal maka output teks akan ditampilkan
      		printf("\n\n\t\t\t\t Apakah anda ingn menarik uang sebesar Rp. %d ?", nominal);
        	printf("\n\n\t\t\t\t 1. Ya  2. Tidak\n\n");
        	printf("\n\t\t\t\t Masukkan pilihan anda \n ");
        	printf ("\t\t\t\t = ");

       			scanf("%d", &pilihan);{																	//Simbol untuk menampilkan nilai angka atau bilangan desimal
      					  if (pilihan==1){															//Jika user menginput angka 1 maka output teks akan ditampilkan
            			    printf("\n\n\t\t\t\t Transaksi Berhasil");	
              				printf("\n\n\t\t\t\t Sisa saldo Anda = Rp. %d", saldo=saldo-nominal); }
           				 else if (pilihan==2){															//Jika user menginput angka 2 maka output teks akan ditampilkan
              				  printf("\n\n\t\t\t\t Transaksi Dibatalkan");}
        					}
						}
        	else if(saldo<nominal){																		//Jika user menginput saldo lebih kecil dari nominal maka output teks akan ditampilkan
        	printf("\n\t\t\t\t Transaksi Dibatalkan");
        	printf("\n\t\t\t\t Saldo anda kurang!");
       			}
   		}
        else{																					//Pilihan terakhir jika user menginputkan selain angka diatas maka ouput teks akan ditampilkan
            printf("\n\t\t\t\tMasukan pilihan yang benar\n");
            printf ("\t\t\t\t = ");}


         if (pin ==111000){																			//Percabangan jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan 
        printf("\n\n\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);												//Menampilkan string pada program
        printf("\n\t\t\t\t Nomor Rekening 		: %s\n", pemilik_rekening_1.norek);											//Menampilkan string pada program
        time_t ambil_waktu;																			//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Waktu Transaksi : %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
        FILE *history_tariktunai;																		//Membuat sebuah file bukti tariktunai
            history_tariktunai=fopen("history_tariktunai.txt","a");														//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t  TRANSAKSI TARIK TUNAI");
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\tPemilik Rekening  : %s\n", pemilik_rekening_1.nama);
       		fprintf(history_tariktunai,"\n\t\t\tNomor Rekening    : %s\n", pemilik_rekening_1.norek);
    		fprintf(history_tariktunai,"\n\t\t\tNominal Penarikan : %d\n", nominal);
    		fprintf(history_tariktunai,"\n\t\t\tSisa Saldo        : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\t\t\tWaktu Transaksi   : %s\n", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
    		fclose(history_tariktunai);																	//Menutup file bukti tariktunai
        }
                else if (pin==111001){																		//Percabangan jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan 
        printf("\n\n\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_2.nama);												//Menampilkan string pada program
        printf("\n\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_2.norek);												//Menampilkan string pada program
        time_t ambil_waktu;																			//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
			printf("\n\t\t\t\t Waktu Transaksi : %s ", ctime (&ambil_waktu)); 											//Menampilkan waktu dari data perangkat user
        FILE *history_tariktunai;																		//Membuat sebuah file bukti tariktunai
            history_tariktunai=fopen("history_tariktunai.txt","a");														//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t  TRANSAKSI TARIK TUNAI");
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\tPemilik Rekening  : %s\n", pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\t\t\tNomor Rekening    : %s\n", pemilik_rekening_2.norek);
    		fprintf(history_tariktunai,"\n\t\t\tNominal Penarikan : %d\n", nominal);
    		fprintf(history_tariktunai,"\n\t\t\tSisa Saldo        : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\t\t\tWaktu Transaksi   : %s\n", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
    		fclose(history_tariktunai);																	//Menutup file bukti tariktunai
        }

         goto ulang1; //Statement yang membawa program menuju menu ulang1
    }

    tarik_tunai2 :{ 																				//Memanggil fungsi menu tarik_tunai2
	system("cls"); 																				//Menghapus layar termnial
        printf("\n\n\t\t\t\t ====================== CHOOSE THE NOMINAL YOU DESIRE ========================");
        printf("\n\n\t\t\t\t 1. 100000");
        printf("\n\n\t\t\t\t 2. 200000");
        printf("\n\n\t\t\t\t 3. Enter Another Nominal");
        printf("\n\n\t\t\t\t 5. Exit");
        printf("\n\t\t\t\t Enter your choice:\n ");
        printf ("\t\t\t\t = ");
        scanf("%d", &pilihan);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(pilihan==1){																				//Percabangan bertingkat jika user user menginput angka satu maka program berikut yang akan dijalankan 
        	if(saldo>=100000){																		//Jika user menginput saldo lebih dari sama dengan Rp 100.000,- maka output teks akan ditampilkan
        	printf("\n\n\t\t\t\tThe nominal that you withdraw is : Rp. 100000");
        	printf("\n\n\t\t\t\tYour balance is = Rp. %d", saldo = saldo-100000);
}
        	else if(saldo<100000){																		//Kondisi lainnya jika user menginput angka dua maka maka program berikut yang akan dijalankan
        	printf("\n\t\t\t\tYour balance is not enough!");
			}
		}
		else if(pilihan==2){																		//Kondisi lainnya jika user menginput angka dua maka program berikut yang akan dijalankan 
      	 	if(saldo>=200000){																		//Jika user menginput saldo lebih dari sama dengan Rp 200.000,- maka output teks akan ditampilkan
        		printf("\n\n\t\t\t\tThe nominal that you withdraw is : Rp. 200000");
        		printf("\n\n\t\t\t\tYour Balance is = Rp. %d", saldo=saldo-200000);
        	}
        	else if(saldo<200000){																		//Jika user menginput saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        	printf("\n\t\t\t\tYour balance is not enough!");
			}
		}
		else if(pilihan==3){ 																		//Kondisi lainnya jika user menginput angka tiga maka output teks akan ditampilkan
		printf("\n\t\t\t\t Enter the nominal you will withdraw = ");
        scanf("%d", &nominal);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal

        	if(saldo>=nominal){																		//Jika user menginput saldo lebih dari sama dengan nominal maka output teks akan ditampilkan
      		printf("\n\n\t\t\t\tIs the nominal Rp. %d that you will withdraw correct?", nominal);
        	printf("\n\n\t\t\t\t 1. Yes 2. No\n\n");
        	printf("\n\t\t\t\t Enter your choice \n ");
        	printf ("\t\t\t\t = ");

       			scanf("%d", &pilihan);{																	//Simbol untuk menampilkan nilai angka atau bilangan desimal
      					  if (pilihan==1){															//Jika user menginput angka satu maka output teks akan ditampilkan
            			    printf("\n\n\t\t\t\tTransaction Successful");
              				printf("\n\n\t\t\t\t Your Balance is = Rp. %d", saldo=saldo-nominal); }
           				 else																	//Selain dari itu maka output teks akan ditampilkan
              				  printf("\n\t\t\t\tTransaction Failed");
        					}
							}
        	else if(saldo<nominal){																		//Kondisi lainnya jika user menginput saldo lebih kecil dari nominal maka maka program berikut yang akan dijalankan
        	printf("\n\t\t\t\t Your Balance Is Not Enough!");
       }
   }
        else {																					//Selain dari itu maka output teks akan ditampilkan
        printf("\n\t\t\t\t Please enter the right number!");
        printf ("\n\t\t\t\t = ");}

         if (pin==111000){																			//Percabangan bertingkat jika user menginput pin sesuai dengan proses login awal maka output teks akan ditampilkan 
        printf("\n\t\t\t\t Bank Account Owner	: %s\n", pemilik_rekening_1.nama);												//Menampilkan string pada program
        printf("\t\t\t\t\t Bank Account Number	: %s\n", pemilik_rekening_1.norek);												//Menampilkan string pada program
		time_t ambil_waktu;																		//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Transaction Time		: %s ", ctime (&ambil_waktu)); 												//Menampilkan waktu dari data perangkat user
        FILE *history_tariktunai;																		//Membuat sebuah file bukti tariktunai
            history_tariktunai=fopen("history_tariktunai.txt","a");														//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t  CASH WITHDRAWAL HISTORY");
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\tBank Account Owner  	: %s\n",  pemilik_rekening_1.nama);
       		fprintf(history_tariktunai,"\n\t\t\tBank Account Number     : %s\n",  pemilik_rekening_1.norek);
    		fprintf(history_tariktunai,"\n\t\t\tCash Withdrawal Nominal : %d\n",  nominal);
    		fprintf(history_tariktunai,"\n\t\t\tRemaining Balance       : %d\n",  saldo);
    		fprintf(history_tariktunai,"\n\t\t\tTransaction Time   		: %s\n",   ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
    		fclose(history_tariktunai);																	//Menutup file bukti tariktunai

        }
                else if (pin==111001){																		//Kondisi lainnya jika user pin sesuai dengan proses login awal maka output teks akan ditampilkan 
        printf("\t\t\t\t Bank Account Owner	    : %s\n", pemilik_rekening_2.nama);
        printf("\t\t\t\t Bank Account Number 	: %s\n", pemilik_rekening_2.norek);
		time_t ambil_waktu;																		//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Transaction Time : %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
        FILE *history_tariktunai;																		//Membuka file bukti tariktunai
            history_tariktunai=fopen("history_tariktunai.txt","a");														//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t  CASH WITHDRAWAL HISTORY");
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\tBank Account Owner  	: %s\n",  pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\t\t\tBank Account Number     : %s\n",  pemilik_rekening_2.norek);
    		fprintf(history_tariktunai,"\n\t\t\tCash Withdrawal Nominal : %d\n",  nominal);
    		fprintf(history_tariktunai,"\n\t\t\tRemaining Balance       : %d\n",  saldo);
    		fprintf(history_tariktunai,"\n\t\t\tTransaction Time   		: %s\n",  ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t-----------------------------");
    		fclose(history_tariktunai);																	//Menutup file bukti tariktunai
        }

        goto ulang2;																				//Statement yang membawa program menuju menu ulang1
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
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//									 //
// Versi : 2                                                             //
// Revisi 2	  : Menambahkan fungsi file *history_transfer sebagai    //
//		    bukti transaksi transfer user pada program		 //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043			 //
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

    transfer1 :{ 																				//Memanggil menu transfer1
	system("cls"); 																				//Menghapus layar terminal
        printf ("\n\t\t\t\t**************************************************************************\n");
        printf("\n\t\t\t\t Silahkan masukkan nomor rekening tujuan anda = ");
        scanf("%d", &transfer);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
    if (transfer == 2105551014) {																		//Percabangan jika nomor yang diinputkan user sesuai dengan program maka output teks akan ditampilkan
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\n\t\t\t\t Rekening tujuan anda = \n");
        printf("\t\t\t\t Nama	: %s\n", pemilik_rekening_1.nama);														//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening : %s\n", pemilik_rekening_1.norek);}													//Menampilkan string pada program

    else if (transfer == 2105551043){																		//Percabangan jika nomor yang diinputkan user sesuai dengan program maka output teks akan ditampilkan
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\n\t\t\t\t Rekening tujuan anda = \n");
        printf("\t\t\t\t Nama	: %s\n",  pemilik_rekening_2.nama);														//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening: %s\n",  pemilik_rekening_2.norek);}													//Menampilkan string pada program

    else {																					//Pilihan terakhir jika user menginput selain dari nomor diatas maka output teks akan ditampilkan
        printf ("\n\t\t\t\t Rekening Tidak Terdaftar\n");
        printf("\t\t\t\t========================\n");
        printf("\n\n\t\t\t\tMasukan Ulang Nomor Rekening Tujuan Anda\n");
        printf("\n\n\t\t\t\t1. Ya  2. Tidak\n\n");
        printf("\n\t\t\t\t Masukkan pilihan anda = ");
        scanf("%d", &pilihan);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        goto transfer1 ;}																			//Statement yang akan membawa program menuju menu transfer1

        printf("\n\n\t\t\t\t Masukkan nominal yang akan anda transfer = ");
        scanf("%d", &nominal);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf("\n\n\t\t\t\tApakah anda ingin mentransfer %d ke rekening %d?", nominal, transfer);
        printf("\n\n\t\t\t\t1. Ya  2. Tidak\n\n");
        printf("\n\t\t\t\t Masukkan pilihan anda = ");
        scanf("%d", &pilihan);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
{
         if(pilihan==1){																			//Percabangan jika user menginput angka 1 maka output teks akan ditampilkan
        	if(nominal<=saldo){																		//Jika user menginput nominal kurang dari sama dengan saldo maka ouput teks akan ditampilkan
        	printf("\n\t\t\t\tTransaksi Berhasil");
        	printf("\n\n\t\t\t\tSisa Saldo Anda = Rp. %d", saldo = saldo-nominal);
}
        	else if(nominal>saldo){																		//Kondisi lainnya jika user nominal lebih dari saldo maka ouput teks akan ditampilkan
        	printf("\n\n\t\t\t\tTransaksi Dibatalkan");
        	printf("\n\n\t\t\t\tSaldo anda kurang!");
			}
		}
		else if(pilihan==2){ 																		//Kondisi lainnya jika user menginput angka dua maka maka program berikut yang akan dijalankan
      		printf("\n\t\t\t\tTransaksi di Batalkan!");															
			}
		}

        if (pin ==111000){ 																			//Percabangan jika pin yang diinputkan user sesuai dengan proses login awal maka ouput teks akan ditampilkan
        printf("\n\n\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);												//Menampilkan string pada program
        printf("\t\t\t\t\t Nomor Rekening: %s\n", pemilik_rekening_1.norek);													//Menampilkan string pada program
		time_t ambil_waktu;																		//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Waktu Transaksi : %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
        FILE*history_transfer;																			//Membuat sebuah file bukti transfer
            history_transfer=fopen("history_transfer.txt","a");															//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t TRANSAKSI TRANSFER");
    		fprintf(history_transfer,"\n\t\t-----------------------------");
       		fprintf(history_transfer,"\n\t\t\tPemilik Rekening  	  : %s\n",  pemilik_rekening_1.nama);
       		fprintf(history_transfer,"\n\t\t\tNomor Rekening    	  : %s\n",  pemilik_rekening_1.norek);
       		fprintf(history_transfer,"\n\t\t\tPemilik Rekening Tujuan : %s\n",  pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\t\t\tNomor Rekening Tujuan   : %s\n",  pemilik_rekening_2.norek);
    		fprintf(history_transfer,"\n\t\t\tNominal Transfer  	  : %d\n",  nominal);
    		fprintf(history_transfer,"\n\t\t\tSisa Saldo        	  : %d\n",  saldo);
    		fprintf(history_transfer,"\n\t\t\tWaktu Transaksi   	  : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t-----------------------------");
    		fclose(history_transfer); 																	//Menutup file bukti transfer
        }
                else if (pin==111001){																		//Kondisi lainnya jika pin user sesuai dengan proses login awal maka output teks akan ditampilkan
        printf("\n\n\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_2.nama);												//Menampilkan string pada program
        printf("\t\t\t\t\t Nomor Rekening: %s\n", pemilik_rekening_2.norek);													//Menampilkan string pada program
		time_t ambil_waktu;																		//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Waktu Transaksi : %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
        FILE*history_transfer;																			//Membuat sebuah file bukti transfer
            history_transfer=fopen("history_transfer.txt","a");															//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t TRANSAKSI TRANSFER");
    		fprintf(history_transfer,"\n\t\t-----------------------------");
       		fprintf(history_transfer,"\n\t\t\tPemilik Rekening  	  : %s\n",  pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\t\t\tNomor Rekening    	  : %s\n",  pemilik_rekening_2.norek);
       		fprintf(history_transfer,"\n\t\t\tPemilik Rekening Tujuan : %s\n",  pemilik_rekening_1.nama);
       		fprintf(history_transfer,"\n\t\t\tNomor Rekening Tujuan   : %s\n",  pemilik_rekening_1.norek);
    		fprintf(history_transfer,"\n\t\t\tNominal Transfer  	  : %d\n",  nominal);
    		fprintf(history_transfer,"\n\t\t\tSisa Saldo        	  : %d\n",  saldo);
    		fprintf(history_transfer,"\n\t\t\tWaktu Transaksi   	 : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t-----------------------------");
    		fclose(history_transfer);																	//Menutup file bukti transfer
        }

        goto ulang1;																				//Statement yang membawa program menuju menu ulang1
    }

    transfer2 :{																				//Memanggil menu transfer2
	system("cls"); 																				//Menghapus layar terminal
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\t\t\t\t Please Enter The Bank Account Destination = ");
        scanf("%d", &transfer);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal

       if (transfer == 2105551014) {																	 	//Percabangan jika nomor yang diinputkan user sesuai dengan program maka output teks akan ditampilkan
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\n\t\t\t\t Your Destination Bank Account\n");
        printf("\t\t\t\t Name:%s\n", pemilik_rekening_1.nama);															//Menampilkan string pada program
        printf("\t\t\t\t Account number: %s\n", pemilik_rekening_1.norek);}													//Menampilkan string pada program

    else if (transfer == 2105551043){																		//Kondisi lainnya jika nomor yang diinputkan user sesuai dengan program maka output teks akan ditampilkan
        printf("\t\t\t\t================================================\n");
        printf("\n\t\t\t\t Your Destination Bank Account\n");
        printf("\t\t\t\t Nama: %s\n",  pemilik_rekening_2.nama);														//Menampilkan string pada program
        printf("\t\t\t\t Account number: %s\n",  pemilik_rekening_2.norek);}													//Menampilkan string pada program


    else {																					//Pilihan terakhir jika user menginputkan selain dari nomor di atas maka output teks akan ditampilkan 
        printf ("\n\t\t\t\t Account is not Registered\n");
        printf("\t\t\t\t========================\n");
        printf("\n\n\t\t\t\tRe-enter Your Destination Account Number\n");
        printf("\n\n\t\t\t\t1. Yes 2. No\n\n");
        printf("\n\n\t\t\t\t Enter your choice = ");
        scanf("%d", &pilihan); 																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
	        goto transfer2;} 																		//statement yang membawa program menuju menu transfer2


        printf("\n\n\t\t\t\tPlease enter the nominal = ");
        scanf("%d", &nominal);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf("\n\n\t\t\t\tDo you want to transfer %d to %d bank account?", nominal, transfer);
        printf("\n\n\t\t\t\t1. Yes  2. No\n\n");
        printf("\n\t\t\t\t Enter your choice = ");
        scanf("%d", &pilihan);																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
{
         if(pilihan==1){																			//Percabangan jika user menginput angka satu maka maka program berikut yang akan dijalankan
        	if(nominal<=saldo){																		//Jika user menginput nominal kurang dari sama dengan saldo maka output teks akan ditampilkan
        	printf("\n\n\t\t\t\tTransaction Successful");
        	printf("\n\n\t\t\t\tYour balance is  = Rp. %d", saldo = saldo-nominal);
}
        	else if(nominal>saldo){																		//Kondisi lainnya jika user menginput nominal lebih dari saldo maka output teks akan ditampilkan
        	printf("\n\t\t\t\t Transaction failed");
        	printf("\n\n\t\t\t\t Your Balance is not enough!");
			}
		}
		else if(pilihan==2){ 																		//Kondisi lainnya jika user menginput angka dua maka maka program berikut yang akan dijalankan
      		printf("\n\t\t\t\t Enter the right number!");
			}
		}

         if (pin ==111000){																			//Percabangan jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan
        printf("\n\t\t\t\t Bank Account Owner: %s\n", pemilik_rekening_1.nama);							 						//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number	: %s\n", pemilik_rekening_1.norek);						  						//Menampilkan string pada program
		time_t ambil_waktu;																		//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Transaction Time : %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
        FILE*history_transfer;																			//Membuat sebuah file bukti transfer
            history_transfer=fopen("history_transfer.txt","a");															//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t      TRANSFER HISTORY");
    		fprintf(history_transfer,"\n\t\t-----------------------------");
       		fprintf(history_transfer,"\n\t\t\tBank Account Owner  			  : %s\n",  pemilik_rekening_1.nama);
       		fprintf(history_transfer,"\n\t\t\tBank Account Number 			  : %s\n",  pemilik_rekening_1.norek);
       		fprintf(history_transfer,"\n\t\t\tBank Account Destination Owner  : %s\n",  pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\t\t\tBank Account Destination Number : %s\n",  pemilik_rekening_2.norek);
    		fprintf(history_transfer,"\n\t\t\tTransfer Nominal    			  : %d\n",  nominal);
    		fprintf(history_transfer,"\n\t\t\tRemaining Balance   			  : %d\n",  saldo);
    		fprintf(history_transfer,"\n\t\t\tTransaction Time    			  : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t-----------------------------");
    		fclose(history_transfer);																	//Menutup file bukti transfer
        }
                else if (pin==111001){																		//Kondisi lainnya jika pin yang diinputkan user sesusai dengan proses login awal maka output teks akan ditampilkan
        printf("\t\t\t\t Bank Account Owner: %s\n", pemilik_rekening_2.nama);													//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number 	: %s\n", pemilik_rekening_2.norek);												//Menampilkan string pada program
		time_t ambil_waktu;																		//Menginput waktu pada program
        time(&ambil_waktu);																	     	 	//Memproses waktu dari data perangkat user
        printf("\n\t\t\t\t Transaction Time : %s ", ctime (&ambil_waktu)); 													//Menampilkan waktu dari data perangkat user
        FILE*history_transfer;																			//Membuat sebuah file bukti transfer
            history_transfer=fopen("history_transfer.txt","a");													    		//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t      TRANSFER HISTORY");
    		fprintf(history_transfer,"\n\t\t-----------------------------");
       		fprintf(history_transfer,"\n\t\t\tBank Account Owner   			  : %s\n",  pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\t\t\tBank Account Number  			  : %s\n",  pemilik_rekening_2.norek);
       		fprintf(history_transfer,"\n\t\t\tBank Account Destination Owner  : %s\n",  pemilik_rekening_1.nama);
       		fprintf(history_transfer,"\n\t\t\tBank Account Destination Number : %s\n",  pemilik_rekening_1.norek);
    		fprintf(history_transfer,"\n\t\t\tTransfer Nominal     			  : %d\n",  nominal);
    		fprintf(history_transfer,"\n\t\t\tRemaining Balance    			  : %d\n",  saldo);
    		fprintf(history_transfer,"\n\t\t\tTransaction Time     			  : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t-----------------------------");
    		fclose(history_transfer);																	//Menutup file bukti transfer
        }

        goto ulang2;																				//Statement yang membawa program menuju menu ulang2
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
// Direvisi Oleh  : Made Hollanda Putri - 2105551014                     //
//									 //
// Versi : 2                                                             //
// Revisi 2	  : Menambahkan fungsi file *history_setortunai sebagai  //
//		    bukti transaksi setor tunai user pada program 	 //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043			 //
//									 //
// Versi : 3                                                             //
// Revisi 3       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

    setor_tunai1 :{ 																						//Memanggil menu setor_tunai1
	system("cls");																							//Menghapus layar terminal
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\t\t\t\t Masukkan nominal yang akan anda setor = ");
        scanf("%d", &nominal);																				//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\n\t\t\t\t Letakan uang anda di dalam mesin!\n");
		printf("\n\n\t\t\t\t Apakah anda ingin melakukan setor tunai sebesar : Rp. %d?", nominal);
        printf("\n\n\t\t\t\t 1. Ya  2. Tidak\n\n");
        printf("\n\n\t\t\t\t Masukkan pilihan anda = ");
        scanf("%d", &pilihan);																			    //Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(pilihan==1){																						//Percabangan  jika user menginput angka satu maka program berikut yang akan dijalankan 
        	printf("\n\n\t\t\t\t Transaksi Berhasil");
    		printf("\n\n\t\t\t\t Sisa saldo anda = Rp. %d", saldo = saldo+nominal);
    }
		else if(pilihan==2){																				//Kondisi lainnya jika user menginput angka dua maka maka program berikut yang akan dijalankan
      		printf("\n\t\t\t\tTransaksi di Batalkan!");
			}

        if (pin ==111000){																					//Percabangan jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan
        printf("\n\n\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);														//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_1.norek);														//Menampilkan string pada program
		time_t ambil_waktu;																			 	//Menginput waktu pada program
        time(&ambil_waktu);																	     	 			//Memproses waktu dari data perangkat user
        printf("\n\t\t\t Waktu Transaksi : %s ", ctime (&ambil_waktu)); 															//Menampilkan waktu dari data perangkat user
         FILE*history_setor;																					//Membuat sebuah file bukti setor tunai
            history_setor=fopen("history_setor.txt","a");																	//Menyimpan bukti data setor tunai pada file jenis txt
    		fprintf(history_setor,"\n\t\t TRANSAKSI SETOR TUNAI");
    		fprintf(history_setor,"\n\t\t-----------------------------");
       		fprintf(history_setor,"\n\n\t\tPemilik Rekening   : %s\n",  pemilik_rekening_1.nama);
       		fprintf(history_setor,"\n\n\t\tNomor Rekening     : %s\n",  pemilik_rekening_1.norek);
    		fprintf(history_setor,"\n\n\t\tNominal Penyetoran : %d\n",  nominal);
    		fprintf(history_setor,"\n\n\t\tSisa Saldo         : %d\n",  saldo);
    		fprintf(history_setor,"\n\t\t\tWaktu Transaksi    : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t-----------------------------");
    		fclose(history_setor);																				//Menutup file bukti setor tunai

        }
                else if (pin==111001){																				//Kondisi lainnya jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan
        printf("\n\nt\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_2.nama);														//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_2.norek);														//Menampilkan string pada program
		time_t ambil_waktu;																			 	//Menginput waktu pada program
        time(&ambil_waktu);																	     	 			//Memproses waktu dari data perangkat user
        printf("\n\t\t\t Waktu Transaksi : %s ", ctime (&ambil_waktu)); 															//Menampilkan waktu dari data perangkat user
         FILE*history_setor;																					//Membuat sebuah file bukti setor tunai
            history_setor=fopen("history_setor.txt","a");																	//Menyimpan bukti data setor tunai pada file jenis txt
    		fprintf(history_setor,"\n\t\t TRANSAKSI SETOR TUNAI");
    		fprintf(history_setor,"\n\t\t-----------------------------");
       		fprintf(history_setor,"\n\n\t\tPemilik Rekening   : %s\n",  pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\tNomor Rekening     : %s\n",  pemilik_rekening_2.norek);
    		fprintf(history_setor,"\n\n\t\tNominal Penyetoran : %d\n",  nominal);
    		fprintf(history_setor,"\n\n\t\tSisa Saldo         : %d\n",  saldo);
    		fprintf(history_setor,"\n\t\t\tWaktu Transaksi    : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t-----------------------------");
    		fclose(history_setor);																				//Menutup file bukti setor tunai
        }

        goto ulang1; 																						//Statement yang membawa program menuju menu ulang1
    }


    setor_tunai2 : { 																						//Memanggil fungsi setor_tunai2
    system("cls");																						//Menghapus layar terminal
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\t\t\t\t Please enter the nominal = ");
        scanf("%d", &nominal);																					//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("\n\t\t\t\t **************************************************************************\n");
        printf("\n\n\t\t\t\t Place the balance into the ATM Machine!\n");
		printf("\n\n\t\t\t\t Do you want to deposit Rp. %d?", nominal);
        printf("\n\n\t\t\t\t 1. Yes  2. No\n\n");
        printf("\n\n\t\t\t\t Enter your choice = ");
        scanf("%d", &pilihan);																					//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(pilihan==1){
        	printf("\n\n\t\t\t\t Transaction Successful");
    		printf("\n\n\t\t\t\t Your Balance Ss = Rp. %d", saldo = saldo+nominal);
}
		else if(pilihan==2){																				//Kondisi lainnya jika user menginput angka dua maka maka program berikut yang akan dijalankan
      		printf("\n\t\t\t\t Transaction Failed!");
      		}

         if (pin ==111000){																					//Percabangan jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan
        printf("\n\t\t\t\t Bank Account Owner	: %s\n", pemilik_rekening_1.nama);														//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number	: %s\n", pemilik_rekening_1.norek);														//Menampilkan string pada program
		time_t ambil_waktu;																			 	//Menginput waktu pada program
        time(&ambil_waktu);																	     	 			//Memproses waktu dari data perangkat user
        printf("\n\t\t\t Transaction Time : %s ", ctime (&ambil_waktu)); 															//Menampilkan waktu dari data perangkat user
         FILE*history_setor; 																					//Membuat sebuah file bukti setor tunai
            history_setor=fopen("history_setor.txt","a");																	//Menyimpan bukti data setor tunai pada file jenis txt
    		fprintf(history_setor,"\n\t\t     CASH DEPOSIT HISTORY");
    		fprintf(history_setor,"\n\t\t-----------------------------");
       		fprintf(history_setor,"\n\n\t\tBank Account Owner      : %s\n",  pemilik_rekening_1.nama);
       		fprintf(history_setor,"\n\n\t\tBank Account Number     : %s\n",  pemilik_rekening_1.norek);
    		fprintf(history_setor,"\n\n\t\tCash Withdrawal Nominal : %d\n",  nominal);
    		fprintf(history_setor,"\n\n\t\tRemaining Balance       : %d\n",  saldo);
    		fprintf(history_setor,"\n\t\t\tTransaction Time        : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t-----------------------------");
    		fclose(history_setor);																				//Menutup file bukti setor tunai

        }
                else if (pin==111001){																				//Percabangan jika pin yang diinputkan user sesuai dengan proses login awal maka output teks akan ditampilkan
        printf("\t\t\t\t Bank Account Owner	    : %s\n", pemilik_rekening_2.nama);														//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number 	: %s\n", pemilik_rekening_2.norek);														//Menampilkan string pada program
		time_t ambil_waktu;																			 	//Menginput waktu pada program
        time(&ambil_waktu);																	     	 			//Memproses waktu dari data perangkat user
        printf("\n\t\t\t Transaction Time : %s ", ctime (&ambil_waktu)); 															//Menampilkan waktu dari data perangkat user
         FILE*history_setor;																					//Membuat sebuah file bukti setor tunai
            history_setor=fopen("history_setor.txt","a");																	//Menyimpan bukti data setor tunai pada file jenis txt
    		fprintf(history_setor,"\n\t\t    CASH DEPOSIT HISTORY");
    		fprintf(history_setor,"\n\t\t-----------------------------");
       		fprintf(history_setor,"\n\n\t\tBank Account Owner      : %s\n",  pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\tBank Account Number     : %s\n",  pemilik_rekening_2.norek);
    		fprintf(history_setor,"\n\n\t\tCash Withdrawal Nominal : %d\n",  nominal);
    		fprintf(history_setor,"\n\n\t\tRemaining Balance       : %d\n",  saldo);
    		fprintf(history_setor,"\n\t\t\tTransaction Time        : %s\n",  ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t-----------------------------");
    		fclose(history_setor);																				//Menutup file bukti setor tunai
        }

        goto ulang2;																						//Statement yang membawa program menuju menu ulang2
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
//									 //
// Versi : 2                                                             //
// Revisi 2       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

    ulang1 : { 													            									//Memanggil menu ulang1
	    printf("\n\n\t\t\t\t Apakah Anda Ingin Transaksi Lagi?");
        printf("\n\n\t\t\t\t 1. Ya 2. Tidak = ");
        scanf("%d", &pilihan);																					//Simbol untuk menampilkan nilai angka atau bilangan desimal
    system("cls"); 																						//Menghapus layar terminal
            if (pilihan==1) goto menu1; 																			//Percabangan jika user menginput angka satu maka program akan dibawa menuju menu1
            if (pilihan==2) goto end;																				//Percabangan jika user menginput angka dua maka program akan dibawa menuju end
    }

    ulang2 :{															   								//Memanggil menu ulang1
        printf("\n\n\t\t\t\t Do you want to make another transaction?");
        printf("\n\n\t\t\t\t1. Yes 2. No = ");
        scanf("%d", &pilihan);											   										//Simbol untuk menampilkan nilai angka atau bilangan desimal
    system("cls");														   								//Menghapus layar terminal
            if (pilihan==1) goto menu2;									   											//Percabangan jika user menginput angka satu maka program akan dibawa menuju menu2
            if (pilihan==2) goto end;									   											//Percabangan jika user menginput angka dua maka program akan dibawa menuju end
    }

//=======================================================================//
//                                 END                                   //
//=======================================================================//
// Nama Fungsi    : END                                                  //
// Deskripsi      : Fungsi ini dibuat untuk mengeluarkan output          //
//                  Terima Kasih dengan dua bahasa yaitu Indonesia       //
//                  dan Inggris yang ditujukan kepada user.              //
// Dibuat Oleh    : Made Hollanda Putri - 2105551014                     //
//                                                                       //
// Versi : 1                                                             //
// Revisi 1       : Menambahkan penjelasan dari masing-masing statement  //
// Direvisi Oleh  : Jesica Syalomitha - 2105551043      		 //
//=======================================================================//

	end : { 																		 				//Memanggil fungsi end
	system ("cls"); 																 					//Menghapus layar terminal
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
	return (0); 																	 					//Statement yang menyatakan program berakhir dengan normal
}
