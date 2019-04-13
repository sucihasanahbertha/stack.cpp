#include <iostream>
#define MAX 10
using namespace std;

struct Stack 
{
	int top, data[MAX];
} Tumpukan;

void init() 
{
	Tumpukan.top = -1;
}

bool isEmpty() 
{
	return Tumpukan.top == -1;
}

bool isFull() 
{
	return Tumpukan.top == MAX - 1;
}

void push() 
{
	if (isFull()) 
	{
	cout << "\nStack penuh" << endl;
	} 
	else 
	{
	Tumpukan.top++;
	cout << "\nMasukkan data = ";
	cin >> Tumpukan.data[Tumpukan.top];
	cout << "Data " << Tumpukan.data[Tumpukan.top] << " masuk ke stack"<< endl;
	}
}

void pop() 
{
	if (isEmpty()) 
	{
	cout << "\nData kosong\n" << endl;
	} else {
	cout << "\nData " << Tumpukan.data[Tumpukan.top] << " sudah terambil"<< endl;
	Tumpukan.top--;
	}
}

void printStack() 
{
	if (isEmpty()) 
	{
	cout << "Stack kosong";
	} 
	else 
	{
	cout << "\nStack : ";
	for (int i = Tumpukan.top; i >= 0; i--)
	cout << Tumpukan.data[i] << ((i == 0) ? "" : ",");
	}
}

int main() 
	{
	int n, data;
	init();
	do {
	printStack();
		cout << "\n1. Input (Push)"<<endl;
		cout<< "2. Hapus (Pop)"<<endl;
		cout<< "3. Keluar"<<endl;
		cout<< "Masukkan Pilihan Anda: ";
	cin >>n;
	switch (n) 
	{
	case 1:
		push();
	break;
	case 2:
		pop();
	break;
	default:
	cout << "Maaf pilihan tidak tersedia" << endl;
	break;
	}
	} 
	while (n != 3);
	return 0;
}
