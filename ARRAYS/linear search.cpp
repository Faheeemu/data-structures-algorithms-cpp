#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter the size of arrray: ";
	cin>>n;
	int arr[n];
	//taking elements
	for (int i=0; i<n; i++) {
		cout<<"Enter the nummber for index "<<i+1<<" :";
		cin>>arr[i];
	}
	int num;
	cout<<"Enter number to check in array : ";
	cin>>num;
	bool found=0;
	int found_index=0;
	for(int i=0; i<n; i++) {
		if(arr[i]==num) {
			found=1;
			found_index=i;
			break;
		}
	}
	//number found multiple times only the index at which first found is considered
	if(found==1) {
		cout<<"Number "<<n<<" found at index "<<found_index<<endl;
	} else
		cout<<"number not found "<<endl;
	return 0;
}