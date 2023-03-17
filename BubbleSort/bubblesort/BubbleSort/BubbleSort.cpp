#include <iostream>
using namepace std;


int a[20]             // Deklarasi array a deangan ukuran 20
int n;               // Deklarasi variabel n untuk menyimpan banyak elemen pada array


void input() {         // procedure untuk input
	while (true) {     // looping 
		cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
		cin >> n;     // Input dari pengguna 
		if (n <= 20) // Jika n kurang dari atau sama dengan 20
			break   // Keluar dari loop
		else (     // Jika n lebih dari 20
			count << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //Output ke layar
	   }
	}
    cout << end1;                                 // Output baris kosong
	cout << "===================" << end1;       // Output ke layar
	cout << "Masukan Elemen Array" << end1;     // Output ke layar
	cout << "===================" << end1;     // Output ke layar

	for (int i = 0; 1 < n; 1++) {   // Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";  // Output ke layar 
		cin >> a[i]                     // Input dari pengguna 
	}
}

void dispaly() {  //procedure untuk menampilkan hasil 
	cout << end1;                                 // Output baris kosong
	cout << "==================================" << end1;       // Output ke layar
	cout << "Element Array yang telah tersusun" << end1;     // Output ke layar
	cout << "==================================" << end1;     // Output ke layar
	for (int j = 0; j < n; j++) {   // Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << end1;      // Output ke layar 
	}
	cout << end1                  // Output baris kosong
}

void bubbleSortArray() {   // Procedure untuk menggurutkan array deangan metode bubble sort 
	for (int i = 1; i < n; i++) {      // Looping dengan i dimulai dari 1 hingga n-i-1
		if ()



