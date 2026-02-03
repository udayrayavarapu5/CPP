#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void selectionsort(int ar[],int n ){
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(ar[min]>ar[j])
			{
				min=j;
			}
		}
		swap(ar[i],ar[min]);
	}
}
void printArray(int ar[],int n)
{
	for(int i=0;i<n;i++)
	cout<<"ar[i]:"<<ar[i]<<endl;
}
int main()
{
	int n=5;
	int ar[]={5,8,3,0,1};
	cout<<"original array:"<<endl;
	printArray(ar,n);
	selectionsort(ar,n);
	cout<<"sorted array(ascending order):"<<endl;
	printArray(ar,n);
	return 0;
}
