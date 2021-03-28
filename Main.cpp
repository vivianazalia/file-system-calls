#include<fstream>

using namespace std;

fstream file;

void WriteData(string filename){
    file.open(filename, ios::out | ios::trunc);
    file << "Daftar Mahasiswa PENS" << endl;
    file << "#,NRP,Nama,Jenis_kelamin" << endl;
    file << "1,4210191002,Irfan Muhammad,Laki-laki" << endl;
    file << "2,4210191003,Aryazaky Iman Fauzy,Laki-laki" << endl;
    file << "3,4210191004,Aydin Ihsan Ibrahim Nurdin,Laki-laki" << endl;
    file << "4,4210191005,Prawida Yumia,Perempuan" << endl;
    file << "5,4210191006,Khonsa Nadziroh,Perempuan" << endl;
    file << "6,4210191008,Robby Alexander,Laki-laki" << endl;
    file << "7,4210191009,Miftah Amiruddin Hakim Ganing,Laki-laki" << endl;
    file << "8,4210191010,Hikmatul Ulya,Perempuan" << endl;
    file << "9,4210191011,Mohammad Alifian Rizki Choliq,Laki-laki" << endl;
    file << "10,4210191012,Berliana Putri Indrasari,Perempuan" << endl;
    file << "11,4210191013,Marvel Natanael S,Laki-laki" << endl;
    file << "12,4210191014,Auriel Harlih Rizkinanda,Laki-laki" << endl;
    file << "13,4210191015,Vivian Azalia Anwari,Perempuan" << endl;
    file << "14,4210191016,Joane Vanesa Hadi,Perempuan" << endl;
    file << "15,4210191017,Mochammad Januar Afandi,Laki-laki" << endl;
    file << "16,4210191018,M. Dwi Febrian,Laki-laki" << endl;
    file << "17,4210191019,Amos Taruna Siahaan,Laki-laki" << endl;
    file << "18,4210191020,M Awaluddin Romadhon,Laki-laki" << endl;
    file << "19,4210191021,Intan Putri Kusuma Wardhani,Perempuan" << endl;
    file << "20,4210191022,Andika Rizky Oktavian,Laki-laki" << endl;
    file << "21,4210191023,Natan Andro Tri Arauna,Laki-laki" << endl;
    file << "22,4210191024,Andhika Arista Permana,Laki-laki" << endl;
    file << "23,4210191025,Devinindya Safitri Anggraeni,Perempuan" << endl;
    file << "24,4210191026,Siti Julekhah,Perempuan" << endl;
    file << "25,4210191027,Imam Biladi,Laki-laki" << endl;
    file << "26,4210191028,Mukrom Karunia Azza,Laki-laki" << endl;
    file << "27,4210191029,Dimas Rizky Alimul Fajri,Laki-laki" << endl;
    file.close();
}

void ReverseData(string filename){
    file.open(filename, ios::out | ios::app);
    file << "28,4210191029,Dimas Rizky Alimul Fajri,Laki-laki" << endl;
    file << "29,4210191028,Mukrom Karunia Azza,Laki-laki" << endl;
    file << "30,4210191027,Imam Biladi,Laki-laki" << endl;
    file << "31,4210191026,Siti Julekhah,Perempuan" << endl;
    file << "32,4210191025,Devinindya Safitri Anggraeni,Perempuan" << endl;
    file << "33,4210191024,Andhika Arista Permana,Laki-laki" << endl;
    file << "34,4210191023,Natan Andro Tri Arauna,Laki-laki" << endl;
    file << "35,4210191022,Andika Rizky Oktavian,Laki-laki" << endl;
    file << "36,4210191021,Intan Putri Kusuma Wardhani,Perempuan" << endl;
    file << "37,4210191020,M Awaluddin Romadhon,Laki-laki" << endl;
    file << "38,4210191019,Amos Taruna Siahaan,Laki-laki" << endl;
    file << "39,4210191018,M. Dwi Febrian,Laki-laki" << endl;
    file << "40,4210191017,Mochammad Januar Afandi,Laki-laki" << endl;
    file << "41,4210191016,Joane Vanesa Hadi,Perempuan" << endl;
    file << "42,4210191015,Vivian Azalia Anwari,Perempuan" << endl;
    file << "43,4210191014,Auriel Harlih Rizkinanda,Laki-laki" << endl;
    file << "44,4210191013,Marvel Natanael S,Laki-laki" << endl;
    file << "45,4210191012,Berliana Putri Indrasari,Perempuan" << endl;
    file << "46,4210191011,Mohammad Alifian Rizki Choliq,Laki-laki" << endl;
    file << "47,4210191010,Hikmatul Ulya,Perempuan" << endl;
    file << "48,4210191009,Miftah Amiruddin Hakim Ganing,Laki-laki" << endl;
    file << "49,4210191008,Robby Alexander,Laki-laki" << endl;
    file << "50,4210191006,Khonsa Nadziroh,Perempuan" << endl;
    file << "51,4210191005,Prawida Yumia,Perempuan" << endl;
    file << "52,4210191004,Aydin Ihsan Ibrahim Nurdin,Laki-laki" << endl;
    file << "53,4210191003,Aryazaky Iman Fauzy,Laki-laki" << endl;
    file << "54,4210191002,Irfan Muhammad,Laki-laki" << endl;
    file.close();
}

int main(int argc, char const *argv[])
{
    WriteData("4210191015_Vivian Azalia.csv");
    ReverseData("4210191015_Vivian Azalia.csv");
    return 0;
}
