#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Size of array = ";
	cin>>n;
	int arr[n];
	for (int i= 0 ; i<n ; i++) {
		cout<<"Enter Array elements ";
		cin>>arr[i];
	}
	for (int i = 0; i < n ; i++) {
		cout<<arr[i]<<" ";
	}
	int counteven = 0;
	int countodd = 0;
	cout<<endl;

	for (int i = 0; i < n ; i++) {
		if (arr[i] % 2==0 ) {
			counteven++;
		} else {
			countodd++;
		}

	}
	cout<<"Even = "<<counteven<<endl;
	cout<<"odd = "<<countodd<<endl;
	return 0;
}