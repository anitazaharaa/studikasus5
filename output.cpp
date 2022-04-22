#include<iostream>
#include<fstream>
#include "input.h"
#include "proses.h"
using namespace std;

class sks{
  public:
    void cetak(){
  cout << "Nama : " << nama_mhswa <<endl;
  cout << "NIM  : " << nim << endl;
  cout << "========================================" << endl;
    
  cout << "========================================" << endl;
  cout << "Total sks = " << jmlh_sks << endl ;
  cout << "Total biaya = Rp. " << tots << endl;
  cout << "========================================" << endl;
}
  private:
  //ofstream tulis_data;
    ofstream tulis_data;
  string nama_mhswa;
int nim, jmlh_sks, byr, diskon, tot, tots;
};
