#include <iostream>
#include "HeaderFunciones.h"
#include "rlutil.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


#define ARRIBA       72
#define IZQUIERDA    75
#define DERECHA      77
#define ABAJO        80
#define ESC          27

using namespace rlutil;
using namespace std;

int salir=1;


void carta_central_izquierda (){
///lineas margenes
//carta central izquierda
gotoxy(59,7); printf("%c", 218);
gotoxy(67,7); printf("%c", 191);
gotoxy(59,16); printf("%c", 192);
gotoxy(67,16); printf("%c", 217);
for (int i = 60; i<67; i++){
gotoxy(i,7); printf("%c", 196);
gotoxy(i,16); printf("%c", 196);
}
for (int i = 8; i<16; i++){
gotoxy(59,i); printf("%c", 179);
gotoxy(67,i); printf("%c", 179);
}
}

void carta_entral_derecha (){

//carta central izquierda
gotoxy(44,7); printf("%c", 218);
gotoxy(52,7); printf("%c", 191);
gotoxy(44,16); printf("%c", 192);
gotoxy(52,16); printf("%c", 217);
for (int i = 45; i<52; i++){
gotoxy(i,7); printf("%c", 196);
gotoxy(i,16); printf("%c", 196);
}
for (int i = 8; i<16; i++){
gotoxy(44,i); printf("%c", 179);
gotoxy(52,i); printf("%c", 179);
}
}
void carta4 (){
//carta4
gotoxy(33,18); printf("%c", 218);
gotoxy(39,18); printf("%c", 191);
gotoxy(33,24); printf("%c", 192);
gotoxy(39,24); printf("%c", 217);
for (int i = 34; i<39; i++){
gotoxy(i,18); printf("%c", 196);
gotoxy(i,24); printf("%c", 196);
}
for (int i = 19; i<24; i++){
gotoxy(33,i); printf("%c", 179);
gotoxy(39,i); printf("%c", 179);
}
}



void carta3 (){
gotoxy(23,18); printf("%c", 218);
gotoxy(29,18); printf("%c", 191);
gotoxy(23,24); printf("%c", 192);
gotoxy(29,24); printf("%c", 217);
for (int i = 24; i<29; i++){
gotoxy(i,18); printf("%c", 196);
gotoxy(i,24); printf("%c", 196);
}
for (int i = 19; i<24; i++){
gotoxy(23,i); printf("%c", 179);
gotoxy(29,i); printf("%c", 179);
}
}
void carta2 (){
gotoxy(13,18); printf("%c", 218);
gotoxy(19,18); printf("%c", 191);
gotoxy(13,24); printf("%c", 192);
gotoxy(19,24); printf("%c", 217);
for (int i = 14; i<19; i++){
gotoxy(i,18); printf("%c", 196);
gotoxy(i,24); printf("%c", 196);
}
for (int i = 19; i<24; i++){
gotoxy(13,i); printf("%c", 179);
gotoxy(19,i); printf("%c", 179);
}
}

void carta1 (){
gotoxy(3,18); printf("%c", 218);
gotoxy(9,18); printf("%c", 191);
gotoxy(3,24); printf("%c", 192);
gotoxy(9,24); printf("%c", 217);
for (int i = 4; i<9; i++){
gotoxy(i,18); printf("%c", 196);
gotoxy(i,24); printf("%c", 196);
}
for (int i = 19; i<24; i++){
gotoxy(3,i); printf("%c", 179);
gotoxy(9,i); printf("%c", 179);
}











}





void menu_principal(){
    void Creditos();
    int opciones;
    void Nombre();
    void Juego();
 do {
cls();
setlocale(LC_ALL, "Spanish");
cout<<"CARD-JITSU++"<<endl;
cout<<"---------------------"<<endl;
cout<<"1 - JUGAR"<<endl;
cout<<"2 - ESTADÍSTICAS"<<endl;
cout<<"3 - CRÉDITOS"<<endl;
cout<<"4 - REGLAS DEL JUEGO"<<endl;
cout<<"---------------------"<<endl;
cout<<"0 - SALIR"<<endl;

cin>>opciones;
switch (opciones){
    case 1:
        Nombre();

    break;
    case 2:
        cls();
        Juego();
    break;
    case 3:
        Creditos();

    break;
    case 4:
    break;
    case 0:
        salir=0;

    break;

    default:
    break;



}

 }while (salir!=0);


}
void Creditos(){
setlocale(LC_ALL, "Spanish");
cls ();
int volver;
do {
cout<<"CARD-JITSU++"<<endl;
cout<<"---------------------"<<endl;
cout<<"    CRÉDITOS"<<endl;
cout<<"---------------------"<<endl;
cout<<"Emmanuel Dearmas"<<endl;
cout<<"Lautaro Perez"<<endl;
cout<<"Facundo"<<endl;
cout<<"Gena Sacomondi"<<endl;
cout<<"otro compañero"<<endl;
cout<<"---------------------"<<endl;
cout<<"1 - VOLVER"<<endl;
cin>>volver;
}while (volver!=1);
}
void Nombre(){
    setlocale(LC_ALL, "Spanish");
    cls ();
    int volver,i;
    char nombre16[16];
cout<<"CARD-JITSU++"<<endl;
cout<<"---------------------"<<endl;
cout<<"Ingrese el Nombre por favor: ";

while (volver!=1){
cin.ignore();
cin.getline(nombre16,16);
cout<<endl;

cout<<"---------------------"<<endl;
cout<<"1 - VOLVER"<<endl;
cin>>volver;
}
}

void mostrar_Nombre(){

char nombre16[16];
for (int i=0; i<16; i++){
cout<<nombre16[i];
}
}

void Juego(){

 carta_central_izquierda();
    carta_entral_derecha();
    carta1();
    carta2();
    carta3();
    carta4();
}




void menu_juego(){

cout<<"    CARD-JITSU++                                                 "<<endl;
cout<<"-----------------------------------------------------------------"<<endl;
cout<<" VS CPU                                             RONDA        "<<endl;
cout<<endl;
cout<<"[1] - VER CARTA DESAFÍO                                           "<<endl;
cout<<"[2] - VER CARTAS DE ELEMENTOS                                     "<<endl;
cout<<"[3] - ROBAR CARTA ELEMENTO DE LA PILA                             "<<endl;
cout<<endl;

cout<<"OPCIÓN? (1-3):"<<endl;



}


int main(){

while (salir!=0){
    menu_principal ();



}


















//system("pause>null");
return 0;
}



