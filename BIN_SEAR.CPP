#include<iostream.h>
#include<conio.h>
void bin_search(int a[8],int n,int key)
 {
   int l=0;
   int u=n-1;
   
   while(l<u)
    {	
	int mid=l + (u - l) / 2;	   //the mid should be calculated within this while loop and modified mid formula will handle overflow case
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
	 break;   //to break the loop
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
