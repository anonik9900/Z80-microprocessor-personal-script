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



int nand1;
int nand2;
int nor1;
int nor2;

int Memx89x00F2AF;
int AF0x00000ABFF;

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
