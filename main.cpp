#include<iostream>
 
using namespace std;
 
int main()
{
	int elements[50],n,i,j,k;
	cout<<"Enter the number of elements you wanna enter: ";
	cin>>n;
    cout<<"====================================================="<<endl;
	cout<<"Enter the elements and separate them by space: "<<endl; 
	
	for(i=0;i<n;++i)
		cin>>elements[i];
		
	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(elements[j]>elements[j+1])
			{
				k=elements[j];
				elements[j]=elements[j+1];
				elements[j+1]=k;
			}
	}
	
	cout<<"Elements after bubble sort:";
	for(i=0;i<n;++i)
		cout<<" "<<elements[i];
        
    cout<<endl;
		
	return 0;
}