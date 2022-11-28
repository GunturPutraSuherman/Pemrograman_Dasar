#include <iostream>
using namespace std;
int main (){
	int nilai;
	cout << "NIlai Anda";
	cin >> nilai;
	if (nilai > 78){
		cout << "Lulus" << endl;
	}else if (nilai == 78){
		cout <<"Lulus KKM";
	}else{
		cout << "Tidak Lulus";
	}
return 0;
}