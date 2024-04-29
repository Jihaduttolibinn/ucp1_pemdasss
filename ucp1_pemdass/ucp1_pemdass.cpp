//1.contoh deklarasi intejer
// Variabel Integer:umur 
// variable Variabel String: nama
// Variabel Float : tinggi_badan

//2.Prosedur (Procedure):
//def greet_user(name):

//3, p = Point(10, 20) membuat objek point


//4. prosedur 
// def greet_user(name):
// fungsi
// def calculate_square(number):

//5. contoh looping untuk mencetak angka dari 1 hingga 5
// for i in range(1, 6):
// print(i)


#include <iostream>
using namespace std;
class Mahasiswa {
public: // akses modifier 
    string nama;
    int jumlah;
    string mata_pembelajaran;

    void output() {
        cout << "Nama: " << nama << endl; 
        cout << "jumlah: " << jumlah << endl;
        cout << "mata_pembelajaran: " << mata_pembelajaran << endl;
    }
};

class pembelajaran {
private:
    string kodePM;
    string namaPM;
    string nilai;
public:
    void input() {
        cout << "Kode PM: ";
        cin >> kodePM;
        cout << "Nama PM: "; 
        cin >> namaPM;
        cout << "mata_pembelajaran: ";
        cin >> mata_pembelajaran;

        void output() {
            cout << "Kode PM: " << kodePM << endl;
            cout << "Nama PM: " << namaPM << endl; 





