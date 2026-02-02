#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void selectionsort(int a[],int n)
{
   for(int i=n-1;i>0;i--){
      int max=0;
  	 	for(int j=1;j <= i;j++){
  	 		if(a[j]>a[max])
  	 		{
  	 		max=j;
  	 	    }
  	    }
  	    swap(a[i],a[max]);
	 }
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++){
	
	cout<<a[i]<<" ";
	cout<<endl;
   }
}
int main()
{
	int a[]={65,25,12,22,11};
	int n=sizeof(a)  /  sizeof(a[0]);
	cout<<"originalArray:"<<endl;
	printArray(a,n);
	selectionsort(a,n);
	cout<<"sorted order(assending order):"<<endl;
	printArray(a,n);
	return 0;
}

