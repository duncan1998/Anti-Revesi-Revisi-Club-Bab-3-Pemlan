#include <iostream>
using namespace std;

class database{
private:
    int id[5];
    string nama[5];
    int gp[5];
    int t[5];
    int b[5];
    int d[5];

    database(){

    id[0]=101;
    id[1]=102;
    id[2]=103;
    id[3]=104;
    id[4]=105;

    nama[0]="Paijo";
    nama[1]="Lala";
    nama[2]="Lulu";
    nama[3]="Sabar";
    nama[4]="Sule";

    gp[0]=2000;
    gp[1]=1750;
    gp[2]=2150;
    gp[3]=1500;
    gp[4]=2500;

    t[0]=1000;
    t[1]=900;
    t[2]=1000;
    t[3]=750;
    t[4]=850;

    b[0]=500;
    b[1]=500;
    b[2]=300;
    b[3]=600;
    b[4]=500;

    d[0]=200;
    d[1]=200;
    d[2]=375;
    d[3]=200;
    d[4]=300;
    }

public:
    void cetak(int i){
      cout<<"ID : "<<id[i]<<endl;
      cout<<"Nama : "<<nama[i]<<endl;
      cout<<"Gaji Pokok : "<<gp[i]<<endl;
      cout<<"Tunjangan : "<<t[i]<<endl;
      cout<<"Bonus : "<<b[i]<<endl;
      cout<<"Denda : "<<d[i]<<endl;
    }

    get(){
    for (int i=0;i<5;i++){
      cout<<"ID : "<<id[i]<<endl;
      cout<<"Nama : "<<nama[i]<<endl;
      cout<<"Gaji Pokok : "<<gp[i]<<endl;
      cout<<"Tunjangan : "<<t[i]<<endl;
      cout<<"Bonus : "<<b[i]<<endl;
      cout<<"Denda : "<<d[i]<<endl;
    }}

    get(int x){
    for (int i=0;i<5;i++){
        if(x==id[i])
            cetak(i);
    }}

    get(string s,int i){
    for (int i=0;i<5;i++){
        if(i==id[i])
            cetak(i);
        else if(i==gp[i])
            cetak(i);
        else if(i==t[i])
            cetak(i);
        else if(i==b[i])
            cetak(i);
        else if(i==d[i])
            cetak(i);
    }
}
};

int main(){
return 0;
}
