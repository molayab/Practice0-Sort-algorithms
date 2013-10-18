#include <iostream>
#include <string>
#include <vector>

#define nil NULL
#define YES true
#define NO false

using namespace std;

vector<string> arr;

void bubbleSort() {
	bool isSorted = NO;
	
	while (!isSorted) {
        isSorted = YES;
		
        for (int i = 0; i < arr.size() - 1; ++i) {
            if (arr[i] > arr[i + 1]) { // http://www.cplusplus.com/reference/string/string/operators/
				string tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				
				isSorted = NO;
			}
        }
    }
}

int main(int argc, char * argv[]) {
    string buffered;
    clock_t startTime;
    clock_t finishTime;
    
    while (cin >> buffered) {
        arr.push_back(buffered);
    }

    cout << "--> Los datos han sido ingresados correctamente." << endl;
    cout << " -> La longitud del arreglo creado es de: " << arr.size() << " items" << endl;
    cout << " -> Se comenzara la organizacion del arrglo con el ";
    cout << "algoritmo sortBurbuja." << endl << "Por favor espere... puede tardar varias horas." << endl;

    startTime = clock();

    bubbleSort();

    finishTime = clock();

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;
    }

	cout << endl;
    cout << "--> Estadisticas:" << endl;
    cout << " -> Inicio @ " << startTime << endl;
    cout << " -> Finalizo @ " << finishTime << endl;
    cout << " -> Tardo: " << (finishTime - startTime) / (double)CLOCKS_PER_SEC << " Sec" << endl;
    cout << "--->" << endl;
    cout << " Por: Mateo Olaya, Pascual Gomez | Universidad EAFIT" << endl;

    return 0;
}


