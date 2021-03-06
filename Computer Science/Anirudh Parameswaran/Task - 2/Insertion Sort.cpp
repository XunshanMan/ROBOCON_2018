//Insertion sort

#include <iostream>
using namespace std;

int arr[] = {23, 20, 2, 54, 12, 67, 29, 34, 11, 89, 16, 25};
	;

void ins_sort() {
	for (int i = sizeof(arr)/4; i >= 0; i--)
	arr[i + 1] = arr[i];
	arr[0] = 0;
	
	int key, i;
	for (int j = 2; j <= sizeof(arr)/4; j++) {
		key = arr[j];
		i = j - 1;
		
		while (i > 0 && arr[i] >S key) {
			arr[i + 1] = arr[i];
			i = i - 1;
		}
		arr[i + 1] = key;
	}
	cout << endl;
	
	for (int i = 0; i < sizeof(arr)/4; i++)
	arr[i] = arr[i+1];
}

int main() {
	
	for (int i = 0; i < sizeof(arr)/4; i++)
	cout << arr[i] << '\t';
	
	ins_sort();
	
	for (int i = 0; i < sizeof(arr)/4; i++)
	cout << arr[i] << '\t';
	
	return 0;
}
