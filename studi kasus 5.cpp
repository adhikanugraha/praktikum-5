#include <stdio.h>
#include <iostream>
using namespace std;

class Studi5{
  public:
// Input




//proses
  int proses(int sks){
    if(sks<1){
      return total;
    }
    else{
      total+=125000;
      proses(sks-1);
    }
  }

  double discount(int total){
    diskon1=(total*10)/100;
    diskon2=(total-diskon1)*5/100;
    total_pembayaran=total-diskon1-diskon2;
    return total_pembayaran;
  }
  
  //output
  void output(){
    
    //NIM
    cout << "NIM: " << nim << endl;
    //Nama
    cout << "Nama: " << nama << endl;
    //Daftar Mata Kuliah
    cout << "Mata Kuliah yang diambil:\n"; 
      for(int i=0;i<jmlh_matakuliah;i++){
        cout<<" mata kuliah - "<<i+1<<" ="<<matakuliah[i]<<endl;
      }
    //Jumlah SKS
    cout << "Jumlah SKS: " << sks << endl;
    //Total sebelum diskon
    cout << "Total sebelum diskon: " << total << endl;
    //Total Pembayaran setelah diskon
    cout << "Total Pembayaran:  \t" << total_pembayaran << endl;
  }


  private:
  int jmlh_matakuliah;
  string matakuliah[20];
  int total=0;
  double diskon1,diskon2;
  string nim,nama;
  int sks;
  int total_pembayaran;
};

int main(void) {
  Studi5 s;
  s.output();


  return 0;
}
