#include <iostream.h>

#include <conio.h>

#include <math.h>



int a,b; //deklarasi variabel global

void input(); //deklarasi prototipe fungsi

void kali()

{

int kali; //deklarasi variabel lokal

kali=a*b;

cout<<"Hasilnya adalah: "<<kali;

}

void bagi()

{

int bagi; //deklarasi variabel lokal

bagi=a/b;

cout<<"Hasilnya adalah: "<<bagi;

}

void pangkat()

{

int pangkat; //deklarasi variabel lokal

pangkat*=(a,b);

cout<<"Hasilnya adalah: "<<pangkat;

}

void tambah()

{

int tambah; //deklarasi variabel lokal

tambah=a+b;

cout<<"Hasilnya adalah: "<<tambah;

}

void kurang()

{

int kurang; //deklarasi variabel lokal

kurang=a-b;

cout<<"Hasilnya adalah: "<<kurang;

}

void main()

{

int pilih;

do

{

clrscr();

cout<<"Pilihlah--------------->"<<endl;

cout<<"1. Perkalian\n";

cout<<"2. Pembagian\n";

cout<<"3. Perpangkatan\n";

cout<<"4. Pertambahan\n";

cout<<"5. Pengurangan\n";

cout<<"6. SELESAI\n";

cout<<"Masukkan Pilihan Anda: ";

if(pilih!=6)

input();

switch(pilih)

{

case 1: kali();kali ();

break;

case 2: bagi();  bagi();

break;

case 3: pangkat();  pangkat();

break;

case 4: tambah();  tambah();

break;

case 5: kurang();  kurang();

break;

case 6: cout<<"Terima lhasih ";}

getch();

} while(pilih!=6);

}

void input()

{

cout<<"Masukkan nilai a: "; cin>>a;

cout<<"Masukkan nilai b: "; cin>>b;

return;

}