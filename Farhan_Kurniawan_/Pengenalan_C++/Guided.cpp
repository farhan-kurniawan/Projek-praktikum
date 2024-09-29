#include <iostream>
using namespace std;

int main()
{

    /*int angka = 10;
    float desimal = 10.5;
    string kalimat = "aldi"
    double tinggi = 10.4;
    char jenis_kelamin = 10;
    bool isSunny = true;

    cout << "Angka;" << angka << endl;*/


    /*int angka;
        cout << "Masukkan angka: ";
        cin >> angka;

        cout << "Angka: " << angka << endl;*/

    /*int angka1 = 8;
    int angka2 = 3;

    int hasil = angka1 + angka2;

    cout << "Hasilnya adalah " << hasil << endl;


    //operator perbandingan

    int angka1 = 5;
    int angka2 = 5;

    bool hasil = (angka1 == angka2);

    cout << "Hasilnnya adalah " << boolalpha << hasil << endl;


    //operator logika

    bool kondisi1 = true;
    bool kondisi2 = true;

    bool hasil = (kondisi1 && kondisi2);
    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;

    bool kondisi1 = false;
    bool hasil = !kondisi1;
    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;*/



    //percabangan
    /*string kata;
    cout << "Masukkan kata = HALO" << endl;
    cin >> kata;

    if(kata == "HALO"){
        cout << "Kata sesuai" << endl;

    } else {
        cout << "Kata tidak sesuai" << endl;
    }*/

    int tv;
    cout << "Daftar channel tv" << endl;
    cout << "1. RCTI" << endl;
    cout << "2. Indosiar" << endl;

    cout << "Masukkan channel pilihan: ";
    cin >> tv;

    switch(tv){
    case 1 :
        cout << "Channel yg anda pilih rcti" << endl;
        break;
    case 2 :
        cout << "Channel yg anda pilih indosiar" << endl;
        break;
    default:
        cout << "Channel tidak tersedia" << endl;

    }

    //perulangan

    int i;
    for(i=0; i<5, i{
    cout << "hello world" << endl;
    }


    for(int i =0; i<5; i++){
    cout << "hello world" << endl;
    }

    for(int i =6; i>0; i++){
    cout << i-1 << "hello world" << endl;
    }
}