#include <iostream>
#include "input.h"
using namespace std;

class sks{
  public:
    void proses() {
    int 
    sks = 125000;
    tot = (jmlh_sks * sks);
    tots = (tot * 15 / 100);
    }
void cetak(){
  cout<<"Jumlah SKS      : " cin >> jmlh_sks;
  cout<<endl;
  cout<<"Total pembayaran  : " << tots; 
  cout<< endl;
}
private:
  ofstream tulis_data;
  int jmlh_sks, hitung, byr, diskon, biaya, tot, tots;
 string nama_mhswa, nim;

};
