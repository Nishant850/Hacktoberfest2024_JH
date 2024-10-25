#include<iostream>
#include<math.h>
 
using namespace std;
 
// A function to print array element according to the code in the argument list.
void print(char code[], int arr[], int n)
{
	int i;
	cout<<"\t{ ";
	for(i = 0; i < n; i++)
	{
		// Print if the corresponding value is '1'.
		if(code[i] == '1')
			cout<<arr[i]<<" ";
	}
	cout<<"}\n";
}
 
// A function to generate subset by binary counting.
int BinaryCounting(int arr[], int n)
{
	int r, i, l;
	char binary[] = "0000";
	r = pow(2, n);
 
	for(i = 0; i < r; i++)
	{
		print(binary, arr, n);
		l=n-1;
 
		// Incrementing the binary value with each iteration.
		h:
		if(binary[l] == '0')
			binary[l] = '1';
		else
		{
			binary[l] = '0';
			l--;
			goto h;
		}
	}
}
 
int main()
{
	int i, n;
	cout<<"\nEnter the number of element array have: ";
	cin>>n;
 
	int arr[n];
	cout<<"\n";
 
	// Take the input of the array.
	for(i = 0; i < n; i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>arr[i];
	}
 
	// Print the subset using binary counting method.
	cout<<"\nThe subset in the binary counting method: \n";
	BinaryCounting(arr, n);
 
	return 0;
}
