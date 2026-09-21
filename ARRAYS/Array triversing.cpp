#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of arrray: ";
	cin>>n;
	int arr[n];
	//taking elements
	for (int i=0;i<n;i++){
		cout<<"Enter the nummber for index "<<i+1<<" :";
		cin>>arr[i];
	}
	//displaying the araray in reverse order is called triversing of array
	cout<<"Reversed Array" <<endl;
	cout<<"[";
	for(int i=n-1;i>=0;i--){//array start from n-1 bczindexes start from 0
		cout<<arr[i]<<",";
	}cout<<"]";
	return 0;
}