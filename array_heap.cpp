#include <iostream>
using namespace std;

int main() {
// Aloca um array de doubles no heap (free store).
	double *arrDouble = new double[50];

// Checa alocação.
	if(!arrDouble)
		return 0;

// Inicializa.
	for(int i = 0; i < 50; i++)
		arrDouble[i] = i * 1000;
// O mesmo que: *(arrDouble + i) = i * 100;

// Exibe.
	for(int i = 0; i < 50; i++)
		cout << "arrDouble[" << i << "] = " << arrDouble[i] << "\n";

// Deleta array.
	cout << "Deletando array...\n";
	if(arrDouble)
		delete[] arrDouble;

// O mesmo que: delete arrDouble;
return 0;
}
