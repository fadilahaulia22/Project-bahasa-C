#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define outputHandle GetStdHandle(STD_OUTPUT_HANDLE)
enum color
{
    HITAM,//0
    BIRU_GELAP,//1
    HIJAU_GELAP,//2
    PINK_GELAP,//3
    MERAH_GELAP,//4
    UNGU_GELAP,//5
    KUNING_GELAP,//6
    PUTIH_GELAP,//7
    ABU_ABU,//8
    BIRU,//9
    HIJAU,//10
    CYAN,//11
    MERAH,//12
    UNGU,//13
    KUNING,//14
    PUTIH,//15
};
void kursor(int x,int y)
{
    COORD posisi=(x,y);
    SetConsoleCursorPosition(handle,posisi);
}
void set_color(int text,int baground)
{
    SetConsoleTextAttribute(handle,baground*16+text);
}
void bingkai()
{
    system("color 06");
    for(int a=0;a<=169;a++){
        kursor(a,0),printf("%c",219);
    }
    for(int a=0;a<=169;a++){
        kursor(a,38);printf("%c",219);
    }
} 
void hapus(){
    for(int a=1;a<37;a++){
        kursor(1,a);printf("                                ");
    }
}
void loading(){
    for(int a=0;a<=50;a++){
        kursor(79,35);printf("Sabar ygy load %d%%",a*2); Sleep(100);
    }
    hapus();
}   
void frame1(char menu[],int x,int y)
{
    for (int a=1;a<=25;a++){
        for(int b=1;a<=5;b++)
        {
            if(a=1|| a==25||b=1||b==5)
            {
                kursor(x+a,y+b);printf("%c",219);
            }else
            {
                kursor(x+a,y+b);printf(" ");
            }
        }
    }
    kursor(x+8,y+3);printf("%s",menu);
}
void star(){
    bingkai();
    set_color(6,0);
    kursor(71,18);printf("E-R E G I S T R A S I   C L I M B");
    kursor(74,30);set_color(6,0);printf("by FADILAH AULIA MUTHMAINAH >< ");
    loading();
    home();
}
