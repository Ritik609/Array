//Wap to move sort without any sorting algorithm
#include<iostream>
#include<array>
using namespace std;
int main() {
int n,arr[6];
cin>>n;
int temp[n];
for(int i=0;i<n;i++)
  cin>>arr[i];
int j=0;
for(int i=0;i<n;i++)
 {
 	 if(arr[i]==0)
 	   temp[j++]=arr[i];
 	   
 }
 for(int i=0;i<n;i++)
  {
  	 if(arr[i]==1)
  	  temp[j++]=arr[i];
  }
 for(int i=0;i<n;i++)
  {
  	 if(arr[i]==2)
  	  temp[j++]=arr[i];
  }
 for(int i=0;i<n;i++)
  {
  	arr[i]=temp[i];
  }
for(int i=0;i<n;i++)
cout<<" "<<arr[i];
return 0;
}
