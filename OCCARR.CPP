#include<iostream.h>
#include<conio.h>
void main()
 {
   clrscr();
   int arr[11],n;
   for(int i=0;i<11;i++)
    cin>>arr[i];
   int count =0;
   cout<<"\nEnter the value of n whose number of occurence is to be find";
   cin>>n;
   for (i=0;i<11;i++)
    {
     if(n==arr[i])
       count++;
     }
    cout<<"count is"<<count;
    getch();
 }