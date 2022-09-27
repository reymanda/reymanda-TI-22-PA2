#include <iostream>
using namespace std;

int main() {
  // Deklarasi variabel
  float r, t, l, v;
  float phi = 3.14;

  cout <<  "masukan jari jari : "; 
  cin >> r;

  cout << "masukan tinggi : ";
  cin >> t;

  // hitung luas lingkaran
  l = (phi * r * r);

  // hitung volume tabung
  v = (phi * r * r * t);

  cout << endl;
  cout << "luas lingkaran   :" << l << endl;
  cout << "volume tabung  :" << v << endl;
}