#include <stdio.h>
#include <iostream>
using namespace std;

class Studi5{
  public:
// Input
  void input(){
    //nama
    cout<<"Masukkan nama mahasiswa = ";
    cin>>nama;
    //nim
    cout<<"Masukkan NIM = ";
    cin>>nim;
    //daftar mata kuliah
    cout<<"Masukkan banyak mata kuliah yang diambil= ";  cin>>jmlh_matakuliah;
  for(int i=0;i<jmlh_matakuliah;i++){
    cout<<"masukkan mata kuliah - "<< i+1<<" :"; cin>>matakuliah[i];
  }
    //jumlah sks
    cout<<"masukkan jumlah sks = ";
    cin>>sks;
  }
  
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
  s.input();

  return 0;
}
