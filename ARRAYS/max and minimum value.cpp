#include<iostream>
using namespace std;
int main()
{
	int s;
	cout<<"Enter the size of array:" ;
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++){
		cout<<"Enter number for index "<<i+1<<" : ";
		cin>>arr[i]; 
	}
	//assuming the value at 0 index as maximum value
	int max_number=arr[0];
	int min_number=arr[0];
	int max_index=0;
	int min_index=0;
	//usnig loop to find themaximum minimum value and their index
	for(int j=0;j<s;j++){
		if(arr[j]>max_number){
			max_number=arr[j];
			max_index=j;
		}
		//now finding minimum value and minimum index
				if(arr[j]<min_number){
			min_number=arr[j];
			min_index=j;
		}
	}
	cout<<"Maximum number in array is "<<max_number<<" at index "<<max_index<<endl;
	cout<<"Minimum number in array is "<<min_number<<" at index "<<min_index<<endl;
	
	return 0;
}