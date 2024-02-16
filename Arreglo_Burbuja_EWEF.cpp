#include <iostream>  //biblioteca estandar de c++ 

void bubbleSort(int arr[], int n) {  //define la función llamada BubbleSort
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){
	int arr[10] = {5, 52, 9, 1, 7, 26, 8, 32, 4, 15};
	
	std::cout << "Arreglo Original: ";  //imprime el arreglo original
	for (int i = 0; i < 10; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	bubbleSort(arr, 10);  //llama a la funcion BubbleSort
	std::cout << "Arreglo Ordenado: ";  // imprime el arreglo ya ordenado
	for (int i = 0; i < 10; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
