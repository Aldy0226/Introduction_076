#include <iostream>
#include <string>

using namespace std;

void printCV(const string& name, const string& email, const string& phone, const string& address, 
             const string& education, const string& experience, const string& skills) {
    cout << "==================== CV ====================" << endl;
    cout << "Nama: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Telepon: " << phone << endl;
    cout << "Alamat: " << address << endl;
    cout << endl;
    cout << "================ Pendidikan ================" << endl;
    cout << education << endl;
    cout << endl;
    cout << "================ Pengalaman ================" << endl;
    cout << experience << endl;
    cout << endl;
    cout << "================== Keterampilan ==============" << endl;
    cout << skills << endl;
    cout << "===============================================" << endl;
}

int main() {
    string name, email, phone, address;
    string education, experience, skills;

    cout << "Masukkan Nama: ";
    getline(cin, name);
    cout << "Masukkan Email: ";
    getline(cin, email);
    cout << "Masukkan Telepon: ";
    getline(cin, phone);
    cout << "Masukkan Alamat: ";
    getline(cin, address);
    cout << "Masukkan Pendidikan: ";
    getline(cin, education);
    cout << "Masukkan Pengalaman Kerja: ";
    getline(cin, experience);
    cout << "Masukkan Keterampilan: ";
    getline(cin, skills);

    printCV(name, email, phone, address, education, experience, skills);

    return 0;
}