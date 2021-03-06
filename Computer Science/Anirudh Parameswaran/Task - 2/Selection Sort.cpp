//Selection sort

#include <iostream>
using namespace std;

void select_sort(int *A) {
	int i = 0, j;
	int small, temp;
	
	for (; i < sizeof(A) - 1; i++) {
		small = i;
		for (j = i; j < sizeof(A) - 1; j++) {
			if (A[j] < A[small]) {
				small = j;
			}
		}
		temp = A[i];
		A[i] = A[small];
		A[small] = temp;
	}
}

int main() {
	int arr[] = {2, 54, 9, 23, 73, 8, 45};
	for (int i = 0; i < sizeof(arr)/4; i++)
	cout << arr[i] << '\t';
	
	cout << endl;
	
	select_sort(arr);
	
	for (int i = 0; i < sizeof(arr)/4; i++)
	cout << arr[i] << '\t';
}
