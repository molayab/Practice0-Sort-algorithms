#include <iostream>
#include <string>
#include <vector>

#define YES true
#define NO false
#define nil NULL

using namespace std;
vector<string> arr;

void quickSort(int start, int end) {
	int pLeft = start, pRigth = end;
	int pivot = (int)((start + end) / 2);
	string temp;
	
	while (pLeft <= pRigth) {
		while (arr[pLeft]  < arr[pivot]) ++pLeft;
		while (arr[pRigth] > arr[pivot]) --pRigth;
		
		if (pLeft > pRigth) break;
		
		temp = arr[pLeft];
		arr[pLeft] = arr[pRigth];
		arr[pRigth] = temp;
			
		++pLeft;
		--pRigth;
	}
	
	if (start < pRigth) quickSort(start, pRigth);
	if (pLeft < end) quickSort(pLeft, end);
}

int main (int argc, char * argv[]) {
    string buffered;
	clock_t startTime;
    clock_t finishTime;
	int bytesArray = 0;

    while (cin >> buffered) {
        arr.push_back(buffered);
		bytesArray += sizeof(buffered);
    }
    
    cout << "--> Los datos han sido ingresados correctamente." << endl;
    cout << " -> La longitud del arreglo creado es de: " << arr.size() << " items" << endl;
    cout << " -> Se comenzara la organizacion del arrglo con el ";
    cout << "algoritmo quickSort." << endl << "Por favor espere..." << endl;

	startTime = clock();
	
    quickSort(0, arr.size() - 1);

	finishTime = clock();
	
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;
    }

	cout << endl;
    cout << "--> Estadisticas:" << endl;
    cout << " -> Inicio @ " << startTime << endl;
    cout << " -> Finalizo @ " << finishTime << endl;
    cout << " -> Tardo: " << (finishTime - startTime) / (double)CLOCKS_PER_SEC << " Sec" << endl;
	cout << " -> Total de elementos ordenados: " << arr.size() << endl;
	cout << " -> Tamano del arreglo: " << bytesArray << "bytes" << endl;
    cout << "--->" << endl;
    cout << " Por: Mateo Olaya, Pascual Gomez | Universidad EAFIT" << endl;
	
    return 0;
}
