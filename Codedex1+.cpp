#include <iostream>
#include <string>
using namespace std;

class Mahal {
private: 
int production_year;
public:
string nama;
string brand;
int harga;

void getYear(int year) {
    production_year = year;
}

int getYear() {
    return production_year;
}

};


int main () {
    Mahal Kalcer_Shoe;
    Kalcer_Shoe.nama = "Nike Air Max";
    Kalcer_Shoe.brand = "Nike";
    Kalcer_Shoe.harga = 900000;
    Kalcer_Shoe.getYear(2023);
    
    cout << "Tahun produksi : " << Kalcer_Shoe.getYear() << endl;
    cout << "Merk brand : " << Kalcer_Shoe.brand << endl;
}
