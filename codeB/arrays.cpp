#include<iostream>
using namespace std ;




int  main()
{
    int arr[]={11,12,13,14};
    
     int n = sizeof(arr) / sizeof(arr[0]);
     
     for(int i=0;i<=n;i++)
     {
         arr[i]==arr[i+1]
         arr[i+1]==[n-1]
         arr[n-1]==arr[i]
     }
     
     cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3];
    
    
}