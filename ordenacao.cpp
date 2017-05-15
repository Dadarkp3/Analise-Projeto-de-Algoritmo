#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(int *A, int n);

int main(){
	int n, i;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++){
		cin >> A[i];
	} 
	insertion_sort(A, n);
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;	
}

void insertion_sort(int *A, int n){
	for(int j = 1; j < n; j++){
		int chave = A[j];
		int i = j - 1;
		while( i >= 0 && A[i] > chave){
			A[i + 1] = A[i];
			i--;
		}
		A[i + 1] = chave;	 
	}
}
