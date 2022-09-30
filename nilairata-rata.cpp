#include <iostream>

using namespace std;

string nama,hadiah;

int nilai1,nilai2,nilai3,rata;

int main()

{

 int x;

 cout << "Nama siswa: "; // Type a number and press enter

 cin >> nama; // Get user input from the keyboard

 cout << "Nilai Pertandingan I: ";

 cin >> nilai1;

 cout << "Nilai Pertandingan II: ";

 cin >> nilai2;

 cout << "Nilai Pertandingan III: ";

 cin >> nilai3;

 rata = (nilai1+nilai2+nilai3)/3;

 if(rata>=85){

     hadiah=" Seperangkat Komputer core i5 ";

 }else if(rata>=70){

     hadiah=" hadiah Uang sebesar Rp. 2,500,000 ";

 }else if(rata <=70){

     hadiah=" hadiah Hiburan ";

 }

 

 cout << nama <<" Nilai Rata-ratanya adalah " << rata << " maka dia mendapatkan " << hadiah;

 return 0;

}
