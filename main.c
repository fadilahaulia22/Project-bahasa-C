#include <windows.h>
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "validasi.c"
#define phi 3.14
char us[100] = {},pw[100] = {};
int total = 0;
int a=0;
char klik;
char tanggal5[30][30];
char bayarr;
int buy,batas = 0;

/////////////////PROTOTYPE////////////////////
void regris();
void tampilan_depan();
void pilih();
void bingkai(int x,int y,int panjang,int lebar,int warnatext,int warnabg);
void lanjut();
void kembali();
void kode();
void info();
void cek();
void sewa();
void load();
void logos(int x,int y);
void logo(int x,int y);
void booking();
void tmp(int tem,int tempat);
void login(int tempat);
void bayar();
int kodeunik(int angka);

//========================================================================
//                                   ARRAY WARNA                         =
//========================================================================
enum color
{
   HITAM,       //0
   BIRU_GELAP,  //1
   HIJAU_GELAP, //2
   PINK_GELAP,  //3
   MERAH_GELAP, //4
   UNGU_GELAP,  //5
   KUNING_GELAP,//6
   PUTIH_GELAP, //7
   ABU_ABU,     //8
   BIRU,        //9
   HIJAU,       //10
   CYAN,        //11
   MERAH,       //12
   UNGU,        //13
   KUNING,      //14
   PUTIH        //15
};
//============================================================================
//                                 WARNA & POSISI                            =
//============================================================================
void kursor(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void setcolor(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}
//===================================================================
//                           BINGKAI                                =
//===================================================================
void bingkai(int x, int y, int panjang, int lebar , int warnatext, int warnabg){
    for(int i = 0; i <= panjang; i++){
        for(int j = 0; j <= lebar; j++){
            if(i == 0 || j == 0 || i == panjang || j == lebar){
                kursor(x+i,y+j);setcolor(warnatext,warnatext);printf("%c",219);
            }
            else{
                kursor(x+i,y+j);setcolor(warnabg,warnabg);printf(" ");
            }
        }
    }
}

void load()
{
    for(int a=1;a<=50;a++)
    {
        kursor(51,36);
        printf("Sabar ygy load...%d%%",a*2);Sleep(5);
    }
}

void paling_awal()
{
 bingkai(0,0,119,39,6,15);
 bingkai(1,1,118,38,14,6);
 
for(int a=1;a<=10;a++){
    setcolor(a,15);
    kursor(12,8);setcolor(a,6);printf("%c%c     %c%c %c%c%c%c%c%c%c %c%c       %c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c    %c%c%c %c%c%c%c%c%c%c     %c%c%c%c%c%c%c%c  %c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);                                      
    kursor(12,9);setcolor(a,6);printf("%c%c     %c%c %c%c      %c%c      %c%c      %c%c    %c%c %c%c%c%c  %c%c%c%c %c%c             %c%c    %c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);                              
    kursor(12,10);setcolor(a,6);printf("%c%c  %c  %c%c %c%c%c%c%c   %c%c      %c%c      %c%c    %c%c %c%c %c%c%c%c %c%c %c%c%c%c%c          %c%c    %c%c    %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);                                      
    kursor(12,11);setcolor(a,6);printf("%c%c %c%c%c %c%c %c%c      %c%c      %c%c      %c%c    %c%c %c%c  %c%c  %c%c %c%c             %c%c    %c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);                             
    kursor(12,12);setcolor(a,6);printf("%c%c%c %c%c%c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c  %c%c      %c%c %c%c%c%c%c%c%c        %c%c     %c%c%c%c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(5);                                                                                                                                                                                                                                                                                                                                                
    }   
    logo(27,15);
    logos(45,30);
    Sleep(1000);
    info();
}

void logo(int x,int y)
{
   y++; kursor(x,y);setcolor(10,0);printf("      .                  .-.    .  _    *   _   .                    ");
    y++;kursor(x,y);setcolor(10,0);printf("             *          /   \\     ((      _/ \\       *    .          ");
    y++;kursor(x,y);setcolor(10,0);printf("           _    .   .--'\\/\\_ \\     `     /    \\  *   ___             ");
    y++;kursor(x,y);setcolor(10,0);printf("                                                Go where you will... ");
    y++; kursor(x,y);setcolor(10,0);printf("       *  / \\_    _/ ^      \\/\\'__      /\\/\\  /\\  __/   \\ *          ");
     y++;kursor(x,y);setcolor(10,0);printf("        /    \\  /    .'   _/  /  \\  *' /    \\/  \\/ .`'\\_/\\   .       ");
     y++;kursor(x,y);setcolor(10,0);printf("   .   /\\/\\  /\\/ :' __  ^/  ^/    `--./.'  ^  `-.\\ _    _:\\ _        ");
     y++;kursor(x,y);setcolor(10,0);printf("      /    \\/  \\  _/  \\-' __/.' ^ _   \\_   .'\\   _/ \\ .  __/ \\       ");
     y++;kursor(x,y);setcolor(10,0);printf("    /\\  .-   `. \\/     \\ / -.   _/ \\ -. `_/   \\ /    `._/  ^  \\      ");
     y++;kursor(x,y);setcolor(10,0);printf("   /  `-.__ ^   / .-'.--'    . /    `--./ .-'  `-.  `-. `.  -  `.    ");  
}
void logos(int x,int y){
kursor(x,y);printf("              B A S E C A M P");
y++;kursor(x,y);printf("%c%c       %c%c%c%c%c  %c%c     %c%c %c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); 
y++;kursor(x,y);printf("%c%c      %c%c   %c%c %c%c     %c%c %c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219); 
y++;kursor(x,y);printf("%c%c      %c%c%c%c%c%c%c %c%c  %c  %c%c %c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); 
y++;kursor(x,y);printf("%c%c      %c%c   %c%c %c%c %c%c%c %c%c %c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
y++;kursor(x,y);printf("%c%c%c%c%c%c%c %c%c   %c%c  %c%c%c %c%c%c   %c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); 
y++;kursor(x,y);printf("                        3.265 Mdpl ");
}
 
void tampilan_depan()
{
    bingkai(0,0,119,39,6,14);
    logo(20,5);
    bingkai(10,21,25,4,6,15);
    bingkai(45,21,25,4,6,15);
    bingkai(80,21,25,4,6,15);
    bingkai(37,30,40,4,6,15);
    setcolor(0,15);
    kursor(12,23);printf("1. R E G I S T R A S I");
    kursor(50,23);printf("2. B O O K I N G");
    kursor(85,23);printf("3. L O G O U T");
    pilih();
}
void pilih()
{
    int plh = 0,jlh = 0;
    char pil;
    kursor(45,32);printf("PILIH : ");
    setcolor(0,14);
    plh = jlhbrg(jlh);
    switch(plh)
    {
        case 1:
            load();
            regris();
            break;
        case 2:
            load();
            booking();
            break;
        case 3:
            kursor(40,37);printf("ANDA AKAN SEGERA KELUAR DARI LAMAN INI:)");
            exit(0);
        break;
    }
}
void regris()
{ 
    int angka = 0;
    char namareg[40],iden[40],kewag[40],nohp[40],nik[40],usr[40],usia[40],pas[40] = {},alamat[40],tb[30],email[40] = {};
    int a=0;
    bingkai(0,0,119,39,6,14);
    bingkai(30,3,75,27,9,6);

    FILE *r;
	r =fopen("data.txt","a");
    setcolor(0,6);
    kursor(37,5);printf("  ___ ___ ___ ___ ___ _____ ___    _   ___ ___ ");
    kursor(37,6);printf(" | _ \\ __/ __|_ _/ __|_   _| _ \\  /_\\ / __|_ _|");
    kursor(37,7);printf(" |   / _| (_ || |\\__ \\ | | |   / / _ \\__ \\| | ");
    kursor(37,8);printf(" |_|_\\___\\___|___|___/ |_| |_|_\\/_/ \\_\\___/___|");
    kursor(37,13);printf("%c    Masukkan data\t %c",254,254);
    kursor(36,15);printf("%c Jenis Kewarganegaraan (WNA/WNI)\t:",254);
    kursor(36,16);printf("%c Jenis Identitas (KTP/SIM)\t\t:",254);
    kursor(36,17);printf("%c Nama Lengkap\t\t\t:",254);
    kursor(36,18);printf("%c No Telp    \t\t\t:",254);
    kursor(36,19);printf("%c NIK        \t\t        :",254);
    kursor(36,20);printf("%c E-mail     \t\t        :",254);
    kursor(36,21);printf("%c Alamat \t\t\t        :",254);
    kursor(36,22);printf("%c Usia \t\t                :",254);
    kursor(36,23);printf("%c Tinggi Badan       \t \t:",254);
    kursor(36,24);printf("%c Username\t\t\t        :",254);
    kursor(36,25);printf("%c Password\t\t   \t        :",254);
    kursor(98,34);printf("enter>>isi data..");
    kursor(24,34);setcolor(0,14);printf("Kembali <esc>");
        klik=getch();
        if(klik==27)
        {
            tampilan_depan();
        }
         kursor(24,34);setcolor(0,14);printf("                       ");
    
    kursor(74,15);printf("");
    setcolor(0,6);
    strcpy(kewag,valkewag(74,15,3));
    kursor(74,16);printf("");
    strcpy(iden,validen(74,16,3));
    kursor(74,17);printf("");
    strcpy(namareg,valnama(74,17,30));
    kursor(74,18);printf("");
    strcpy(nohp,valnotel(74,18));
    kursor(74,19);printf("");
    valnik(nik,74,19);
    kursor(74,20);printf("");
    valemail(email);
    kursor(74,21);printf("");
    val_alamat(alamat,36,21,16);
    kursor(74,22);printf("");
    val_umur(usia,56,22);
    kursor(74,23);printf("");
    val_tb(tb,74,23);
    kursor(74,24);printf("");
    user(us,74,24);
    kursor(74,25);printf("");
    strcpy(pw,valpas(pas));
    kodeunik(angka);
    fprintf(r,"%s;%s;%s;%s;%s;%s;%s;%s;%s\n",kewag,iden,namareg,nohp,nik,email,alamat,usia,tb);
    fclose(r);
    r = fopen("loginn.txt","a");
    fprintf(r,"%s;%s\n",us,pw);
    fclose(r);
    for(int i = 0; i <= 7; i++){
        if(i % 2 == 0){
            kursor(50,29);printf("Data anda sudah tersimpan!!");
            Sleep(500);
             
        }
        else{
            kursor(50,29);printf("                           ");
            Sleep(300);
        }
    }tampilan_depan();
    
}
void tampilan()
{
    setcolor(6,14);
    for(int a=15;a<106;a++)
    {
        kursor(a,3);printf("%c",220);
        kursor(a,37);printf("%c",220);
    }
    for(int a=4;a<8;a++)
    {
        kursor(15,a);printf("%c",220);
        kursor(105,a);printf("%c",220);
    }
    for(int a=33;a<37;a++)
    {
        kursor(15,a);printf("%c",220);
        kursor(105,a);printf("%c",220);
    }
    for(int a=6;a<15;a++)
    {
        kursor(a,8);printf("%c",220);
        kursor(a,32);printf("%c",220);
    }
    for (int a=106;a<116;a++)
    {
        kursor(a,8);printf("%c",220);
        kursor(a,32);printf("%c",220);
    }
    for(int a=8;a<32;a++)
    {
        kursor(6,a);printf("%c",220);
        kursor(115,a);printf("%c",220);
    }
}
void booking()
{ 
    bingkai(0,0,119,39,6,14);setcolor(0,14);
kursor(13,4);printf("     %c%c%c",219,219,187);
kursor(13,5);printf("     %c%c%c",219,219,186);
kursor(13,6);printf("     %c%c%c",219,219,186);
kursor(13,7);printf("%c%c   %c%c%c",219,219,219,219,186);
kursor(13,8);printf("%c%c%c%c%c%c%c%c",200,219,219,219,219,219,201,188);
kursor(13,9);printf(" %c%c%c%c%c%c ",200,205,205,205,205,188);
kursor(13,10);printf(" %c%c%c%c%c%c",219,219,219,219,219,187); 
kursor(13,11);printf("%c%c%c%c%c%c%c%c",219,219,201,205,205,219,219,187);
kursor(13,12);printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,186);
kursor(13,13);printf("%c%c%c%c%c%c%c%c",219,219,201,205,205,219,219,186);
kursor(13,14);printf("%c%c%c  %c%c%c",219,219,186,219,219,186);
kursor(13,15);printf("%c%c%c  %c%c%c",200,205,188,200,205,188);
kursor(13,16);printf("%c%c%c",219,219,187);    
kursor(13,17);printf("%c%c%c",219,219,186);     
kursor(13,18);printf("%c%c%c",219,219,186);     
kursor(13,19);printf("%c%c%c",219,219,186);     
kursor(13,20);printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,187);
kursor(13,21);printf("%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,188);
kursor(13,22);printf("%c%c%c   %c%c%c",219,219,187,219,219,187);
kursor(13,23);printf("%c%c%c   %c%c%c",219,219,186,219,219,186);
kursor(13,24);printf("%c%c%c   %c%c%c",219,219,186,219,219,186);
kursor(13,25);printf("%c%c%c   %c%c%c",219,219,186,219,219,186);
kursor(13,26);printf("%c%c%c%c%c%c%c%c%c",200,219,219,219,219,219,219,201,188);
kursor(13,27);printf(" %c%c%c%c%c%c%c ",200,205,205,205,205,205,188);
kursor(13,28);printf(" %c%c%c%c%c%c%c ",219,219,219,219,219,219,187);
kursor(13,29);printf("%c%c%c%c%c%c%c%c ",219,219,201,205,205,219,219,187);
kursor(13,30);printf("%c%c%c%c%c%c%c%c ",219,219,219,219,219,219,201,188);
kursor(13,31);printf("%c%c%c%c%c%c%c%c ",219,219,201,205,205,219,219,187);
kursor(13,32);printf("%c%c%c  %c%c%c ",219,219,186,219,219,186);
kursor(13,33);printf("%c%c%c  %c%c%c ",200,205,188,200,205,188);

    char input;
    int tempat = 1;
    bingkai(50,14,30,4,9,11);
    kursor(60,16);setcolor(0,11);printf("CEMORO KANDANG");
    bingkai(50,23,30,4,9,11);
    kursor(60,25);setcolor(0,11);printf("TAMBAK");
    bingkai(50,32,30,4,9,11);
    kursor(60,34);setcolor(0,11);printf("SINGOLANGU");
    bingkai(50,5,30,4,0,11);
    kursor(60,7);setcolor(0,11);printf("CEMORU SEWU");
    while((input = getch()) != 13){
        if(input == 80){
            if(tempat == 1){
                tempat = 2;
                bingkai(50,5,30,4,9,11);
                kursor(60,7);setcolor(0,11);printf("CEMORU SEWU");
                bingkai(50,14,30,4,0,11);
                kursor(60,16);setcolor(0,11);printf("CEMORO KANDANG");
            }
            else if(tempat == 2){
                tempat = 3;
                bingkai(50,14,30,4,9,11);
                kursor(60,16);setcolor(0,11);printf("CEMORO KANDANG");
                bingkai(50,23,30,4,0,11);
                kursor(60,25);setcolor(0,11);printf("TAMBAK");
            }
            else if(tempat == 3){
                tempat = 4;
                bingkai(50,23,30,4,9,11);
                kursor(60,25);setcolor(0,11);printf("TAMBAK");
                bingkai(50,32,30,4,0,11);
                kursor(60,34);setcolor(0,11);printf("SINGOLANGU");
            }
            else if(tempat == 4){
                tempat = 1;
                bingkai(50,32,30,4,9,11);
                kursor(60,34);setcolor(0,11);printf("SINGOLANGU");
                bingkai(50,5,30,4,0,11);
                kursor(60,7);setcolor(0,11);printf("CEMORU SEWU");
            }
        }
        else if(input == 72){
            if(tempat == 1){
                tempat = 4;
                bingkai(50,5,30,4,9,11);
                kursor(60,7);setcolor(0,11);printf("CEMORU SEWU");
                bingkai(50,32,30,4,0,11);
                kursor(60,34);setcolor(0,11);printf("SINGOLANGU");
            }
            else if(tempat == 4){
                tempat = 3;
                bingkai(50,32,30,4,9,11);
                kursor(60,34);setcolor(0,11);printf("SINGOLANGU");
                bingkai(50,23,30,4,0,11);
                kursor(60,25);setcolor(0,11);printf("TAMBAK");
            }
            else if(tempat == 3){
                tempat = 2;
                bingkai(50,23,30,4,9,11);
                kursor(60,25);setcolor(0,11);printf("TAMBAK");
                bingkai(50,14,30,4,0,11);
                kursor(60,16);setcolor(0,11);printf("CEMORO KANDANG");
            }
            else if(tempat == 2){
                tempat = 1;
                bingkai(50,14,30,4,9,11);
                kursor(60,16);setcolor(0,11);printf("CEMORO KANDANG");
                bingkai(50,5,30,4,0,11);
                kursor(60,7);setcolor(0,11);printf("CEMORU SEWU");
            }
        }
    }
    login(tempat);
}
void login(int tempat)
{
    char tamppas[100],tampus[100],pas[100];
    int masuk = 0,tem = 0,index = 0;
   int usr = 0,pwd = 0;
    bingkai(0,0,119,39,6,14);
    bingkai(35,10,60,4,9,11);
    bingkai(35,18,60,4,9,11);
    kursor(40,12);setcolor(0,11);printf("Username :");
    kursor(40,20);printf("Password :");
    kursor(50,12);printf("");
    user(us,50,12);
    kursor(50,20);printf("");
    strcpy(pw,valpas(pas));
    FILE* data;
    data = fopen("loginn.txt","r");
    while(fscanf(data,"%[^;];%[^\n]\n",&tampus,&tamppas) != EOF){
        if(strcmp(tampus,us) == 0 && strcmp(tamppas,pw) == 0){
            tem = index;
            masuk++;
        }
        if(strcmp(tampus,us) != 0 ){
            usr++;
        }
        if(strcmp(tamppas,pas) != 0){
            pwd++;
        }
        index++;
    }
    fclose(data);
    if(masuk != 0){
        tmp(tem,tempat);
    }

    else {
        if(batas < 3){
            for(int i = 1; i <= 4; i++){
                if(i % 2 == 0){
                    kursor(50,12);printf("AKUN TIDAK DITEMUKAN");
                    kursor(50,20);printf("AKUN TIDAK DITEMUKAN");
                    Sleep(400);
                }
                else{
                    kursor(50,12);printf("                                           ");
                    kursor(50,20);printf("                                           ");
                    Sleep(300);
                }
            }
            batas++;
            login(tempat);
        }
        else if(batas >= 3){
            kursor(50,12);printf("INPUT LEBIH DARI 3");
            kursor(50,20);printf("INPUT LEBIH DARI 3");    
            Sleep(1000);
            tampilan_depan();
        }
    }
}

void tmp(int tem,int tempat){
    char namareg[40][100],iden[40][100],kewag[40][100],nohp[40][100],nik[40][100],usia[40][100],alamat[40][100],tb[30][100],email[40][100];
    int index = 0,kode[100];
    int simaksi=20000;
    int tanggal = 0,bulan = 0;
    bingkai(0,0,120,40,12,11);
    setcolor(0,11);
    kursor(36,5);printf("%c%c%c%c%c%c%c  %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c",219,219,219,219,219,219,187,219,219,219,219,219,187,219,219,219,219,219,219,219,219,187,219,219,219,219,187); 
    kursor(36,6);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,201,205,205,219,219,187,219,219,201,205,205,219,219,187,200,205,205,219,219,201,205,205,180,219,219,201,205,205,219,219,187);
    kursor(36,7);printf("%c%c%c  %c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c%c%c%c%c%c",219,219,186,219,219,186,219,219,219,219,219,219,219,186,219,219,186,219,219,219,219,219,219,219,186);
    kursor(36,8);printf("%c%c%c  %c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c%c%c%c%c%c",219,219,186,219,219,186,219,219,210,205,205,219,219,186,219,219,186,219,219,201,205,105,219,219,186);
    kursor(36,9);printf("%c%c%c%c%c%c%c%c%c%c%c  %c%c%c   %c%c%c   %c%c%c  %c%c%c",219,219,219,219,219,219,201,180,219,219,186,219,219,186,219,219,186,219,219,186,219,219,186);
    kursor(36,10);printf("%c%c%c%c%c%c%c %c%c%c  %c%c%c   %c%c%c   %c%c%c  %c%c%c",200,205,205,205,205,205,180,200,205,180,200,205,180,200,205,180,200,205,180,200,205,180);
               
    FILE* data;
    data = fopen("data.txt","r");
    while(fscanf(data,"%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",
    &kewag[index],&iden[index],&namareg[index],&nohp[index],
    &nik[index],&email[index],&alamat[index],&usia[index],&tb[index]) != EOF)
    {
        index++;
    }
    fclose(data);
    index = 0;
    data = fopen("kodeunik.txt","r");
    while(fscanf(data,"%d\n",&kode[index]) != EOF){
        index++;
    }
    if(tempat == 1)
    {
        kursor(36,14);printf("%c Jalur pendakian via               : ",254);
        kursor(74,14);printf("CEMORO KANDANG");
    }
    else if(tempat==2)
    {
        kursor(36,14);printf("%c Jalur pendakian via               : ",254);
        kursor(74,14);printf("TAMBAK ");
    }
    else if(tempat==3)
    {
        kursor(36,14);printf("%c Jalur pendakian via               : ",254);
        kursor(74,14);printf("SINGOLANGU ");
    }
    else if(tempat==4)
    {
        kursor(36,14);printf("%c Jalur pendakian via               : ",254);
        kursor(74,14);printf(" CEMORO SEWU ");
    }
    kursor(36,15);printf("%c Jenis Kewarganegaraan (WNA/WNI)\t: %s",254,kewag[tem]);
    kursor(36,16);printf("%c Jenis Identitas (KTP/SIM)\t\t: %s",254,iden[tem]);
    kursor(36,17);printf("%c Nama Lengkap\t\t\t: %s",254,namareg[tem]);
    kursor(36,18);printf("%c No Telp    \t\t\t: %s",254,nohp[tem]);
    kursor(36,19);printf("%c NIK        \t\t        : %s",254,nik[tem]);
    kursor(36,20);printf("%c E-mail     \t\t        : %s@gmail.com",254,email[tem]);
    kursor(36,21);printf("%c Alamat \t\t\t        : %s",254,alamat[tem]);
    kursor(36,22);printf("%c Usia \t\t                : %s",254,usia[tem]);
    kursor(36,23);printf("%c Tinggi Badan       \t \t: %s",254,tb[tem]);
    kursor(76,24);printf("-");
    kursor(79,24);printf("2023");
    kursor(36,24);printf("%c Tanggal Naik \t\t\t: ",254);
    cektgl(tanggal,bulan);
    kursor(36,26);printf("%c Biaya Simaksi \t\t        :Rp 20000 ",254);
    kursor(36,28);printf("KODE PENDAKI : %d",kode[tem]);//sesuai urutan daftar
    fclose(data);
    kursor(28,35);setcolor(0,15);printf("Enter untuk sewa perkap");
    kursor(89,35);setcolor(0,15);printf("klik b untuk bayar");
    do{
        klik=getch();
        if(klik==13)
        {
            sewa();
        }
        else if(klik==98)
        {
            bayar();
        }
    }while(klik!=13 || klik!=98);

}
int kodeunik(int angka){
    int x;
    int tamp1[100];
    int index=0;
    int j = 0;
    int tamp[100];
    FILE* data;
    data = fopen("kodeunik.txt","r");
    while(fscanf(data,"%d\n",&tamp1[j]) != EOF){
        j++;
    }
    for(int i = 0; i <= j;){
        x = rand();
        if( i == j && x > 10000){
            tamp[index]= x;
            index++;        
        }
        else if(x > 10000){
            i++;
        }
    }
    data = fopen("kodeunik.txt","a");
    for(int i = 0; i <= index; i++){
        if(tamp1[i] != tamp[i]){
            fprintf(data,"%d\n",tamp[i]);
            angka = tamp[i];
            break;
        }
    }
    fclose(data);
    return angka;
}

void sewa()
{
    char input,tamp;
    bingkai(0,0,120,40,6,14);
    bingkai(20,7,70,15,4,15);
    kursor(30,2);setcolor(0,14);printf(" ___ _____ __ ____ _     ");
    kursor(30,3);printf("(_-</ -_) V  V / _` |    ");
    kursor(30,4);printf("/__/\\___|\\_/\\_/\\__,_|    ");
    kursor(30,8);setcolor(0,15);printf("=====================================================");
    kursor(30,9);printf("=                        ==                         =");
    kursor(30,10);printf("=====================================================");
    kursor(30,11);printf("=                        ==                         =");
    kursor(30,12);printf("=                        ==                         =");
    kursor(30,13);printf("=                        ==                         =");
    kursor(30,14);printf("=                        ==                         =");
    kursor(30,15);printf("=                        ==                         =");
    kursor(30,16);printf("=                        ==                         =");
    kursor(30,17);printf("=                        ==                         =");
    kursor(30,18);printf("=                        ==                         =");
    kursor(30,19);printf("=                        ==                         =");
    kursor(30,20);printf("=====================================================");
    kursor(35,9);setcolor(0,15);printf("    PERKAP  ");
    kursor(59,9);setcolor(0,15);printf("   HARGA   ");
    char sw[8][50]={"TENDA","SB","MATRAS","HEADLAMP","JAKET","KOMPOR","GAITER","HAMMOCK"};
    kursor(92,14);printf("K E T E R A N G A N");
    kursor(93,15);printf("%c Ketik 1-8 untuk input ",254);
    kursor(94,16);printf("pilihan");
    kursor(93,17);printf("%c Max sewa 3 barang/item",254);
    kursor(93,18);printf("%c Max sewa 3 hari",254);
    int harga1 = 0,harga2 = 0,harga3 = 0,harga4 = 0,p;
    for(;;){
        bingkai(30,24,72,10,6,8);
        for(int a=0;a<8;a++){
            kursor(35,11+a);setcolor(0,15);printf("%d.%s",a+1,sw[a]);
        }
        int harga[100]={15000,10000,7000,5000,20000,15000,5000,10000};
        int stok[100];
        int index = 0;
        for(int a=0;a<8;a++){
            kursor(66,11+a);printf("Rp %d",harga[a]);
        }
        kursor(35,28);setcolor(0,8);printf("Input Pilihan:");p = plhn();
        total = 0;
        int j,h,jumlh = 0,jumlah = 0;
        char j1[40],h1[40];
        kursor(35,30);printf("%c Jumlah %s \t: ",254,sw[p - 1]);
        FILE* data;
        data = fopen("update.txt","r");
        while(fscanf(data,"%d",&stok[index]) != EOF){
            index++;
        }
        fclose(data);
        jumlah = jlhbrg(jumlh);
        j = stok[p-1] - jumlah;
        if(j < 0){
            for(int i = 0; i <= 7; i++){
                if(i % 2 == 0){
                    kursor(50,30);printf("Stok Kurang");
                    Sleep(500);
                }
                else{
                    kursor(50,30);printf("             ");
                    Sleep(300);
                }
            }
            sewa();
        }
        else{
            data = fopen("update.txt","w");
            for(int i = 0; i < index; i++){
                if(p-1 == i){
                    stok[i] -=jumlah;
                }
                fprintf(data,"%d\n",stok[i]);
            }
            fclose(data);
            int jum = 0,lempar = 0; 
            kursor(35,31);printf("%c Lama Sewa(hari)    :  ",254);
            jum = jlhbrg(lempar);
            total=harga[p - 1] * jumlah * jum;
            kursor(35,32);printf("Total        : Rp. %d",total); 
            data = fopen("struk.txt","a");
            fprintf(data,"%s#%d#%d\n",sw[p-1],jumlah,total);
            fclose(data);
            kursor(65,38);setcolor(0,14);printf("<<-- [enter] PESAN LAGI>> <<[esc] UNTUK NEXT -->>");
            kursor(90,40);printf("");
            while((input = getch()) != 13){
                if(input == 27){
                    tamp = input;
                    break;
                }
            }
            if(tamp == 27){
                bayar();
                break;
            }
        }
    }
}
void bayar(){
    char nama[100],uang[40]={};
    int tagihan = 0,biaya = 0,ung = 0;
    int pilih = 0,pl = 0;
    tagihan=total +20000;
    int jlh[100],hrg[100],total = 0,index = 0;
    bingkai(0,0,120,40,6,14);
    FILE* data;
    data = fopen("struk.txt","r");
    while(fscanf(data,"%[^#]#%d#%d\n",&nama,&jlh[index],&hrg[index]) != EOF){
        total += hrg[index];
        index++;
    }
    fclose(data);
    setcolor(0,14);
    bingkai(13,3,35,15,6,8);
    kursor(20,5);setcolor(0,8);printf("1. OVO");
    kursor(20,6);printf("2. DANA");
    kursor(20,7);printf("3. GOPAY");
    kursor(15,12);printf("PILIH\t:");
    pilih = jlhbrg(pl);
    

    if(pilih == 1){
        biaya = 500;
    }
    else if(pilih == 2){
        biaya = 1000;
    }
    else if(pilih == 3){
        biaya = 3000;
    }
    total += biaya;
    for(;;){
        kursor(15,10);setcolor(0,8);printf("TOTAL");
        kursor(35,10);printf("Rp. %d",total);
        kursor(15,15);printf("INPUT UANG\t: ");
        valuang(uang);
        ung = atoi(uang);
        if(ung != total)
        {
            for(int i = 0; i <= 7; i++){
                if(i % 2 == 0){
                    kursor(17,17);printf("Uang Harus Pass");
                    Sleep(500);
                }
                else{
                    kursor(17,17);printf("                  ");
                    Sleep(300);
                }
            }
            kursor(32,15);printf("             ");
        }
        else{
            for(int i = 0; i <= 7; i++){
                if(i % 2 == 0){
                    kursor(17,17);printf("Pembayaran anda lunas!!");
                    Sleep(500);
                }
                else{
                    kursor(17,17);printf("                          ");
                    Sleep(300);
                }
            }
            break;
        }
    }
    tampilan_depan();
}

void info()
{                 
    bingkai(0,0,119,39,6,14);
    tampilan();
    setcolor(2,14);
    kursor(24,4);printf("        (                     (   ");
    kursor(24,5);printf("(       )\\ )          )       )\\  ");
    kursor(24,6);printf(")\\  (  (()/(  (    ( /( `  ) ((_) ");
    kursor(24,7);printf("((_) )\\ )/(_)) )\\   )(_))/(/(  _  ");
    kursor(24,8);printf("(_)_(_/(_) _|((_) ((_)_((_)_\\| |  ");
    kursor(24,9);printf("| | ' \\))  _/ _ \\ / _` | '_ \\) |  ");
    kursor(24,10);printf("|_|_||_||_| \\___/ \\__,_| .__/|_|  ");
    logos(60,6);
    int jumlah;
        setcolor(0,14);
        char info[] =      "website ini dibuat untuk mempermudah para     ";
            char info1[] = "pendaki dalam melakukan registrasi pendakian  ";
            char info2[] = "dengan cepat dan mudah sehingga.... mereka    ";
            char info3[] = "dapat membooking jalur sebelum kehabisan      ";
            char info4[] = "kuota,yang dimana  metode pembayarannya dengan ";
            char info5[] = " menggunakan Digital Payment dan tunjukkan bukti";
            char info1_1[] = "booking kepada petugas jangan lupa cek barang ";
            char info2_1[] = "bawaan,tetap jaga kebersihan dan       ";
            char info2_2[] = "pastikan bahwa anda telah membuat akun registrasi";
            char info2_3[] = "terlebih dahulu untuk booking jalur pendakian :)   ";   

        kursor(35,25);printf(" _  _   __   ____  ____  _  _     ___  __    __  _  _  ____"); 
        kursor(35,26);printf("/ )( \\ / _\\ (  _ \\(  _ \\( \\/ )   / __)(  )  (  )( \\/ )(  _ \\");
        kursor(35,27);printf(") __ (/    \\ ) __/ ) __/ )  /   ( (__ / (_/\\ )( / \\/ \\ ) _ (");
        kursor(35,28);printf("\\_)(_/\\_/\\_/(__)  (__)  (__/     \\___)\\____/(__)\\_)(_/(____/");
    strupr(info);strupr(info1);strupr(info2);strupr(info3);strupr(info4);strupr(info5);strupr(info1_1);strupr(info2_1);strupr(info2_2);strupr(info2_3);
    jumlah = strlen(info);
    for(int a=0;a<=jumlah;a++)
    {
        kursor(42+a,14);printf("%c",info[a]);Sleep(30);
    }
    jumlah = strlen(info1);
    for(int a=0;a<=jumlah;a++)
    {
        kursor(42+a,15);printf("%c",info1[a]);Sleep(30);
    }
    jumlah = strlen(info2);
        for(int a=0;a<=jumlah;a++){
        kursor(42+a,16);printf("%c",info2[a]);Sleep(30);
    }
    printf("\n");
    jumlah = strlen(info3);
    for(int a=0;a<=jumlah;a++)
    {
        kursor(42+a,17);printf("%c",info3[a]);Sleep(30);
    }
    jumlah = strlen(info4);
    for(int a=0;a<=jumlah;a++)
    {
        kursor(42+a,18);printf("%c",info4[a]);Sleep(30);
    }
    jumlah = strlen(info5);
    for(int a=0;a<=jumlah;a++){
        kursor(42+a,19);printf("%c",info5[a]);Sleep(30);
    }
    jumlah = strlen(info1_1);
    for(int a=0;a<jumlah;a++)
    {
        kursor(42+a,20);printf("%c",info1_1[a]);Sleep(30);
    }
    jumlah = strlen(info2_1);
    for(int a=0;a<=jumlah;a++)
    {
        kursor(42+a,21);printf("%c",info2_1[a]);Sleep(30);
    }
    jumlah = strlen(info2_2);
    for(int a=0;a<=jumlah;a++)
    {
        kursor(42+a,22);printf("%c",info2_2[a]);Sleep(30);
    }
    jumlah = strlen(info2_3);
    for(int a=0;a<=jumlah;a++)
    {
        kursor(42+a,23);printf("%c",info2_3[a]);Sleep(30);
    }
    kursor(89,30);printf("next>>enter>>");
    do{
        klik=getch();
        if(klik==13)
        {
            system("cls");
            tampilan_depan();
        }
    }while(klik!=13 );
    tampilan_depan();
}
void main()
{
    Sleep(1000);
     paling_awal();
    // tampilan_depan();
    // regris();
    // booking();
    // login();
    // bayar();
    // logos(4,7);
    //  sewa();
    getch();
}