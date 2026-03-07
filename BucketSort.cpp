#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void BucketSort(float a[],int n)
{   vector<float>buckets[n];
     for(int i=0;i<n;i++)
	{
		int bucketIndex=n*a[i];
		buckets[bucketIndex].push_back(a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sort(buckets[i].begin(),buckets[i].end());
	}
	int index=0;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<buckets[i].size();++j )
		{
			a[index++]=buckets[i][j];
		}
	}
}
int main()
{
   int n;
   float a[100];
   cout<<"Enter n value: ";
    cin>>n;
   for(int i=0;i<n;i++)
  {
      cout<<"Enter data of array:";
       cin>>a[i];	
  }
   cout<<"\nThe original array:";
   for(int i=0;i<n;i++)
   {
	cout<<a[i]<<",";
    }
   BucketSort( a, n);
   cout<<"\nSorted array:";
   for(int i=0;i<n;i++)
   {
	cout<<a[i]<<",";
    }
    
return 0;
}


