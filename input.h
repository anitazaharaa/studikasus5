#include<iostream>
#include<fstream>
using namespace std;

class sks{
  public:
    void cetak(){
      cout<<"Nama Mahasiswa  : "; cin>>nama_mhswa; 
      cout<<endl;
      cout<<"NIM             : "; cin>>nim;
      cout<<endl;
      cout<<"Jumlah SKS      : "; cin>>jmlh_sks;
      cout<<endl;
      cout<<"Daftar matkul   : "; cin>>daftar;
      cout<<endl;
    }
    void getData(){
      tulis_data.open("api.data.txt");
      tulis_data << nama_mhswa <<endl;
      tulis_data << nim <<endl;
      tulis_data << jmlh_sks <<endl;
      tulis_data << daftar <<endl;
    }
  private:
    ofstream tulis_data;
  int jmlh_sks, daftar, biaya, byr, diskon, tot, tots;
  string nama_mhswa, nim;
};