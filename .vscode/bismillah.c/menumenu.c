#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define "tampilan.c"
void home(){
    bingkai();
    char menu[3][100]={"1.DAFTAR","2.LOGIN","3.KELUAR"};
    frame1(menu[0],10,19);
    frame1(menu[1],40,25);
    frame1(menu[2],100,25);
    int pilh=0;
    int a=0;
    kursor(91,32); pilh[a]=getch();
    while(pilh[a]!=13)
    {
        if(pilh[a]==8)
        {
            a--;
            if(a<0){
                a=0;
            }
            kursor(91+a,32);printf(" ");
        }
        else if(pilh[a]>='0'&&pilh[a]<='2')
        {
            prinsip("%c",pilh[a]);
            a++;
        }
    }
}
