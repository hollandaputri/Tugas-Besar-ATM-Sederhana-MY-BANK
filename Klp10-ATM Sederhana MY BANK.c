/***************************************************************************************************
TUGAS BESAR KELOMPOK 10
ANGGOTA :
1. Made Hollanda Putri (2105551014)
2. Jesica Syalomitha Sule Ulang (2105551043)
JUDUL PROGRAM	: PROGRAM ATM SEDERHANA "MY BANK"
****************************************************************************************************/
//Header yang di gunakan untuk standar input output pada bahasa C
#include <stdio.h> 	//Fungsi untuk mempermudah proses input dan output
#include <string.h> //Fungsi untuk mempermudah proses dalam proses bekerja dengan string
#include <stdlib.h> //Fungsi, variabel, dan macro untuk proses pekerjaan umum tertentu
#include <time.h>   //Fungsi untuk menambahkan waktu pada program

//Dekalarasi variabel global yang digunakan pada program ini:
    int main(){							 // fungsi main () merupakan kepala dari program dimana program akan di eksekusi oleh fungsi main ini.
    	system ("color E0");  		 	 //variabel bahasa        => berfungsi untuk mewarnai tampilan dan tulisan program menjadi kuning dan hitam
    int bahasa; 			 			 //variabel bahasa        => berfungsi untuk menampung menu login yang diinputkan oleh user
    int login;							 //variabel login 		  => berfungsi untuk menampung pilihan bahasa yang diinputkan oleh user
	int menu_awal; 		     			 //variabel menu_awal     => berfungsi untuk menampung menu awal yang diinputkan oleh user 
	int menu1;				 			 //variabel menu1   	  => berfungsi untuk menampung menu1 yang diinputkan oleh user 
	int menu2;				 			 //variabel menu2  	  	  => berfungsi untuk menampung menu2 yang diinputkan oleh user 
	int pin; 			     			 //variabel pin 	      => berfungsi untuk menampung pin yang diinputkan oleh user
	int pilihan; 		     			 //variabel pilihan       => berfungsi untuk menampung pin yang diinputkan oleh user
	int tarik_tunai1; 	     			 //variabel tarik_tunai1  => berfungsi untuk menampung saldo yang ditarik dari rekening user dalam bahasa Indonesia
	int transfer; 		     			 //variabel transfer     => berfungsi untuk menampung variabel transfer dari rekening user
	int transfer1; 		     			 //variabel transfer1     => berfungsi untuk menampung saldo yang dikirim dari rekening user ke rekening lain dalam bahasa Indonesia
	int setor_tunai1;       			 //variabel setor_tunai1  => berfungsi untuk menampung menu setor_tunai1 yang diinputkan oleh user dalam bahasa Indonesia
	int setoran; 		     			 //variabel setoran       => berfungsi untuk menampung saldo yang dimasukkan ke rekening user
	int tarik_tunai2;        			 //variabel tarik_tunai2  => berfungsi untuk menampung saldo yang ditarik dari rekening user dalam bahasa Inggris
	int transfer2;           			 //variabel transfer2     => berfungsi untuk menampung saldo yang dikirim dari rekening user ke rekening lain dalam bahasa Inggris
	int setor_tunai2;        			 //variabel setor_tunai2  => berfungsi untuk menampung menu setor_tunai1 yang diinputkan oleh user dalam bahasa Inggris
	int nominal; 			 			 //variabel nominal  	  => berfungsi untuk menampung nilai nominal di rekening user
	int ceksaldo1;						 //variabel ceksaldo1     => berfungsi untuk menampung menu ceksaldo1 yang diinputkan oleh user
	int ceksaldo2;			 			 //variabel ceksaldo2     => berfungsi untuk menampung menu ceksaldo2 yang diinputkan oleh user
	int ulang1;              			 //variabel ulang1 	  	  => berfungsi untuk menampung menu ulang1 yang diinputkan oleh user dalam bahasa Indonesia
	int ulang2;               			 //variabel ulang2		  => berfungsi untuk menampung menu ulang1 yang diinputkan oleh user dalam bahasa Inggris
	int saldo = 500000;       			 //variabel saldo 		  => berfungsi untuk menampung nominal saldo dari rekening user sejumlah Rp 500.000,-
	int end;                  			 //variabel end 		  => berfungsi untuk menampung proses akhir program
    char username[10]; 		  			 //Tipe data dan variabel untuk pilihan username dengan elemen ke 10
	char kode[10]; 			 			 //Tipe data dan variabel untuk pilihan kode dengan elemen ke 10
	time_t t; 				 			 //variavel waktuserver   => berfungsi untuk mengambil waktu dari sistem.
		
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
        printf ("\t\t\t\t Masukan USERNAME Anda: ");															//Menampilkan output teks
        scanf ("%s", username);																					//Berfungsi untuk mencetak string
        printf ("\t\t\t\t Masukan KODE USER Anda: ");															//Menampilkan output teks
        scanf ("%s", kode);																						//Berfungsi untuk mencetak string


        if((strcmp(username, "Hollanda14") == 0) && (strcmp(kode, "Jesica43") == 0)) {							//Syntax strcmp digunakan untuk membandingkan string satu dengan string lainnya	
            printf ("\n\t\t\t\t ANDA BERHASIL LOGIN\n");
            printf("\t\t\t\t========================\n");
            printf ("\n\t\t\t\t Tekan 1 UNTUK LANJUT\n");
            printf("\t\t\t\t========================\n");
            printf ("\t\t\t\t = ");
            scanf  ("%d" , &pilihan );																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
                if (pilihan != 1) goto login;																	//Jika angka yang diinput user tidak sama dengan satu maka program dibawa menuju menu login
	}

        else {																									//Pilihan terakhir jika user menginput angka selain 1 maka program langsung dibawa menuju menu login
            printf ("\t\t\t\t MAAF, USERNAME ATAU PASSWORD ANDA SALAH\n");
            printf ("\n\t\t\t\t Tekan 1 UNTUK ULANG\n");
            printf("\t\t\t\t========================\n");
            printf ("\t\t\t\t = ");
            scanf  ("%d" , &pilihan );
                if (pilihan = 1) goto login;

    }
	}

    struct pemilik_rekening																					  //Struct User untuk menyimpan member nama, nomor rekening, dan alamat 
    {
    char *nama;
    char *norek;
    char *alamat;																							  //Untuk Menyimpan nilai umur dari user
    int umur;
    };

    //Struct User untuk menyimpan data pemilik rekening, pemiliki rekening 1, dan pemilik rekening 2
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
    if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\t\t\t\t Nama			: %s\n", pemilik_rekening_1.nama);									//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening : %s\n", pemilik_rekening_1.norek);									//Menampilkan string pada program
        printf("\t\t\t\t Alamat			: %s\n", pemilik_rekening_1.alamat);								//Menampilkan string pada program
        printf("\t\t\t\t Umur			: %d\n", pemilik_rekening_1.umur); }								//Menampilkan string pada program


    else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("\n\n");
        printf("\t\t\t\t================================================\n");
        printf("\t\t\t\t Nama			: %s\n",  pemilik_rekening_2.nama);									//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening : %s\n",  pemilik_rekening_2.norek);								//Menampilkan string pada program
        printf("\t\t\t\t Alamat			: %s\n",  pemilik_rekening_2.alamat);								//Menampilkan string pada program
        printf("\t\t\t\t Umur			: %d\n",  pemilik_rekening_2.umur);}							    //Menampilkan string pada program

    else {																									//Pilihan terakhir jika user menginput pin selain dari pilihan pin yang tersedia, maka program langsung dibawa menuju menu login
        printf ("\n\t\t\t\t PIN SALAH");
        printf("\t\t\t\t========================\n");
        }

         printf ("\n\t\t\t\t Tekan 1 UNTUK TRANSAKSI\n");
         printf("\t\t\t\t========================\n");
         printf ("\t\t\t\t = ");
         scanf  ("%d" , &pilihan );																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
                if (pilihan != 1) goto login;																//Jika angka yang diinput selain dari 1, maka program langsung dibawa menuju menu login	

menu_awal : {																								//Memanggil fungsi menu awal
    system ("cls");   																						//Membersihkan layar terminal
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
        printf ("\n          SELAMAT DATANG DI PROGRAM ATM SEDERHANA MY BANK	\n\n");
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
        printf ("\n\nSILAHKAN PILIH BAHASA ANDA \n");
        printf ("PLEASE SELECT YOUR LANGUAGE \n");
        printf (" 1. Indonesia\n 2. English\n");
        printf (" = ");
        scanf  ("%d" , &bahasa ); 			 	 															//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if (bahasa == 1) 
			goto menu1;     																				//Percabangan jika user menginput angka 1 maka program langsung dibawa ke menu bahasa Indonesia

        else if (bahasa == 2) 
			goto menu2; 																					//Kondisi lainnya jika user menginput angka 2 maka program langsung dibawa ke menu bahasa Inggris

        else
    		goto menu_awal; 																				//Pilihan terakhir jika user menginput angka selain dari pilihan yang tersedia, maka program langsung dibawa menuju menu awal
}

menu1 :{ 																								//Memanggil fungsi menu1
	system("cls");  																						//Membersihkan layar terminal
        printf("\n------------- SELAMAT DATANG DI ATM MY BANK-----------\n");
        printf("\n\n======================Menu Utama========================");
        printf("\n\n1. CEK SALDO");
        printf("\n\n2. TARIK TUNAI");
        printf("\n\n3. TRANSFER");
        printf("\n\n4. SETOR TUNAI");
        printf("\n\n5. Keluar");
        printf("\n\n Masukan pilihan anda: ");
        scanf("%d", &pilihan); 		  																		//Simbol untuk menampilkan nilai angka atau bilangan desimal
        
  if (pilihan==1) goto cek_saldo1;																			//Percabangan jika user menginput angka 1, maka program langsung dibawa ke menu cek_saldo1
        	else if (pilihan==2) goto tarik_tunai1;															//Kondisi lainnya jika user menginput angka 2, maka program langsung dibawa ke menu tarik_tunai1
        	else if (pilihan==3) goto transfer1;															//Kondisi lainnya jika user menginput angka 3, maka program langsung dibawa ke menu transfer1
        	else if (pilihan==4) goto setor_tunai1;															//Kondisi lainnya jika user menginput angka 4, maka program langsung dibawa ke menu setor_tunai1
        	else if (pilihan==5) goto end;																	//Kondisi lainnya jika user menginput angka 5, maka program langsung dibawa ke menu end
        else
            printf("Masukan pilihan Anda");																	//Pilihan terakhir jika user menginput angka selain dari pilihan yang tersedia, maka output berupa teks akan ditampilkan  
    }

menu2 :{ 																								//Memanggil fungsi menu2
	system("cls");  																						//Membersihkan layar terminal
        printf("\n------------- WELCOME TO MY BANK ATM-----------");
        printf("\n\n======================Main Menu========================");
        printf("\n\n1. INQUIRY BALANCE");
        printf("\n\n2. CASH WITHDRAWAL");
        printf("\n\n3. TRANSFER");
        printf("\n\n4. CASH DEPOSIT");
        printf("\n\n5. EXIT");
        printf("\n\n Enter your choice: ");
        scanf("%d", &pilihan); 																				//Simbol untuk menampilkan nilai angka atau bilangan desimal

        if (pilihan==1) goto cek_saldo2; 																	//Percabangan jika user menginput angka 1, maka program langsung dibawa ke menu cek_saldo2
        	else if (pilihan==2) goto tarik_tunai2; 														//Kondisi lainnya jika user menginput angka 2, maka program langsung dibawa ke menu tarik_tunai2
        	else if (pilihan==3) goto transfer2; 															//Kondisi lainnya jika user menginput angka 3, maka program langsung dibawa ke menu transfer2
        	else if (pilihan==4) goto setor_tunai1;															//Kondisi lainnya jika user menginput angka 4, maka program langsung dibawa ke menu setor_tunai2
        	if (pilihan==5) goto end;																		//Kondisi lainnya jika user menginput angka 5, maka program langsung dibawa ke menu end
        else
            printf("Enter your choice:"); 																	//Pilihan terakhir jika user menginput angka selain dari pilihan yang tersedia, maka output berupa teks akan ditampilkan  
    	}

    cek_saldo1 :{ 	 																						//Memanggil fungsi cek_saldo1
    system ("cls");  																						//Membersihkan layar terminal
	if (pin == 111000) {																						//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_1.norek);								//Menampilkan string pada program
        printf ("========================================================\n");}
		else if (pin == 111001) {																			//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Pemilik Rekening	: %s\n",  pemilik_rekening_2.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n",  pemilik_rekening_2.norek);							//Menampilkan string pada program								//Untuk membersihkan layar pada program
		printf ("===================================================\n");
        printf("Saldo anda adalah Rp. %d\n\n", saldo);
        printf ("============================================================================\n");
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("Waktu Transaksi : %s ", ctime (&ambil_waktu));												//Menampilkan waktu pada layar 
        FILE *history_ceksaldo;																				//Membuat sebuah file bukti ceksaldo
        history_ceksaldo=fopen("history_ceksaldo.txt","a");													//Menyimpan bukti data ceksaldo pada file jenis txt
    		fprintf(history_ceksaldo,"\n\t\t                             TRANSAKSI CEK SALDO");
    		fprintf(history_ceksaldo,"\n\t\t                       -----------------------------");
       		fprintf(history_ceksaldo,"\n\n\t\t   						Pemilik Rekening : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_ceksaldo,"\n\n\t\t   						Nomor Rekening   : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_ceksaldo,"\n\n\t\t            				Sisa Saldo       : %d\n", saldo);
    		fprintf(history_ceksaldo,"\n\t\t\t							Waktu Transaksi  : %s\n", ctime (&ambil_waktu));
    		fprintf(history_ceksaldo,"\n\t\t                       -----------------------------");
    		fclose(history_ceksaldo);     
    goto ulang1;}											 												//Statement yang membawa program menuju menu ulang1

    cek_saldo2 :{ 																						    //Memanggil fungsi cek_saldo2
	FILE *history_ceksaldo;																					//Membuat sebuah file bukti ceksaldo
    system ("cls");  																						//Membersihkan layar terminal
    if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Account Holder				 : %s\n", pemilik_rekening_1.nama);						//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number 		 : %s\n", pemilik_rekening_1.norek);					//Menampilkan string pada program
        printf ("========================================================\n");
    }else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Account Holder	 			 : %s\n",  pemilik_rekening_2.nama);					//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number 		 : %s\n",  pemilik_rekening_2.norek);					//Menampilkan string pada program							
		printf ("===================================================\n");
        printf("Your balance is Rp. %d\n\n", saldo);
        printf ("============================================================================\n");
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("Transaction Time : %s ", ctime (&ambil_waktu));												//Menampilkan waktu pada layar 
        history_ceksaldo=fopen("history_ceksaldo.txt","a");													//Menyimpan bukti data ceksaldo pada file jenis txt
    		fprintf(history_ceksaldo,"\n\t\t                         INQUIRY BALANCE HISTORY");
    		fprintf(history_ceksaldo,"\n\t\t                       -----------------------------");
       		fprintf(history_ceksaldo,"\n\n\t\t   						Account Holder 		: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_ceksaldo,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_ceksaldo,"\n\n\t\t            				Remaining Balance   : %d\n", saldo);
    		fprintf(history_ceksaldo,"\n\t\t\t							Transaction Time    : %s\n", ctime (&ambil_waktu));
    		fprintf(history_ceksaldo,"\n\t\t                       -----------------------------");
    		fclose(history_ceksaldo);     
	goto ulang2;}}																							//Statement yang membawa program menuju menu ulang2
	
    tarik_tunai1 :{ 		  																				//Memanggil fungsi tarik_tunai
	FILE *history_tariktunai;	
	system ("cls");  																						//Membuat file bukti transaksi tariktunai
	if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_1.norek);								//Menampilkan string pada program
        printf ("========================================================\n");
    }else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Pemilik Rekening	: %s\n",  pemilik_rekening_2.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n",  pemilik_rekening_2.norek);							//Menampilkan string pada program								//Untuk membersihkan layar pada program
		printf ("===================================================\n");
        printf("Sisa saldo anda adalah Rp. %d\n\n", saldo);													//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("============================================================================\n");																																					//Membersihkan layar terminal
        printf("\n\n====================== PILIH NOMINAL YANG INGIN ANDA TARIK ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Pilih jumlah nominal lain");
        printf("\n\n5. Keluar");
        printf("\n\nMasukkan pilihan anda: ");
        scanf("%d", &pilihan); 																					
	if(pilihan==1){ 	   																					//Percabangan jika user menginput angka 1 dimana saldo harus lebih dari sama dengan Rp 100.000,- sehingga hasilnya ialah saldo di rekening user dikurang Rp 100.000,-
        if(saldo>=100000){			
		printf("\n\nNominal yang anda tarik adalah : Rp. 100000");
        printf("\n\nSisa saldo anda = Rp. %d", saldo=saldo-100000);														
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("\n\nWaktu Transaksi : %s ", ctime (&ambil_waktu));											//Menampilkan waktu pada layar 
        history_tariktunai=fopen("history_tariktunai.txt","a");												//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t                           TRANSAKSI TARIK TUNAI");
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\t   						Pemilik Rekening  : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\n\t\t   						Nomor Rekening    : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_tariktunai,"\n\n\t\t            			Nominal Penarikan : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\n\t\t            			Sisa Saldo        : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\t\t\t						Waktu Transaksi   : %s\n", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
    		fclose(history_tariktunai);     
	goto ulang1;}}																							//Memanggil fungsi tarik_tunai1
    
    	else if(saldo<100000);{ 																			//Kondisi lainnya jika saldo kurang dari Rp 100.000,- maka output teks akan ditampilkan
        printf("\n\nSaldo anda kurang!");
		}
		}
	else if(pilihan==2){ 	   																				//Percabangan jika user menginput angka 1 dimana saldo harus lebih dari sama dengan Rp 100.000,- sehingga hasilnya ialah saldo di rekening user dikurang Rp 100.000,-
        if(saldo>=200000){			
		printf("\n\nNominal anda tarik adalah : Rp. 200000");
        printf("\n\nSisa saldo anda = Rp. %d", saldo=saldo-200000);	
        	}
    	if(saldo<200000);{ 																					//Kondisi lainnya jika  saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        printf("Saldo anda kurang!");
        goto ulang1;}}}
			}
	time_t ambil_waktu;
    time(&ambil_waktu);
    printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));
	FILE *history_tariktunai;
        history_tariktunai=fopen("history_tariktunai.txt","a");												//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t                           TRANSAKSI TARIK TUNAI");
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\t   						Pemilik Rekening  : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\n\t\t   						Nomor Rekening    : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_tariktunai,"\n\n\t\t            			Nominal Penarikan : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\n\t\t            			Sisa Saldo        : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\t\t\t						Waktu Transaksi   : %s\n", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
    		fclose(history_tariktunai);    

	if (pilihan==3);{ 	   																					//Kondisi lainnya jika user menginput angka 3, maka output teks akan ditampilkan
		printf("\nMasukkan nominal yang akan anda tarik = "); 
        scanf("%d", &nominal);     																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(saldo>=nominal){    																				//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
      		printf("\n\nApakah anda akan menarik uang sebesar Rp. %d ?", nominal);
        	printf("\n\nMasukkan pilihan anda = ");
        	printf("\n\n1. Ya  2. Tidak\n\n");
			scanf("%d", &pilihan);{    																		//Simbol untuk menampilkan nilai angka atau bilangan desimal
      	if (pilihan==1){ 																					//Percabangan jika user menginput angka 1 maka hasilnya ialah saldo di rekening user dikurang nominal
            printf("\n\nTransaksi Berhasil");
            printf("\n\nSisa saldo Anda = Rp. %d", saldo=saldo-nominal); }
	FILE *history_tariktunai;
		time_t ambil_waktu;
    	time(&ambil_waktu);
   	 printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));
        history_tariktunai=fopen("history_tariktunai.txt","a");												//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t                           TRANSAKSI TARIK TUNAI");
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\t   						Pemilik Rekening  : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\n\t\t   						Nomor Rekening    : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_tariktunai,"\n\n\t\t            			Nominal Penarikan : %d\n", nominal);
    		fprintf(history_tariktunai,"\n\n\t\t            			Sisa Saldo        : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\t\t\t						Waktu Transaksi   : %s\n", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
    		fclose(history_tariktunai);  
        	printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));
           	(pilihan==2);{  																				//Kondisi lainnya user menginputkan angka 2 maka output teks akan dit
            printf("\n\nTransaksi Dibatalkan");}
        					}
						}
					}
        if (saldo<nominal);{ 																				//Kondisi lainnya jika user menginput saldo yang kurang dari nominal yang ditulis, maka output teks akan ditampilkan
        	printf("\nTransaksi Dibatalkan");
        	printf("\nSaldo anda kurang!");
        		goto ulang1;
    }

	tarik_tunai2 :{ 			
	system ("cls");  			
	system ("cls");  																						//Memanggil fungsi tarik_tunai2
	FILE *history_tariktunai;																				//Membuat file bukti transaksi tariktunai	
	if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Account Holder		  : %s\n", pemilik_rekening_1.nama);							//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number  : %s\n", pemilik_rekening_1.norek);							//Menampilkan string pada program
        printf ("========================================================\n");
    }else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Account Holder		  : %s\n",  pemilik_rekening_2.nama);							//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number  : %s\n",  pemilik_rekening_2.norek);							//Menampilkan string pada program								//Untuk membersihkan layar pada program
		printf ("===================================================\n");
        printf("Your balance is Rp. %d\n\n", saldo);														//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("============================================================================\n");																																				//Membersihkan layar terminal
        printf("\n\n====================== CHOOSE THE NOMINAL YOU DESIRE ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Enter another nominal");
        printf("\n\n5. Exit");
        printf("\n\n Enter your choice : ");
        scanf("%d", &pilihan); 																					
	if(pilihan==1){ 	   																					//Percabangan jika user menginput angka 1 dimana saldo harus lebih dari sama dengan Rp 100.000,- sehingga hasilnya ialah saldo di rekening user dikurang Rp 100.000,-
        if(saldo>=100000){			
		printf("\n\nThe nominal you withdraw is : Rp. 100000");
        printf("\n\nYour Balance is  = Rp. %d", saldo=saldo-100000);														
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("Transaction Time : %s ", ctime (&ambil_waktu));												//Menampilkan waktu pada layar 
        history_tariktunai=fopen("history_tariktunai.txt","a");												//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t                           CASH WITHDRAWAL HISTORY");
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\t   						Account Holder  	: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_tariktunai,"\n\n\t\t            			Withdrawal Nominal  : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\n\t\t            			Remaining Balance   : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\t\t\t						Transaction Time    : %s\n", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
    		fclose(history_tariktunai);     																//Memanggil fungsi tarik_tunai1
    
    }else(saldo<100000);{ 																				   	//Kondisi lainnya jika saldo kurang dari Rp 100.000,- maka output teks akan ditampilkan
        printf("\n\nYour balance is not enough!");
		}
		}
	else if(pilihan==2){	   																				//Kondisi lainnya jika user menginput angka 2 dimana saldo harus lebih dari sama dengan Rp 200.000,- sehingga hasil saldo di rekening user menjadi saldo dikurang Rp 200.000,-
      	if(saldo>=200000){
        printf("\n\nThe nominal you withdraw is : Rp. 200000");
        printf("\n\nYour Balance is = Rp. %d", saldo=saldo-200000);
        	}
    else if(saldo<200000){ 																					//Kondisi lainnya jika  saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        printf("Your balance is not enough!");
			}
	FILE *history_tariktunai;
        history_tariktunai=fopen("history_tariktunai.txt","a");												//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t                          CASH WITHDRAWAL HISTORY");
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\t   						Account Holder   	: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_tariktunai,"\n\n\t\t            			Withdrawal Nominal  : %d\n");
    		fprintf(history_tariktunai,"\n\n\t\t            			Remaining Balance   : %d", saldo);
    		fprintf(history_tariktunai,"\n\t\t\t						Transaction Time    : %s ", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
    		fclose(history_tariktunai);    
    
		if (pilihan==3){ 	   																				//Kondisi lainnya jika user menginput angka 3, maka output teks akan ditampilkan
		printf("\nThe nominal you will withdraw is = "); 
        scanf("%d", &nominal);     																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        	if(saldo>=nominal){    																			//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
      		printf("\n\nIs the nominal Rp. %d that you will withdraw correct?", nominal);
        	printf("\n\n1. Yes  2. No\n\n");
        	printf("\n\nEnter your choice = ");
		scanf("%d", &pilihan);{    																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
      	if (pilihan==1){ 																					//Percabangan jika user menginput angka 1 maka hasilnya ialah saldo di rekening user dikurang nominal
            printf("\n\nTransaction successful");
            printf("\n\nYour balance is = Rp. %d", saldo=saldo-nominal); }
	FILE *history_tariktunai;
        history_tariktunai=fopen("history_tariktunai.txt","a");												//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_tariktunai,"\n\t\t                          CASH WITHDRAWAL HISTORY");
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
       		fprintf(history_tariktunai,"\n\n\t\t   						Account Holder  	: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_tariktunai,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_tariktunai,"\n\n\t\t            			Withdrawal Nominal  : %d\n", &nominal);
    		fprintf(history_tariktunai,"\n\n\t\t            			Remaining Balance   : %d\n", saldo);
    		fprintf(history_tariktunai,"\n\t\t\t						Transaction Time    : %s\n", ctime (&ambil_waktu));
    		fprintf(history_tariktunai,"\n\t\t                       -----------------------------");
    		fclose(history_tariktunai);  
        	printf("\n\t\t\t\tTransaction time  : %s ", ctime (&ambil_waktu));
           	(pilihan==2);{  																				//Kondisi lainnya user menginputkan angka 2 maka output teks akan dit
            printf("\n\nTransaction failed");}
        					}
						}
					}
        	else (saldo<nominal);{ 																			//Kondisi lainnya jika user menginput saldo yang kurang dari nominal yang ditulis, maka output teks akan ditampilkan
        	printf("\nTransaction failed");
        	printf("\nYour balance is not enough!"); 

       			}
       		goto ulang2;}	
        
transfer1 :{ 				  																				//Memanggil fungsi transfer1 
FILE *history_transfer;			
system ("cls");  	
	if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_1.norek);								//Menampilkan string pada program
        printf ("========================================================\n");
    }else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Pemilik Rekening	: %s\n",  pemilik_rekening_2.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n",  pemilik_rekening_2.norek);							//Menampilkan string pada program								//Untuk membersihkan layar pada program
		printf ("===================================================\n");
        printf("Sisa saldo anda adalah Rp. %d\n\n", saldo);													//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("============================================================================\n");																	//Membuat file bukti transaksi tariktunai
		system("cls");  																					//Membersihkan layar terminal
        printf("\n\n====================== PILIH NOMINAL YANG INGIN ANDA TRANSFER ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Pilih jumlah nominal lain");
        printf("\n\n5. Keluar");
        printf("\n\nMasukkan pilihan anda: ");
        scanf("%d", &pilihan); 																					
		if(pilihan==1){ 	   																				//Percabangan jika user menginput angka 1 dimana saldo harus lebih dari sama dengan Rp 100.000,- sehingga hasilnya ialah saldo di rekening user dikurang Rp 100.000,-
		printf("\nMasukkan nomor rekening tujuan = "); 
		scanf("%d", &nominal);																				//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(saldo>=transfer){    																			//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
      	printf("\n\nApakah anda ingin mentransfer Rp 100.000 ke rekening %d?", transfer);
        printf("\n\nSisa saldo anda = Rp. %d", saldo=saldo-100000);														
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("Waktu Transaksi : %s ", ctime (&ambil_waktu));												//Menampilkan waktu pada layar 
        history_transfer=fopen("history_transfer.txt","a");													//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t                           TRANSAKSI TRANSFER");
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
       		fprintf(history_transfer,"\n\n\t\t   					Pemilik Rekening  : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\n\t\t   					Nomor Rekening    : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_transfer,"\n\n\t\t            			Nominal Penarikan : %d\n");
    		fprintf(history_transfer,"\n\n\t\t            			Sisa Saldo        : %d\n", saldo);
    		fprintf(history_transfer,"\n\t\t\t						Waktu Transaksi   : %s\n", ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
    		fclose(history_transfer);     
	goto ulang1;}}																						
    
    	else(saldo<100000);{ 																				//Kondisi lainnya jika saldo kurang dari Rp 100.000,- maka output teks akan ditampilkan
        printf("\nSaldo anda kurang!");
		}
		}
	else (pilihan==2);{	   																					//Kondisi lainnya jika user menginput angka 2 dimana saldo harus lebih dari sama dengan Rp 200.000,- sehingga hasil saldo di rekening user menjadi saldo dikurang Rp 200.000,-
		printf("\nMasukkan nomor rekening tujuan = "); 
		scanf("%d", &transfer);																				//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(saldo>=nominal){    																				//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
      	printf("\n\nApakah anda ingin mentransfer Rp 200.000 ke rekening %d?", transfer);
        printf("\n\nSisa saldo anda = Rp. %d", saldo=saldo-200000);	
        	}
    else if(saldo<200000){ 																					//Kondisi lainnya jika  saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        printf("Saldo anda kurang!");
        goto ulang1;}}			
			}
	FILE *history_transfer;
        history_transfer=fopen("history_transfer.txt","a");													//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_transfer,"\n\t\t                           TRANSAKSI TRANSFER");
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
       		fprintf(history_transfer,"\n\n\t\t   						Pemilik Rekening  : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\n\t\t   						Nomor Rekening    : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_transfer,"\n\n\t\t            				Nominal Penarikan : %d\n");
    		fprintf(history_transfer,"\n\n\t\t            				Sisa Saldo        : %d", saldo);
    		fprintf(history_transfer,"\n\t\t\t							Waktu Transaksi   : %s ", ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
    		fclose(history_transfer);    
    
		if(pilihan==3){ 	   																				//Kondisi lainnya jika user menginput angka 3, maka output teks akan ditampilkan
		printf("\nMasukkan nominal yang akan anda transfer = "); 
        scanf("%d", &transfer);     																		//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(saldo>=nominal){    																			//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
        printf("\nMasukkan nomor rekening tujuan = "); 
        scanf("%d", &nominal);   
      		printf("\n\nApakah anda ingin mentransfer %d ke rekening %d?", nominal, transfer);
        	printf("\n\n1. Ya  2. Tidak\n\n");
        	printf("\n\nMasukkan pilihan anda = ");
		scanf("%d", &pilihan);{    																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
      	if (pilihan==1){ 																					//Percabangan jika user menginput angka 1 maka hasilnya ialah saldo di rekening user dikurang nominal
            printf("\n\nTransaksi Berhasil");
            printf("\n\nSisa saldo Anda = Rp. %d", saldo=saldo-nominal); }
	FILE *history_transfer;
        history_transfer=fopen("history_transfer.txt","a");													//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t                             TRANSAKSI TRANSFER	");
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
       		fprintf(history_transfer,"\n\n\t\t   						Pemilik Rekening  : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\n\t\t   						Nomor Rekening    : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_transfer,"\n\n\t\t            				Nominal Penarikan : %d\n", &nominal);
    		fprintf(history_transfer,"\n\n\t\t            				Sisa Saldo        : %d",   saldo);
    		fprintf(history_transfer,"\n\t\t\t							Waktu Transaksi   : %s ",  ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
    		fclose(history_transfer);  
        	printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));
           	(pilihan==2);{  																				//Kondisi lainnya user menginputkan angka 2 maka output teks akan dit
            printf("\n\nTransaksi Dibatalkan");}
        					}
						}
					}
        	else (saldo<nominal);{ 																			//Kondisi lainnya jika user menginput saldo yang kurang dari nominal yang ditulis, maka output teks akan ditampilkan
        	printf("\nTransaksi Dibatalkan");
        	printf("\nSaldo anda kurang!");
       			}
       	time_t ambil_waktu;
        time(&ambil_waktu);
       	printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));
        goto ulang1;
    }

    transfer2 :{   	  																						//Memanggil fungsi transfer2
   	FILE *history_transfer;	
	system ("cls");  			
	if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Account Holder		 : %s\n", pemilik_rekening_1.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number : %s\n", pemilik_rekening_1.norek);							//Menampilkan string pada program
        printf ("========================================================\n");
    }else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Account Holder	 	 : %s\n",  pemilik_rekening_2.nama);							//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number : %s\n",  pemilik_rekening_2.norek);							//Menampilkan string pada program								//Untuk membersihkan layar pada program
		printf ("===================================================\n");
        printf("Your balance is Rp. %d\n\n", saldo);														//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("============================================================================\n");																	//Membuat file bukti transaksi tariktunai
		system("cls");  																					//Membersihkan layar terminal
        printf("\n\n====================== CHOOSE THE NOMINAL YOU WILL TRANSFER ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Enter another nominal");
        printf("\n\n5. Exit");
        printf("\n\nM: Enter your choice");
        scanf("%d", &pilihan); 																					
	if(pilihan==1){ 	   																					//Percabangan jika user menginput angka 1 dimana saldo harus lebih dari sama dengan Rp 100.000,- sehingga hasilnya ialah saldo di rekening user dikurang Rp 100.000,-
		printf("\nInput the bank account destination = "); 
        scanf("%d", &transfer);     																		//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(saldo>=nominal){    																				//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
      	printf("\n\nDo you want to transfer Rp 100.000 to %d?'s bank account?'", transfer);
      	printf("\n\n1. Yes  2. No\n\n");
        printf("\n\nYour balance is = Rp. %d", saldo=saldo-100000);														
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("Transaction Time : %s ", ctime (&ambil_waktu));												//Menampilkan waktu pada layar 
        history_transfer=fopen("history_transfer.txt","a");													//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t                            TRANSFER HISTORY");
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
       		fprintf(history_transfer,"\n\n\t\t   					Account Holder	  	: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\n\t\t   					Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_transfer,"\n\n\t\t            			Transfer Nominal	: %d\n", nominal);
    		fprintf(history_transfer,"\n\n\t\t            			Remaining Balance   : %d\n", saldo);
    		fprintf(history_transfer,"\n\t\t\t						Time Transaction    : %s\n", ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
    		fclose(history_transfer);     
	goto ulang1;}}																						
    
    else(saldo<100000);{ 																				   	//Kondisi lainnya jika saldo kurang dari Rp 100.000,- maka output teks akan ditampilkan
        printf("\n\nYour balance is not enough!");
		}
		}
	else if(pilihan==2){	   			
		printf("\nInput the bank account destination = "); 
        scanf("%d", &transfer);															//Kondisi lainnya jika user menginput angka 2 dimana saldo harus lebih dari sama dengan Rp 200.000,- sehingga hasil saldo di rekening user menjadi saldo dikurang Rp 200.000,-
      	if(saldo>=200000){
      	printf("\n\nDo you want to transfer Rp 200.000 to %d?'s bank account?'", transfer);
      	printf("\n\n1. Yes  2. No\n\n");
        printf("\n\nYour balance is = Rp. %d", saldo=saldo-200000);
        	}
    else if(saldo<200000){ 																					//Kondisi lainnya jika  saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        printf("Your balance is not enough!");
			}
	FILE *history_transfer;
        history_transfer=fopen("history_transfer.txt","a");													//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_transfer,"\n\t\t                           TRANSFER HISTORY");
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
       		fprintf(history_transfer,"\n\n\t\t   						Account Holder		: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_transfer,"\n\n\t\t            				Transfer Nominal 	: %d\n", nominal);
    		fprintf(history_transfer,"\n\n\t\t            				Remaining Balance   : %d", saldo);
    		fprintf(history_transfer,"\n\t\t\t							Time Transaction  	: %s ", ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
    		fclose(history_transfer);    
    
		if(pilihan==3){ 	   																			//Kondisi lainnya jika user menginput angka 3, maka output teks akan ditampilkan
		printf("\nEnter the nominal you will transfer = "); 
        scanf("%d", &nominal);     																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        	if(saldo>=nominal){    																			//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
         	printf("\n\nDo you want to transfer %d to %d?'s bank account?'", nominal);
        	printf("\n\n1. Yes  2. No\n\n");
        	printf("\n\nEnter your choice = ");
		scanf("%d", &pilihan);{    																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
      	if (pilihan==1){ 																					//Percabangan jika user menginput angka 1 maka hasilnya ialah saldo di rekening user dikurang nominal
            printf("\n\nTransaction successful");
            printf("\n\nYour balance is = Rp. %d", saldo=saldo-nominal); }
	FILE *history_transfer;
        history_transfer=fopen("history_transfer.txt","a");												//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_transfer,"\n\t\t                             TRANSFER HISTORY");
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
       		fprintf(history_transfer,"\n\n\t\t   						Account Holder	  	: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_transfer,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_transfer,"\n\n\t\t            				Transfer Nominal 	: %d\n", nominal);
    		fprintf(history_transfer,"\n\n\t\t            				Remaining Balance   : %d", saldo);
    		fprintf(history_transfer,"\n\t\t\t							Time Transaction    : %s ", ctime (&ambil_waktu));
    		fprintf(history_transfer,"\n\t\t                       -----------------------------");
    		fclose(history_transfer);  
        	printf("\n\t\t\t\tTransaction Time : %s ", ctime (&ambil_waktu));
           	(pilihan==2);{  																				//Kondisi lainnya user menginputkan angka 2 maka output teks akan dit
            printf("\n\nTransaction Failed");}
        					}
						}
					}
        	else (saldo<nominal);{ 																			//Kondisi lainnya jika user menginput saldo yang kurang dari nominal yang ditulis, maka output teks akan ditampilkan
        	printf("\nTransaksi Failed");
        	printf("\nYour balance is not enough!");
       			}
       	time_t ambil_waktu;
        time(&ambil_waktu);
       	printf("\n\t\t\t\tTransaction Time : %s ", ctime (&ambil_waktu));
        goto ulang2;
    }

    setor_tunai1 :{ 	  																			  		//Memanggil fungsi setor_tunai2
    FILE *history_setor;			
    system ("cls");  	
	if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Pemilik Rekening	: %s\n", pemilik_rekening_1.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n", pemilik_rekening_1.norek);								//Menampilkan string pada program
        printf ("========================================================\n");
    }else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Pemilik Rekening 	: %s\n",  pemilik_rekening_2.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Nomor Rekening 	: %s\n",  pemilik_rekening_2.norek);							//Menampilkan string pada program								//Untuk membersihkan layar pada program
		printf ("===================================================\n");
        printf("Sisa saldo anda adalah Rp. %d\n\n", saldo);													//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("============================================================================\n");																	//Membuat file bukti transaksi tariktunai
		system("cls");  																					//Membersihkan layar terminal
        printf("\n\n====================== PILIH NOMINAL YANG INGIN ANDA SETOR ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Pilih jumlah nominal lain");
        printf("\n\n5. Keluar");
        printf("\n\nMasukkan pilihan anda: ");
        scanf("%d", &pilihan); 																					
	if(pilihan==1){ 	   																					//Percabangan jika user menginput angka 1 dimana saldo harus lebih dari sama dengan Rp 100.000,- sehingga hasilnya ialah saldo di rekening user dikurang Rp 100.000,-
		printf("\nMasukkan nominal yang akan anda setor = "); 
        scanf("%d", &nominal);     																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(saldo>=nominal){    																				//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
        printf("\n\nSisa saldo anda = Rp. %d", saldo=saldo+100000);														
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("Waktu Transaksi : %s ", ctime (&ambil_waktu));												//Menampilkan waktu pada layar 
        history_setor=fopen("history_setor.txt","a");													//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_setor,"\n\t\t                           TRANSAKSI SETOR TUNAI");
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
       		fprintf(history_setor,"\n\n\t\t   					Pemilik Rekening  : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\t   					Nomor Rekening    : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_setor,"\n\n\t\t            			Nominal Penyetoran : %d\n", nominal);
    		fprintf(history_setor,"\n\n\t\t            			Sisa Saldo        : %d\n", saldo);
    		fprintf(history_setor,"\n\t\t\t						Waktu Transaksi   : %s\n", ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
    		fclose(history_setor);     
	goto ulang1;}}																						
    
    else(saldo<100000);{ 																				   	//Kondisi lainnya jika saldo kurang dari Rp 100.000,- maka output teks akan ditampilkan
        printf("\n\nSaldo anda kurang!");
		}
		}
	else if(pilihan==2){	   																				//Kondisi lainnya jika user menginput angka 2 dimana saldo harus lebih dari sama dengan Rp 200.000,- sehingga hasil saldo di rekening user menjadi saldo dikurang Rp 200.000,-
      	if(saldo>=200000){
        printf("\n\n1. Ya  2. Tidak\n\n");
        printf("\n\nSisa saldo anda = Rp. %d", saldo=saldo+200000);
        	}
    else if(saldo<200000){ 																					//Kondisi lainnya jika  saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        printf("Saldo anda kurang!");
			}
	FILE *history_setor;
        history_setor=fopen("history_setor.txt","a");														//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_setor,"\n\t\t                           TRANSAKSI SETOR TUNAI");
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
       		fprintf(history_setor,"\n\n\t\t   						Pemilik Rekening   : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\t   						Nomor Rekening     : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_setor,"\n\n\t\t            				Nominal Penyetoran : %d\n");
    		fprintf(history_setor,"\n\n\t\t            				Sisa Saldo         : %d", saldo);
    		fprintf(history_setor,"\n\t\t\t							Waktu Transaksi    : %s ", ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
    		fclose(history_setor);    
    
		if(pilihan==3){ 	   																				//Kondisi lainnya jika user menginput angka 3, maka output teks akan ditampilkan
		printf("\nMasukkan nominal yang akan anda transfer = "); 
        scanf("%d", &nominal);     																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        	if(saldo>=nominal){    																			//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
        	printf("\n\nMasukkan pilihan anda = ");
		scanf("%d", &pilihan);{    																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
      	if (pilihan==1){ 																					//Percabangan jika user menginput angka 1 maka hasilnya ialah saldo di rekening user dikurang nominal
            printf("\n\nTransaksi Berhasil");
            printf("\n\nSisa saldo Anda = Rp. %d", saldo=saldo+nominal); }
	FILE *history_setor;
        history_setor=fopen("history_setor.txt","a");														//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_setor,"\n\t\t                             TRANSAKSI SETOR TUNAI	");
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
       		fprintf(history_setor,"\n\n\t\t   						Pemilik Rekening   : %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\t   						Nomor Rekening     : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_setor,"\n\n\t\t            				Nominal Penyetoran : %d\n", &nominal);
    		fprintf(history_setor,"\n\n\t\t            				Sisa Saldo         : %d", saldo);
    		fprintf(history_setor,"\n\t\t\t							Waktu Transaksi    : %s ", ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
    		fclose(history_setor);  
        	printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));
           	(pilihan==2);{  																				//Kondisi lainnya user menginputkan angka 2 maka output teks akan dit
            printf("\n\nTransaksi Dibatalkan");}
        					}
						}
					}
        	else (saldo<nominal);{ 																			//Kondisi lainnya jika user menginput saldo yang kurang dari nominal yang ditulis, maka output teks akan ditampilkan
        	printf("\nTransaksi Dibatalkan");
        	printf("\nSaldo anda kurang!");
       			}
       	time_t ambil_waktu;
        time(&ambil_waktu);
       	printf("\n\t\t\t\tWaktu Transaksi : %s ", ctime (&ambil_waktu));
        goto ulang1;
    }

    setor_tunai2 : { 																						//Memanggil fungsi setor_tunai2
	FILE *history_setor;
	system ("cls");  				
	if (pin == 111000) {																					//Percabangan jika user menginput pin yang sesuai
        printf("\n\n");
        printf("=========================================================\n");
        printf("\t\t\t\t Account Holder		 : %s\n", pemilik_rekening_1.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number : %s\n", pemilik_rekening_1.norek);							//Menampilkan string pada program
        printf ("========================================================\n");
    }else if (pin == 111001) {																				//Kondisi jika user menginput pin yang sesuai
        printf("====================================================\n");
        printf("\t\t\t\t Account Holder	 : %s\n",  pemilik_rekening_2.nama);								//Menampilkan string pada program
        printf("\t\t\t\t Bank Account Number : %s\n",  pemilik_rekening_2.norek);							//Menampilkan string pada program								//Untuk membersihkan layar pada program
		printf ("===================================================\n");
        printf("Your balance is Rp. %d\n\n", saldo);														//Simbol untuk menampilkan nilai angka atau bilangan desimal
        printf ("============================================================================\n");																	//Membuat file bukti transaksi tariktunai
		system("cls");  																					//Membersihkan layar terminal
        printf("\n\n====================== CHOOSE THE NOMINAL YOU WILL TRANSFER ========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. Enter another nominal");
        printf("\n\n5. Exit");
        printf("\n\nM: Enter your choice");
        scanf("%d", &pilihan); 																					
	if(pilihan==1){ 	   																					//Percabangan jika user menginput angka 1 dimana saldo harus lebih dari sama dengan Rp 100.000,- sehingga hasilnya ialah saldo di rekening user dikurang Rp 100.000,-
		printf("\nInput the nominal you will transfer = "); 
        scanf("%d", &nominal);     																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        if(saldo>=nominal){    																				//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
        printf("\n\nYour balance is = Rp. %d", saldo=saldo-100000);														
        time_t ambil_waktu;																					//Menginput waktu pada program
        time(&ambil_waktu);
        printf("Transaction Time : %s ", ctime (&ambil_waktu));												//Menampilkan waktu pada layar 
        history_setor=fopen("history_setor.txt","a");													//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_setor,"\n\t\t                            TRANSFER HISTORY");
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
       		fprintf(history_setor,"\n\n\t\t   					Account Holder	  	: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\t   					Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_setor,"\n\n\t\t            			Transfer Nominal	: %d\n", nominal);
    		fprintf(history_setor,"\n\n\t\t            			Remaining Balance   : %d\n", saldo);
    		fprintf(history_setor,"\n\t\t\t						Time Transaction    : %s\n", ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
    		fclose(history_setor);     
	goto ulang1;}}																						
    
    else(saldo<100000);{ 																				   	//Kondisi lainnya jika saldo kurang dari Rp 100.000,- maka output teks akan ditampilkan
        printf("\n\nYour balance is not enough!");
		}
		}
	else if(pilihan==2){	   																				//Kondisi lainnya jika user menginput angka 2 dimana saldo harus lebih dari sama dengan Rp 200.000,- sehingga hasil saldo di rekening user menjadi saldo dikurang Rp 200.000,-
      	if(saldo>=200000){
      	printf("\n\nDo you want to transfer %d to %d?'s bank account?'", nominal);
      	printf("\n\n1. Yes  2. No\n\n");
        printf("\n\nYour balance is = Rp. %d", saldo=saldo-200000);
        	}
    else if(saldo<200000){ 																					//Kondisi lainnya jika  saldo kurang dari Rp 200.000,- maka output teks akan ditampilkan
        printf("Your balance is not enough!");
			}
	FILE *history_setor;
        history_setor=fopen("history_setor.txt","a");												//Menyimpan bukti data tariktunai pada file jenis txt
    		fprintf(history_setor,"\n\t\t                           TRANSFER HISTORY");
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
       		fprintf(history_setor,"\n\n\t\t   						Account Holder		: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_setor,"\n\n\t\t            				Transfer Nominal 	: %d\n", nominal);
    		fprintf(history_setor,"\n\n\t\t            				Remaining Balance   : %d", saldo);
    		fprintf(history_setor,"\n\t\t\t							Time Transaction  	: %s ", ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
    		fclose(history_setor);    
    
		if(pilihan==3){ 	   																			//Kondisi lainnya jika user menginput angka 3, maka output teks akan ditampilkan
		printf("\nEnter the nominal you will transfer = "); 
        scanf("%d", &nominal);     																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
        	if(saldo>=nominal){    																			//Percabangan jika saldo user lebihd dari sama dengan nominal yang diinput, maka output teks akan ditampilkan
         	printf("\n\nDo you want to transfer %d to %d?'s bank account?'", nominal);
        	printf("\n\n1. Yes  2. No\n\n");
        	printf("\n\nEnter your choice = ");
		scanf("%d", &pilihan);{    																			//Simbol untuk menampilkan nilai angka atau bilangan desimal
      	if (pilihan==1){ 																					//Percabangan jika user menginput angka 1 maka hasilnya ialah saldo di rekening user dikurang nominal
            printf("\n\nTransaction successful");
            printf("\n\nYour balance is = Rp. %d", saldo=saldo-nominal); }
	FILE *history_setor;
        history_setor=fopen("history_setor.txt","a");												//Menyimpan bukti data transfer pada file jenis txt
    		fprintf(history_setor,"\n\t\t                             TRANSFER HISTORY");
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
       		fprintf(history_setor,"\n\n\t\t   						Account Holder	  	: %s\n",  pemilik_rekening_1.nama, pemilik_rekening_2.nama);
       		fprintf(history_setor,"\n\n\t\t   						Bank Account Number : %s\n",  pemilik_rekening_1.norek, pemilik_rekening_2.norek); 
    		fprintf(history_setor,"\n\n\t\t            				Transfer Nominal 	: %d\n", nominal);
    		fprintf(history_setor,"\n\n\t\t            				Remaining Balance   : %d", saldo);
    		fprintf(history_setor,"\n\t\t\t							Time Transaction    : %s ", ctime (&ambil_waktu));
    		fprintf(history_setor,"\n\t\t                       -----------------------------");
    		fclose(history_setor);  
        	printf("\n\t\t\t\tTransaction Time : %s ", ctime (&ambil_waktu));
           	(pilihan==2);{  																				//Kondisi lainnya user menginputkan angka 2 maka output teks akan dit
            printf("\n\nTransaction Failed");}
        					}
						}
					}
        	else (saldo<nominal);{ 																			//Kondisi lainnya jika user menginput saldo yang kurang dari nominal yang ditulis, maka output teks akan ditampilkan
        	printf("\nTransaksi Failed");
        	printf("\nYour balance is not enough!");
       			}
       	time_t ambil_waktu;
        time(&ambil_waktu);
       	printf("\n\t\t\t\tTransaction Time : %s ", ctime (&ambil_waktu));
        goto ulang2;
    }

    ulang1 : {  																				//Memanggil fungsi ulang1
	    printf("\n\nApakah Anda Ingin Transaksi Lagi?");
        printf("\n\n1. Ya 2. Tidak = ");
        scanf("%d", &pilihan); 																	//Simbol untuk menampilkan nilai angka atau bilangan desimal
    system("cls"); 																				//Untuk membersihkan layar pada program
            if (pilihan==1) goto menu1; 														//Percabangan dimana jika user menginput angka 1 maka program langsung dibawa ke menu1
            if (pilihan==2) goto end; 															//Percabangan dimana jika user menginput angka 2 maka program langsung dibawa ke menu end
    }

    ulang2 :{ 																					//Memanggil fungsi ulang2
        printf("\n\nDo you want to make another transaction?");
        printf("\n\n1. Yes 2. No = ");
        scanf("%d", &pilihan);											 						//Simbol untuk menampilkan nilai angka atau bilangan desimal
    system("cls"); 																				//Untuk membersihkan layar pada program
            if (pilihan==1) goto menu2; 														//Percabangan dimana jika user menginput angka 1 maka program langsung dibawa ke menu2
            if (pilihan==2) goto end; 															//Percabangan dimana jika user menginput angka 2 maka program langsung dibawa ke menu end
    }

	end : {  																					//Memanggil fungsi end
	system ("cls"); 																			//Membersihkan layar terminal
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
        printf("            TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI\n\n\n");
        printf("                THANK YOU FOR USING THIS PROGRAM\n");
        printf ("**************************************************************************\n");
        printf ("**************************************************************************\n");
    }
	return ((0));
	

}}}}}
