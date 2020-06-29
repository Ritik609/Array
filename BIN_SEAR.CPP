#include<iostream.h>
#include<conio.h>
void bin_search(int a[8],int n,int key)
 {
   int l=0;
   int u=n-1;
   int mid=(l+u)/2;
   while(l<u)
    {
      if(a[mid]<key)
       {
	u=mid-1;
       }
      else if(a[mid]>key)
       {
	l=mid+1;
       }
      else if(a[mid]==key)
       {
	 cout<<"\n\tElement found at:-"<<mid;
       }
    }
 }
void main()
 {
  clrscr();
  int arr[8],n,key;
  cout<<"\n\t\tEnter the size of array";
  cin>>n;
  cout<<"\nEnter the element to search";
  cin>>key;
  for(int i=0;i<n;i++)
    cin>>arr[i];
  bin_search(arr[8],n,key);
  getch();
 }
