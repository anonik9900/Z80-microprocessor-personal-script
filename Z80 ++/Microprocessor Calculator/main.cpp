#include <iostream>
#include <string>



//Z80 LANGUAGE CONVERTER

/*IF (Z80 = TRUE) > !PPORT 2 {
    COUT<<"CONNECTED"<<ENDL;
    PUT PPORT2 == OUTPPORT;
}
*/

using namespace std;

int main()
{


int scelta;
string scelta2;
int nand1;
int nand2;
int nor1;
int nor2;

int Memx89x00F2AF;
int AF0x00000ABFF;


int next_button;
int prev_button;
int address_button;
int del_button;

//Dichiarazione dei pulsanti

string a_button ="A";
string b_button ="B";
string c_button ="C";
string d_button ="D";
string e_button ="E";
string f_button ="F";
string g_button ="G";

int button_0 = 0;
int button_1 = 1;
int button_2 = 2;
int button_3 = 3;
int button_4 = 4;
int button_5 = 5;

int address1;
int address2;
int address3;
int address4;
int address5;
int address6;
int address7;

cout<<"Z80 IN C++ BY NICHOLAS IMPIERI "<<endl;
cout<<endl;
cout<<"----------------------------------"<<endl;
cout<<endl;

cout<<"Quanti indirizzi devi inserire ?"<<endl;
cin>>scelta;

if (scelta==1){
    goto indirizzo_1;
}
else if (scelta==2){
    goto indirizzo_2;
}


indirizzo_1:
cout<<"Inserisci l'indirizzo di memoria (es: 1800/01)"<<endl;
cin>>address1;
cout<<endl;
cout<<"Vuoi incrementare il valore di "<<address1<<"? (Y o N)"<<endl;
cin>>scelta2;
if (scelta2=="y","Y"){
        int incremento=address1+1;
        cout<<"La tua memoria adesso e' "<<incremento<<endl;
        cout<<endl;
        int valore1;
        cout<<"Inserisci i valori da inserire all'interno di "<<incremento<<endl;
        cin>>valore1;
        cout<<endl;
        cout<<"All'interno della memoria "<<incremento<<"e' presente il seguente valore: "<<valore1<<endl;
        cout<<endl;


}
else if (scelta2=="n","N"){
        int valore1;
    cout<<"Inserisci i valori da inserire all'interno di "<<address1<<endl;
    cin>>valore1;
    cout<<endl;
    cout<<"All'interno della memoria "<<address1<<"e' presente il seguente valore: "<<valore1<<endl;
    cout<<endl;

}

indirizzo_2:



// Dichiarazione delle allocazioni di memoria





//SIMPLE ADDRESS

/*CONVERTER
if (nand1 == nor1)
{
   syscall z80lang.h
        new.window(gui.exe)
    ARM;
}
*/

//ASSEMBLY DIPEND

/*

FOR ADDR:{
<string ="0.0.0.0": "nand1">,
<string ="0.0.0.0": "nand2">,
}

FOR DATA:
{
<string ="0.0": "nor1">,
<string ="0.0": "nor2">,
}

FOR PACKAGE > OUT{

if (%out !=nand1,!=nand2){
<output var = 0;>
cout<<"0.0.0.0"<<endl;
}

if (%out ==nand1,==nand2){
<output var2 = 1;>
switch (Memx89x00F2AF) {

case(1):
    cout<<nand1;
    cout<<endl;
    break;

case(2):
    cout<<nand2;
    cout<<endl;
    break;

    }
}

FOR ASSEMBLY WITHOUT SOFTWARE :
{
open:
    show(gui.exe) {
        local address = C:/Windows/%LocalData%/Apps/gui.exe
            set (Win user to Admin) // Uso lo script in Javascript per questa funzione
            if ($user kill /gui.exe) {
                break;
                    goto open;
                system("pause");

            }

    }

}


*/




    cout << "Z80 SCRIPT FOR PERSONAL LANGUAGE" << endl;
    cout<<endl;
    cout<<"INCOMPLETE"<<endl;
    return 0;
}
