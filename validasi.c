#include <string.h>
void kursor();

char *valkewag(int x, int y, int batas)
{
    static char kew[30];
    int a = 0;

    kursor(74, 15);
    kew[a] = getch();

    while (kew[a] != 13 || a < 3)
    {

        if (kew[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            kursor(74 + a, 15);
            printf("          ");
        }
        else
        {
            if (kew[0] == 'W' && a == 0 || kew[0] == 'W' && kew[1] == 'N' && a == 1 || kew[0] == 'W' && kew[1] == 'N' && kew[2] == 'I' && a == 2 || kew[0] == 'W' && kew[1] == 'N' && kew[2] == 'A' && a == 2)
            {

                kursor(74 + a, 15);
                printf("%c", kew[a]);
                a++;
            }
            else
            {
                if (kew[a] == '\0')
                {
                }
                else
                {
                    kursor(74 + a, 15);
                    printf("INVALID !");
                    Sleep(500);
                    kursor(74 + a, 15);
                    printf("          ");
                }
            }
        }

        if (a >= batas + 1)
        {
            a = 0;
            kursor(74, 15);
            printf("                     ");
            kursor(74, 15);
            printf("BATAS MAX 3 HURUF!");
            Sleep(700);
            kursor(74, 15);
            printf("                     ");
        }
        kursor(74 + a, 15);
        kew[a] = getch();

        if (kew[a] == 13 && a < 1)
        {
            kursor(74, 15);
            printf("HARAP ISI!");
            Sleep(700);
            kursor(74, 15);
            printf("                 ");
            Sleep(1000);
            a = 0;
            kew[a] = '\0';
        }

        if (kew[a] != '\0')
        {
            kursor(74 + a, 15);
            printf("%c", kew[a]);
        }
    }

    kew[a] = '\0';
    return kew;
}

char *validen(int x, int y, int batas)
{
    static char idn[30];
    int a = 0;

    kursor(74, 16);
    idn[a] = getch();

    while (idn[a] != 13 || a < 3)
    {

        if (idn[a] == 8)
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            kursor(74 + a, 16);
            printf("          ");
        }
        else
        {
            if (idn[0] == 'K' && a == 0 || idn[0] == 'S' && a == 0 || idn[0] == 'K' && idn[1] == 'T' && a == 1 || idn[0] == 'S' && idn[1] == 'I' && a == 1 || idn[0] == 'K' && idn[1] == 'T' && idn[2] == 'P' && a == 2 || idn[0] == 'S' && idn[1] == 'I' && idn[2] == 'M' && a == 2)
            {

                kursor(74 + a, 16);
                printf("%c", idn[a]);
                a++;
            }
            else
            {
                if (idn[a] == '\0')
                {
                }
                else
                {
                    kursor(74 + a, 16);
                    printf("INVALID !");
                    Sleep(500);
                    kursor(74 + a, 16);
                    printf("          ");
                }
            }
        }

        if (a >= batas + 1)
        {
            a = 0;
            kursor(74, 16);
            printf("                     ");
            kursor(74, 16);
            printf("BATAS MAX 3 HURUF!");
            Sleep(700);
            kursor(74, 16);
            printf("                     ");
        }
        kursor(74 + a, 16);
        idn[a] = getch();

        if (idn[a] == 13 && a < 1) // BATAS MIN 1 HURUF
        {
            kursor(74, 16);
            printf("HARAP ISI!");
            Sleep(700);
            kursor(74, 16);
            printf("                 ");
            Sleep(1000);
            a = 0;
            idn[a] = '\0';
        }

        if (idn[a] != '\0')
        {
            kursor(74 + a, 16);
            printf("%c", idn[a]);
        }
    }

    idn[a] = '\0';
    return idn;
}
char *valnama(int x, int y, int batas)
{
    static char nama[20];

    int a = 0;

    kursor(74,17); nama[a]=getch();
    while (nama[a] != 13 || a==0) //enter
    {

        if (nama[a] == 8) //backspace
        {
            a--;
            if (a < 0)
            {
                a = 0;
            }
            kursor(74 + a, 17);
            printf(" ");
        }
        else
        {
            if ((nama[a] >= 'A' && nama[a] <= 'Z') || nama[a] == ' ' || nama[a] == 39 || nama[a]=='-')
            {
                if(nama[0] == ' ' || nama[0] == 39 || nama[0] == '-' || (nama[a]==' ' && nama[a-1]==' ') || (nama[a]==39 && nama[a-1]==39) || (nama[a]=='-' && nama[a-1]=='-') ||
                  (nama[a] == '-' && nama[a-1]== 39) || (nama[a]==39 && nama[a-1]=='-') || 
                  (nama[a]==' ' && nama[a-2]==' ') || (nama[a]=='-' && nama[a-2]=='-') || (nama[a]==39 && nama[a-2]==39) ||
                  (nama[a]==nama[a-1] && nama[a]==nama[a-2] && nama[a-1]==nama[a-2]))
                {                                                                                       
                        kursor(74 + a, 17);
                        printf("Inputan Invalid ");
                        Sleep(500);
                        kursor(74 + a, 17);
                        printf("                          ");
                }
                else
                {
                    kursor(74 + a, 17);
                    printf("%c", nama[a]);
                    a++;
                }
                
            }
            else
            {
                if (nama[a] == '\0')
                {
                    
                }
                else
                {
                    kursor(74 + a, 17);
                    printf("Inputan Invalid ");
                    Sleep(500);
                    kursor(74 + a, 17);
                    printf("                        ");
                }
            }
        }

        if (a >= batas + 1)
        {
            a = 0;
            kursor(74,17);
            printf("                          "); 
            kursor(74,17);
            printf("Maksimal 30 karakter");
            Sleep(1000);
            kursor(74,17);
            printf("                            ");
        }
        kursor(74 + a, 17);
        nama[a] = getch();

        if (nama[a] == 13)
        {
            if(a<2){
                kursor(74,17);
                printf("Minimal 2 karakter");
                Sleep(700);
                kursor(74,17);
                printf("                   ");
                Sleep(1000);
                a = 0;
                nama[a] = '\0';
            }
        }

        if (nama[a] != '\0')
        {
            kursor(74 + a, 17);
            printf("%c", nama[a]);
        }
    }

    nama[a] = '\0';
    return nama;
}
char *valnik(char *nik, int x, int y)
{
    char inputan1;
    char data1[40] = {};
    int index = 0;

    while ((inputan1 = getch()) != 13 || index < 16)
    {
        if (inputan1 >= '0' && inputan1 <= '9' && index < 16)
        {
            kursor(x + index, y);
            printf("%c", inputan1);
            data1[index] = inputan1;
            index++;
        }
        else if (inputan1 == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = '\0';
        }
    }

    return strcpy(nik, data1);
}

char* valemail(char* email)
{
    char inputan;
    char data1[30] = {};
    char data2[30] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 7 || data1[index - 1] == ' ' || data1[index - 1] == '_' || data1[index - 1] == 39)
    {
        if (index < 16 && (inputan >= 'a' && inputan <= 'z' || inputan == ' ' && index != 0 && data1[index - 1] != ' ' || inputan == 39 && index > 2 && data1[index - 1] != 39 || inputan == '_' && index > 2 && data1[index - 1] != '_' || inputan >= '0' && inputan <= '9' && index > 3))
        {
            printf("%c", inputan);
            data1[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
    }
    for (int a = 0; a < index; a++)
    {
        data2[a] = data1[a];
    }
    // strupr(data2);
    strcpy(email, data2);
}
char *val_alamat(char *alamat, int x, int y, int batas)
{
    char inputan;
    char data1[50] = {};
    char data2[50] = {};
    int index = 0;
    int spasi = 4;
    // printf("Input alamat\t:");
    while ((inputan = getch()) != 13 || index < 3 || data1[index - 1] == ' ' || data1[index - 1] == '-' || data1[index - 1] == '\'')
    {
        if (index < 25 && (inputan >= 97 && inputan <= 122 || inputan >= 65 && inputan <= 90 || inputan >= '0' && inputan <= '9' && index > 2 ||
        inputan == ' ' && index != 0 && data1[index - 1] != ' ' && index != 0 && data1[index - 1] != '\'' && data1[index - 1] != '-' && data1[index - 1] != ' '))
        {
            printf("%c", inputan);
            data1[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
    }
    for (int a = 0; a < index; a++)
    {
        data2[a] = data1[a];
    }
    //ini tadi nggak ada
    strcpy(alamat, data1);
    return alamat;
}
char *user(char *us, int x, int y)
{
    char input;
    char tamp[100] = {};
    int index = 0;
    // printf("Masuk");
    while ((input = getch()) != 13 || index < 2)
    {
        if (index < 20 && (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z'))
        {
            kursor(x + index, y);
            printf("%c", input);
            tamp[index] = input;
            index++;
        }
        else if (input == 8 && index != 0)
        {
            index--;
            printf("\b \b");
            tamp[index] = '\0';
        }
    }
     return strcpy(us, tamp);
    //  return tamp;
}
char *valpas(char *pas)
{
    char inputan1;
    char input1[30] = {};
    char input2[30] = {};
    int index = 0;
    while ((inputan1 = getch()) != 13 || index < 5)
    {
        if (index <= 5 && ((inputan1 >= '0' && inputan1 <= '9')))
        {
            input1[index] = inputan1;
            printf(".");
            index+=1;
        }
        else if (inputan1 == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            input1[index] = '\0';
        }
    }
    for (int a = 0; a < index; a++)
    {
        input2[a] = input1[a];
    }
    strcpy(pas, input2);
    return pas;
}
char *val_umur(char *umur,int x, int y)
{
    char inputan1;
    char data1[30] = {};
    int index = 0;
    // printf("Masukan umur: ");
    while ((inputan1 = getch()) != 13 || index < 2)
    {
        if (inputan1 >= '0' && inputan1 <= '9' && index < 2)
        {
            if (index == 0 && inputan1 >= '1' && inputan1 <= '6' || index == 1 && inputan1 >= '0' && inputan1 <= '9')
            {
                printf("%c", inputan1);
                data1[index] = inputan1;
                index++;
            }
        }
        else if (inputan1 == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = '\0';
        }
    }
    strcpy(umur,data1);
    return umur;
}
char *val_tb(char *tb, int x, int y)
{
    char inputan1;
    char data1[30] = {};
    int index = 0;
    while ((inputan1 = getch()) != 13 || index < 3)
    {
        if (inputan1 >= '0' && inputan1 <= '9' && index < 3)
        {
            if ((index == 0 && inputan1 <= '1') || (index == 1 && inputan1 >= '0' && inputan1 <= '9') || (index == 2 && inputan1 >= '0' && inputan1 <= '9' && data1[0] >= '1' && data1[0] <= '2'))
            {
                printf("%c", inputan1);
                data1[index] = inputan1;
                index++;
            }
        }
        else if (inputan1 == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = '\0';
        }
    }
    //ini tadi nggak ada
    strcpy(tb,data1);
     return tb;
}

char *valuang(char *uang)
{
    char d;
    char input1[100];
    char input2[100];
    int index = 0;
    while ((d = getch()) != 13 || index < 3)
    {
        if (index < 8  && (d >= '0' && d <= '9' && index > 0 || d >= '1' && d <= '9' && index == 0))
        {
            printf("%c", d);
            input1[index] = d;
            index++;
        }
        else if (d == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
        }
    }
    for (int s = 0; s < index; s++)
    {
        input2[s] = input1[s];
    }
    input2[index] = '\0';
    strcpy(uang, input2);
    return uang;
}
char *valnotel(int x, int y)
{
    char input;
    static char tamp[100] = {};
    int index = 0, sama = 0;
    while ((input = getch()) != 13 || index < 12)
    {
        if (index < 13 && (input == '0' && index == 0 || input == '8' && index == 1 && tamp[0] == '0' || input >= '1' && input <= '9' && input != '4' && input != '6' && index == 2 || input >= '1' && input <= '9' && input != '4' && input != '6' && tamp[2] == '1' && index == 3 || input >= '1' && input <= '2' && tamp[2] == '2' && index == 3 || input >= '2' && input <= '3' && tamp[2] == '3' && index == 3 || input >= '2' && input <= '3' && tamp[2] == '5' && index == 3 || input >= '6' && input <= '7' && tamp[2] == '5' && index == 3 || input == '9' && tamp[2] == '5' && index == 3 || input >= '7' && input <= '8' && tamp[2] == '7' && index == 3 || input >= '1' && input <= '9' && tamp[2] == '8' && index == 3 || input >= '5' && input <= '9' && tamp[2] == '9' && index == 3 || input >= '0' && input <= '9' && index > 3))
        {
            kursor(x + index, y);
            printf("%c", input);
            tamp[index] = input;
            index++;
        }
        else if (input == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return tamp;
}
int cektgl(int tanggal,int bulan){
    char inp;
    char tamptgl[100]={}, tampbln[100]={}, tampthn[100]={};
    int indextgl=0, benar = 0, indexbln = 0,jumlah = 0,tamp = 0;

    struct tm *waktu;
    int tgl, bln;
    int laptop;

    time_t validasi_waktu;
    validasi_waktu = time(NULL);
    waktu = localtime(&validasi_waktu);

    while((inp=getch()) != 13 || indextgl == 0 ){
        if(indextgl < 2 && ((inp >= '1' && inp <= '9') && indextgl == 0 || (inp >= '0' && inp <= '9') && (tamptgl[0] >= '1' && tamptgl[0] <= '2') ||
        (inp == '0' || inp == '1') && tamptgl[0] == '3')){
            kursor(74+indextgl,24);printf("%c", inp);
            tamptgl[indextgl]=inp;
            indextgl++;
        }else if(inp == 8 && indextgl != 0){
            printf("\b \b");
            indextgl--;
            tamptgl[indextgl]='0';    
        }
    }
    while((inp=getch()) != 13 || indexbln == 0){
        if(indexbln < 2 && ((inp >= '1' && inp <= '9') && indexbln == 0 || (inp >= '0' && inp <= '2') && tampbln[0] == '1'))
        {
            kursor(77+indexbln,24);printf("%c", inp);
            tampbln[indexbln]=inp;
            indexbln++;
        }else if( inp == 8 && indexbln != 0){
            printf("\b \b");
            indexbln--;
            tampbln[indexbln]=inp;
        }
    }

    bulan=atoi(tampbln);
    tanggal=atoi(tamptgl);

    if(bulan%2==1 && bulan != 2){
        if(bulan > 7){
            if(tanggal > 30 || bulan < waktu->tm_mon + 1 || tanggal < waktu->tm_mday && bulan == waktu->tm_mon + 1 ){
            for(int i = 0; i <= 7; i++){
                if(i %2 == 0){
                kursor(21,24);printf("Inputan Invalid !");Sleep(300);
                }
                else{
                kursor(21,24);printf("                     ");Sleep(300);
                }
                }
                benar++;
                tamp = benar++;
                cektgl(tanggal,bulan);
            }
        }else if(bulan < 8){
            if(bulan < waktu->tm_mon + 1 || tanggal < waktu->tm_mday && bulan == waktu->tm_mon + 1 ){
            for(int i = 0; i <= 7; i++){
                if(i %2 == 0){
                kursor(21,24);printf("Inputan Invalid !");Sleep(300);
                }
                else{
                kursor(21,24);printf("                     ");Sleep(300);
                }
            }
            benar++;
            tamp = benar++;
            cektgl(tanggal,bulan);
            }
        }
    }else if(bulan%2==0 && bulan != 2){
        if(bulan < 7){
            if(tanggal > 30 || bulan < waktu->tm_mon + 1 || tanggal < waktu->tm_mday && bulan == waktu->tm_mon + 1 ){
            for(int i = 0; i <= 7; i++){
                if(i %2 == 0){
                kursor(21,24);printf("Inputan Invalid !");Sleep(300);
                }
                else{
                kursor(21,24);printf("                     ");Sleep(300);
                }
            }
            cektgl(tanggal,bulan);
            benar++;
            tamp = benar;
            }
        }else if(bulan > 7){
            if(bulan < waktu->tm_mon + 1 || tanggal < waktu->tm_mday && bulan == waktu->tm_mon + 1 ){
            for(int i = 0; i <= 7; i++){
                if(i %2 == 0){
                        kursor(21,24);printf("Inputan Invalid !");Sleep(300);
                    }
                    else{
                        kursor(21,24);printf("                     ");Sleep(300);
                    }
                }
                cektgl(tanggal,bulan);
                benar++;
                tamp = benar++;
            }
        }
    }else if(bulan==2){
        if(tanggal > 29 || bulan < waktu->tm_mon + 1 || tanggal < waktu->tm_mday && bulan == waktu->tm_mon + 1 ){
        for(int i = 0; i <= 7; i++){
            if(i %2 == 0){
            kursor(21,24);printf("Inputan Invalid !");Sleep(300);
            }
            else{
            kursor(21,24);printf("                     ");Sleep(300);
            }
            }            
        benar++;
        tamp = benar;
        cektgl(tanggal,bulan);
        }
    }
    jumlah = tanggal + 3;
    if(jumlah < 30){
        tanggal += 3;
    }
    else{
        jumlah -= 30;
        tanggal = 0;
        tanggal += jumlah;
        bulan++;
    }
    kursor(36,25);printf("%c Tanggal Turun                     : %d - %d - 2023",254,tanggal,bulan);
}
int jlhbrg(int jumlh){
    char input,tamp[100] = {};
    int index = 0;
    while((input = getch()) != 13 || index < 1){
        if(index < 1 && (input >= '1' && input <= '3')){
            printf("%c",input);
            tamp[index] = input;
            index++;
        }
        else if(input == 8 && index != 0){
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    jumlh = atoi(tamp);
    return jumlh;
}
int plhn(){
    int tmp = 0,index = 0;
    char input,tamp[100] = {};
    while((input = getch()) != 13 || index < 1){
        if(index < 1 && (input >= '1' && input <= '8')){
            printf("%c",input);
            tamp[index] = input;
            index++;
        }
        else if(input == 8 && index != 0){
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    tmp = atoi(tamp);
    return tmp;
}