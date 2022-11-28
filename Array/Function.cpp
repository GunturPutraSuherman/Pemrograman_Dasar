#include <iostream>
using namespace std;

void halo (string nama){
	cout <<"Halo," <<nama<<endl;
}

void tambah (int angka1, int angka2){
	printf ("Jumlah %d + %d = %d \n", 
			angka1, angka2, angka1 + angka2);
}
int main(){
	halo ("kamal");
	tambah (2,4);
}
