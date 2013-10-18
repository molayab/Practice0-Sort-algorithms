#include <iostream>
#include <string>
#include <vector>

#define YES true
#define NO false
#define nil NULL

using namespace std;
vector<string> arr;
string useSort;

void sift(int start, int end) {
	int root = start;
	
    while ( root * 2 + 1 < end ) {
        int child = 2 * root + 1;
        if ((child + 1 < end) && (arr[child] < arr[child + 1])) {
            child += 1;
        }
        if (arr[root] < arr[child]) {
			string tmp = arr[child];
			arr[child] = arr[root];
			arr[root] = tmp;
			
            root = child;
        }
        else
            return;
    }
}

void heapSort(bool useNativeSort=NO) {
	if (useNativeSort) { 
		//make_heap(arr.begin(), arr.end());
		//sort_heap(arr.begin(), arr.end());
		
		return;
	}
	
	int start, end;
	
	for (int i = (arr.size() - 2)/2; i >= 0; --i) {
		sift(i, arr.size());
	}
	
	for (int end = arr.size() - 1; end > 0; --end) {
		//
		string tmp = arr[end];
		arr[end] = arr[0];
		arr[0] = tmp;
		
		sift(0, end);
	}
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
    heapSort(NO);
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
