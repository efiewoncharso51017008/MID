#include <iostream.h>
#include <conio.h>
void main () {
int a, b, c, d, e,  totalnt, totalt, nilaim, nilaif, na;
char nama [30], NIM [10], NilaiHuruf;
cout <<" nama mahasiswa = "; cin >> nama ;
cout <<" Nim Mahasiswa  = "; cin >> NIM ;
cout <<" nilai tugas1 = "; cin >> a ;
cout <<" nilai tugas2 = "; cin >> b ;
cout <<" nilai tugas3 = "; cin >> c ;
cout <<" nilai mid = "; cin >> d ;
cout <<" nilai final = "; cin >> e ;
totalnt = ( a + b + c )/3;
totalt = totalnt*20/100;
nilaim = d*40/100;
nilaif = e*40/100;
na = totalt + nilaim + nilaif ;
cout <<"\n nama mahasiswa = "<<nama ;
cout <<"\n Nim Mahasiswa= "<<NIM ;
cout <<"\n nilai akhir mahasiswa = "<< na;
cout <<"\nNilai Huruf   = "<<NilaiHuruf;
if (na>= 80){
    cout<<"A";
}
else if (na>= 70){
    cout<<"B";
}
else if (na>= 60){
    cout<<"C";
}
else if (na>= 50){
    cout<<"D";
}
else {
    cout<<"E";
}
getch ();
}
