#include <iostream>

using namespace std;

int main()
{
    float uas, uts, kuis1, kuis2, tugas, hasil;

    cout<<"Mencari Rata-Rata dan Menentukan Nilai"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Masukkan nilai UTS: ";
    cin>>uts;
    cout<<"Masukkan nilai UAS: ";
    cin>>uas;
    cout<<"Masukkan nilai Kuis Pertama: ";
    cin>>kuis1;
    cout<<"Masukkan nilai Kuis Kedua: ";
    cin>>kuis2;
    cout<<"Masukkan nilai Tugas: ";
    cin>>tugas;
    
    hasil=(uts+uas+kuis1+kuis2+tugas)/5;
    if (hasil >= 90)
    cout<<"Nilai Anda: A";
    else if (70 <= hasil <= 90)
    cout<<"Nilai Anda: B";
    else
    cout<<"Nilai Anda: C";
    
    
    cout<<endl<<"Terima kasih dan tetap semangat belajar.";
}
