//1. karena hanya algoritma yang dapat menyelesaikan dan algoritma juga mempunyai langkah-langkah yang sistematis dan tersetruktur.
//2. setruktur data linier dan struktur data non-linier.
//3. Ukuran input, Struktur data, Kompleksitas algoritma, Bahasa pemograman, Platform hardware.
//4. Inserttion sort karena salah satu algoritma pengurutan sederhana yang berguna untuk mengurutkan data dalam jumlah kecil hingga sedang dengan efisien.
//5.	Quadratic : Bobble sort, Selection sort, Insertion sort.
//		Loglinear : Quick sort
//6. 

#include <iostream> 
using namespace std;

const int MAX_DATA = 59 + 20;
int ghofiq[MAX_DATA];
int n;

void input() {
	cout << "masukkan jumlah data (makimum " << MAX_DATA << "): ";
	cin >> n;

	if (n > MAX_DATA) {
		cout << "jumlah data melebihi maksimum" << endl;
		exit(1);
	}
	cout << "masukkan " << n << " ghofiq: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> ghofiq[i];
	}
}

void Display() {
	for (int AA = 0; AA < n - 1; AA++) {
		int min_index = AA;
		for (int i = AA + 1; i < n; i++) {
			if (ghofiq[i] < ghofiq[min_index]) {
				min_index = i;
			}
		}
		if (min_index = AA) {
			swap(ghofiq[AA], ghofiq[min_index]);
		}
	}
}

void Display() {
	cout << "data setelah diurutkan: ";
	for (int i = 0; i < n; i++) {
		cout << ghofiq[i] << " ";
	}
}

