#include <iostream>
#include <string>
using namespace std;

//int* ordena(int *number, int length) {
//	int* copia = new int[length];
//
//	for (int i = 0; i < length - 1; i++) {
//		for (int j = 0; j < length - i - 1; j++) {
//			if (number[j] > number[j + 1]) {
//				int copia = number[j];
//				number[j] = number[j + 1];
//				number[j + 1] = copia;
//				cout << copia;
//			}
//		}
//	}
//	delete[] number;
//	number = copia;
//	return copia;
//	
//
//}

int main()
{
	int num;
	int len = 0;
	int* number = new int[len];
	for (int i = 0; i <= len; i++){
		cout << "\nDigues un numero: ";
		cin >> num;
		len++;

		int* newnums = new int[len];
		for (int i = 0; i <= len-1; i++) {
			newnums[i] = number[i];
		}
		newnums[len-1] = num;
		delete[] number;
		number = newnums;

		cout << "[";
		for (int j = 0; j < len; j++) {
			cout << number[j] << ",";
		}
		cout << "]" << endl;


		if (len == 10) {
			break;
		}
	}
	//ordena(number, len);

	

}

