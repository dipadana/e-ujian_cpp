//DIBUAT OLEH DIPADANA_SIPAGI_1801010035_21JANUARI2019_11.05WITA
//baca file README.txt terlebih dahulu!
//ver.1.1

#include <iostream>
#include <fstream>
using namespace std;

int pengecek(char a, char b){
	//Fungsi pembanding array
	int nomorIni;
	if(a==b){
		nomorIni=1;
	}
	else{
		nomorIni=0;
	}
	return nomorIni;
}

char poin(int a){
	//Fungsi logika penentu pedikat nilai
	cout<<"\nNilai ujian anda adalah : "<<a*10<<" point";
	if(a>=9){
		cout<<", LULUS dengan predikat nilai Sempurna! (A)\n";
	}else if(a>=8){
		cout<<", LULUS dengan predikat nilai Baik! (B)\n";
	}else if(a==7){
		cout<<", LULUS dengan predikat nilai Cukup! (C)\n";
	}else if(a<=6){
		cout<<", TIDAK LULUS, Nilai anda Kurang! (D)\n";
	}else{
		cout<<"ERROR";
	}
}

int main(){
 
	int i, jumlah, nomor1, pengecekDua;
	char jawaban[9], nama[128], nomor_absen[128], kelas[128];
	
	//Bagian pembuka dari program
	cout<<"\nSelamat Datang di Soal Ujian Elektronik TIK"<<endl;
	cout<<"\nPetunjuk Mengerjakan Soal :\n"<<endl;
	cout<<"a. Tulis terlebih dahulu nama peserta ujian pada kolom yang telah disediakan."<<endl;
	cout<<"b. Kerjakan soal yang paling mudah terlebih dahulu dalam menjawab."<<endl;
	cout<<"c. Pilih satu jawaban yang paling tepat dengan menginputkan huruf a, b, dan c melalui keyboard."<<endl;
	cout<<"d. Jawaban yang sudah diinputkan tidak bisa diganti lagi.\n"<<endl;
	system("pause");
	system("CLS");
	
	//Bagian utama program
	cout<<"\nSoal Ujian Elektronik TIK"<<endl;
	cout<<"\nNama peserta   : ";
	cin>>nama;
	cout<<"Nomor absen    : ";
	cin>>nomor_absen;
	cout<<"Kelas          : ";
	cin>>kelas;
	cout<<endl;
	
	cout<<"1. Nama orang yang menjadi pendiri Microsoft adalah..."<<endl;
	cout<<"   a.Bill Gates   b.Steve Jobs   c.Satya Nandella"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[0];
	cout<<endl;
	
	cout<<"2. Berikut ini macam format audio, kecuali..."<<endl;
	cout<<"   a.jpg   b.mp3   c.wav"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[1];
	cout<<endl;
	
	cout<<"3. Bagian komputer yang berfungsi untuk mengetik adalah..."<<endl;
	cout<<"   a.Monitor   b.Keyboard   c.Mouse"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[2];
	cout<<endl;
	
	cout<<"4. Hardware untuk menyimpan data adalah..."<<endl;
	cout<<"   a.HDD   b.CD-Drive   c.Motherboard"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[3];
	cout<<endl;
	
	cout<<"5. Kepanjangan dari WWW adalah..."<<endl;
	cout<<"   a.World Web Web   b.World Wig Website   c.World Wide Web"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[4];
	cout<<endl;
	
	cout<<"6. Salah satu contoh bahasa pemprograman tingkat tinggi adalah..."<<endl;
	cout<<"   a.Aseembly   b.HTML   c.PHP"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[5];
	cout<<endl;
	
	cout<<"7. Contoh code editor adalah..."<<endl;
	cout<<"   a.Atom   b.MS Word   c.Paint"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[6];
	cout<<endl;
	
	cout<<"8. Nama orang yang menjadi pendiri Apple adalah..."<<endl;
	cout<<"   a.Bill Gates   b.Steve Jobs   c.Satya Nandella"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[7];
	cout<<endl;
	
	cout<<"9. Salah satu front-end(web) Framework adalah..."<<endl;
	cout<<"   a.JQuery   b.Laravel   c.Bootstrap"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[8];
	cout<<endl;
	
	cout<<"10. Contoh sistem operasi dari smarthphone adalah, kecuali..."<<endl;
	cout<<"   a.Android   b.Windows 7   c.iOS"<<endl;
	cout<<"   Jawaban anda: ";
	cin>>jawaban[9];
	cout<<endl;
	cout<<"Selamat! Anda telah berhasil menempuh Ujian Elektronik TIK dengan baik, \ntekan enter untuk mengetahui hasil dan mencetaknya.\n"<<endl;
	
	system("pause");
	system("CLS");
	
	//Logika pengecekan nilai
	char kunci[]="aabaccabcb";
	jumlah=0;
	for(i=0; i<10; i++){
		pengecek(kunci[i], jawaban[i]);
		pengecekDua=pengecek(kunci[i], jawaban[i]);
		jumlah=jumlah+pengecekDua;
	}
	
	//Bagian akhir program
	cout<<poin(jumlah);
	
	
	ofstream hasilJawaban;
	hasilJawaban.open("D://Tugas Akhir DDP/hasil/hasil.txt", ios::app);
	hasilJawaban<<"\nNilai Hasil Ujian Elektronik TIK\n"<<endl;
	hasilJawaban<<"Nama Peserta 	: "<<nama<<endl;
	hasilJawaban<<"Nomor Absen	: "<<nomor_absen<<endl;
	hasilJawaban<<"Kelas		: "<<kelas<<"\n"<<endl;
	hasilJawaban<<"Jawaban"<<"   Kunci"<<endl;
	for(i=0; i<10; i++){
	hasilJawaban<<"   "<<jawaban[i]<<"        "<<kunci[i]<<"\n";}
	hasilJawaban<<"\nNilai ujian anda adalah : "<<jumlah*10<<" point";
	if(jumlah>=9){
		hasilJawaban<<", LULUS dengan predikat nilai Sempurna! (A)";
	}else if(jumlah>=8){
		hasilJawaban<<", LULUS dengan predikat nilai Baik! (B)";
	}else if(jumlah==7){
		hasilJawaban<<", LULUS dengan predikat nilai Cukup! (C)";
	}else if(jumlah<=6){
		hasilJawaban<<", TIDAK LULUS, Nilai anda Kurang! (D)";
	}else{
		hasilJawaban<<"ERROR";
	}
	hasilJawaban.close();
	cout<<"\n *Hasil nilai ujian anda telah dicetak*\n";
	
	return(0);
}



