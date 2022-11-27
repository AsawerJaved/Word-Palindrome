#include<iostream>
using namespace std;
int main()
{
	int size=5,check=0;
	char array[size];
	cout<<"Enter a word to check whether its Palindrome or not: ";
	cin>>array;                        // storing the word in an array
	for(int a=0;a<size/2;a++)              // loop will run half times the total size
	{                                      // beacuse we have to compare the half array with the other half part
		if(array[a]==array[size-a-1])    
		check++;
	}
	if(check==size/2)                   
	cout<<array<<" is a Palindrome"<<endl;
	else
	cout<<array<<" is not a Palindrome"<<endl;
	
	return 0;
}
