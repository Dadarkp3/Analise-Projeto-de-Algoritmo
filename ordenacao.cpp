#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& A);

int main(){
	int n, i, valor;
	cin >> n;
	vector <int> A;
	for(int i = 0; i < n; i++){
		cin >> valor;
		A.push_back(valor);
	} 
	insertion_sort(A);
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;	
}

void insertion_sort(vector<int>& A){
	for(int j = 1; j < A.size(); j++){
		int chave = A[j];
		int i = j - 1;
		while( i >= 0 && A[i] > chave){
			A[i + 1] = A[i];
			i--;
		}
		A[i + 1] = chave;	 
	}
}
