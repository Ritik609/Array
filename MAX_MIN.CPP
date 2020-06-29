#include<iostream.h>
#include<conio.h>
void main()
 {
   clrscr();
   int arr[5],n;
   for(int i=0;i<5;i++)
    cin>>arr[i];
    int max=arr[0];
    for(i=1;i<5;i++)
      {
	if(max<arr[i])
	  max=arr[i];

      }
    int min=arr[0];
    for(i=1;i<5;i++)
      {
	if(min>arr[i])
	  min=arr[i];

      }
    cout<<"\nMaximum Element in Array is"<<max;
    cout<<"\nMinimum Element in Array is"<<min;
 getch();
}