#include<iostream.h>
#include<conio.h>
void main()
 {
   clrscr();
   int arr[5],n,flag=0;
   cout<<"\nEnter the Element to be searched";
   cin>>n;
   for(int i=0;i<5;i++)
    cin>>arr[i];
   for(i=0;i<5;i++)
    {
      if(n==arr[i])
	 flag=1;

    }
   if(flag==1)
    cout<<"\nElement found ";
   else
    cout<<"\nElement not found";
   getch();
 }