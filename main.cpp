#include <iostream>
#include "HeaderFunciones.h"
#include "rlutil.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>




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
    void Reglas_de_Juego();
    void Estadistica ();
 do {
cls();
//setlocale(LC_ALL, "Spanish");
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
        cls();
        Juego();

    break;
    case 2:
        Estadistica ();

    break;
    case 3:
        Creditos();

    break;
    case 4:
        Reglas_de_Juego();
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
//setlocale(LC_ALL, "Spanish");
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
    //setlocale(LC_ALL, "Spanish");
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
cout<<"1 - Jugar"<<endl;
cin>>volver;
}
}
void Estadistica (){
void mostrar_Nombre();

cls ();
int volver;
do {
cout<<"CARD-JITSU++"<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
cout<<"    ESTADISTICAS"<<endl;
cout<<"------------------------------------------------------------------------"<<endl;

cout<<"------------------------------------------------------------------------"<<endl;
cout<<endl;
cout<<"HITO                                                            ANGEL   "<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
cout<<"Ganador de la partida                                           3 PDV   "<<endl;
cout<<"Combinación elementos cumplido x contrario                     -1 PDV   "<<endl;
cout<<"Carta desafío cumplido x contrario                              0 PDV   "<<endl;
cout<<"Rondas ganadas al adversario                                    4 PDV   "<<endl;
cout<<"Rondas ganadas al adversario con igual elemento                10 PDV   "<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
cout<<"TOTAL                                                          16 PDV   "<<endl;
cout<<endl;
cout<<"¡Ganador ANGEL con 16 puntos de victoria!                               "<<endl;

cout<<"---------------------"<<endl;
cout<<"1 - VOLVER"<<endl;
cin>>volver;
}while (volver!=1);








}

void Reglas_de_Juego(){
cls ();
int volver;
do {
cout<<"Compuesto por dos tipos de mazo de cartas :                                                                      "<<endl;
cout<<""<<endl;
cout<<"*CARTAS DE DESAFIO : total de 10 cartas"<<endl;
cout<<"contienen un reto a cumplir"<<endl;

cout<<"Agarrada antes de comenzar la partidad se toma una carta del MAZO DE DESAFIO."<<endl;
cout<<"(OBJETIVO ==> CUMPLIRLO LO ANTES POSIBLE)"<<endl;

cout<<"DESAFIOS "<<endl;
cout<<"1 - Ganar una carta de Nieve."<<endl;
cout<<"2 - Ganar una carta de Fuego."<<endl;
cout<<"3 - Ganar una carta de Agua."<<endl;
cout<<"4 - Ganar dos cartas rojas."<<endl;
cout<<"5 - Ganar dos cartas amarillas."<<endl;
cout<<"6 - Ganar dos cartas verdes."<<endl;
cout<<"7 - Ganar dos cartas azules."<<endl;
cout<<"8 - Ganar una carta con el mismo elemento que el adversario."<<endl;
cout<<"9 -Ganar dos cartas con el mismo número."<<endl;
cout<<"10 - Ganar dos rondas de manera consecutiva."<<endl;


cout<<"---------------------"<<endl;
cout<<"*CARTAS DE ELEMENTOS :"<<endl;
cout<<"caracteristicas: "<<endl;
cout<<"*permiten que transcurra la partida"<<endl;
cout<<"*pueden decidir si se cumplio el desafio o no."<<endl;
cout<<"---------------------"<<endl;
cout<<"*CARTAS DE ELEMENTOS :"<<endl;
cout<<"caracteristicas: "<<endl;
cout<<"*permiten que transcurra la partida"<<endl;
cout<<"*pueden decidir si se cumplio el desafio o no."<<endl;
cout<<"::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"Este maso esta compuesto por"<<endl;
cout<<"# 3 ELEMENTOS 	(FUEGO |AGUA|NIEVE)"<<endl;
cout<<"# dividido en 4 COLORES ( ROJO|AMARILLO|VERDE|AZUL)    TOTAL DE 60 CARTAS           [15 POR COLOR/ 5 POR CADA ELEMENTO]"<<endl;

cout<<"ROJO                                                               AMARILLO"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"ROJO 1 FUEGO | ROJO 1 AGUA |ROJO 1 NIEVE | | AMARILLO 1 FUEGO | AMARILLO 1 AGUA |AMARILLO 1 NIEVE |"<<endl;
cout<<"ROJO 2 FUEGO | ROJO 2 AGUA |ROJO 2 NIEVE | | AMARILLO 2 FUEGO | AMARILLO 2 AGUA |AMARILLO 2 NIEVE |"<<endl;
cout<<"ROJO 3 FUEGO | ROJO 3 AGUA |ROJO 3 NIEVE | | AMARILLO 3 FUEGO | AMARILLO 3 AGUA |AMARILLO 3 NIEVE |"<<endl;
cout<<"ROJO 4 FUEGO | ROJO 4 AGUA |ROJO 4 NIEVE | | AMARILLO 4 FUEGO | AMARILLO 4 AGUA |AMARILLO 4 NIEVE |"<<endl;
cout<<"ROJO 5 FUEGO | ROJO 5 AGUA |ROJO 5 NIEVE | | AMARILLO 5 FUEGO | AMARILLO 5 AGUA |AMARILLO 5 NIEVE |"<<endl;
cout<<"==================================================================================================|"<<endl;
cout<<"                     VERDE                                           AZUL"<<endl;
cout<<"==================================================================================================|"<<endl;
cout<<"VERDE 1 FUEGO | VERDE 1 AGUA |VERDE 1 NIEVE | |AZUL 1 FUEGO | AZUL 1 AGUA |AZUL 1 NIEVE ||"<<endl;
cout<<"VERDE 2 FUEGO | VERDE 2 AGUA |VERDE 2 NIEVE | |AZUL 2 FUEGO | AZUL 2 AGUA |AZUL 2 NIEVE ||"<<endl;
cout<<"VERDE 3 FUEGO | VERDE 3 AGUA |VERDE 3 NIEVE | |AZUL 3 FUEGO | AZUL 3 AGUA |AZUL 3 NIEVE ||"<<endl;
cout<<"VERDE 4 FUEGO | VERDE 4 AGUA |VERDE 4 NIEVE | |AZUL 4 FUEGO | AZUL 4 AGUA |AZUL 4 NIEVE ||"<<endl;
cout<<"VERDE 5 FUEGO | VERDE 5 AGUA |VERDE 5 NIEVE | |AZUL 5 FUEGO | AZUL 5 AGUA |AZUL 5 NIEVE ||"<<endl;
cout<<"=========================================================================================="<<endl;
cout<<"PARTIDA "<<endl;
cout<<"/ cada jugador recibe 3 CARTAS de ELEMENTOS al azar|"<<endl;
cout<<"*Por cada ronda se podra tomar una de la PILA          EN DUDA"<<endl;
cout<<"================================================="<<endl;
cout<<"PRIMER ETAPA (etapa de desafios) "<<endl;
cout<<"se toma un carta de desafios para cumplir durante la partida"<<endl;

cout<<"SEGUNDA ETAPA (etapa de elementos)"<<endl;
cout<<"cantidad de rondas indefinidas"<<endl;
cout<<"*para dar por terminado el juego: se debe cumplir lo siguiente:"<<endl;
cout<<"================================================================="<<endl;
cout<<"circunstancias de juego:"<<endl;
cout<<"*Lograr lo que su carta desafío indica"<<endl;
cout<<"*Obtener una combinación de elementos ganadora"<<endl;

cout<<"Se juega la carta de preferencia por turno:"<<endl;
cout<<"los ganadores de las rondas se definen por lo siguiente:"<<endl;
cout<<"*El fuego vence a la nieve"<<endl;
cout<<"*La nieve vence al agua"<<endl;
cout<<"*El agua vence al fuego"<<endl;

cout<<"----------(INDEPENDIENTEMENTE DEL COLOR Y EL NUMERO DE LA CARTA)---------------"<<endl;
cout<<"SÍ son del mismo elemento,  el ganador de la ronda es quien tenga el NUMERO MAS ALTO"<<endl;

cout<<"Luego de determinar el ganador de la ronda, "<<endl;
cout<<"ambas cartas pasan a ser parte de la mano del jugador que ganó."<<endl;
cout<<"*Un jugador si gana muchas rondas puede tener un numero ilimitado de cartas"<<endl;
cout<<"*PERO un jugador no puede tener menos de 3 en mano."<<endl;
cout<<"======--------------------===================="<<endl;
cout<<"=====(COMBINACION GANADORA)====================="<<endl;
cout<<"*Tener tres cartas de distinto elemento y distinto color."<<endl;
cout<<" -Nieve #2 verde    (GANADORA)|"<<endl;
cout<<" -Nieve #1 azul               |"<<endl;
cout<<" -Agua #3 azul      (GANADORA)| "<<endl;
cout<<" -Fuego #5 amarillo (GANADORA)|"<<endl;
cout<<"=============================="<<endl;
cout<<"==============================="<<endl;
cout<<"*Tener tres cartas del mismo elemento."<<endl;
cout<<"-Nieve #2 verde      (GANADORA)| "<<endl;
cout<<"-Nieve #3 amarillo   (GANADORA)|"<<endl;
cout<<"-Fuego #4 azul                 |"<<endl;
cout<<"-Fuego #2 azul                 |"<<endl;
cout<<"-Agua #1 rojo                  |"<<endl;
cout<<"-Nieve #1 azul       (GANADORA)| "<<endl;
cout<<"==============================="<<endl;

// PARA GANAR DE MANERA DEFINITIVA SE DEBE COMPLETAR EL DESAFIO
cout<<"   Y TENER UNA COMBINACION GANADORA."<<endl;
cout<<"¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡"<<endl;

cout<<"AL FINALIZAR"<<endl;
cout<<"Una vez finalizada la partida, se determinan los puntos de victoria de la misma. Los mismos se calculan de la siguiente manera:"<<endl;

cout<<"+3 PDV por haber ganado la partida"<<endl;
cout<<"-1 PDV si el contrario obtuvo una combinación de elementos ganadora"<<endl;
cout<<"-1 PDV si el contrario cumplió el objetivo de su carta desafío"<<endl;
cout<<"+1 PDV por cada ronda ganada en el juego al adversario"<<endl;
cout<<"+5 PDV por cada ronda ganada en el juego con un elemento igual al del adversario"<<endl;
cout<<"---------------------"<<endl;
cout<<"1 - VOLVER"<<endl;
cin>>volver;
}while (volver!=1);








}

void mostrar_Nombre(){

char nombre16[16];
for (int i=0; i<16; i++){
cout<<nombre16[i];
}
}

void Juego(){
    void cls(void);
    do {


 carta_central_izquierda();
    carta_entral_derecha();
    carta1();
    carta2();
    carta3();
    carta4();
}while (salir!=0);


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



