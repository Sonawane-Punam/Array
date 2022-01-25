#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int minimumswap(int *arr,int n)
{
    int icnt=0,temp;
    int mid=n/2;
    for(int j=mid;j>0;j--)
    {
        for(int i=0;i<j;i++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                icnt++;
            }
        }
    }

    for(int j=mid;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                icnt++;
            }
        }
    }
   return icnt;
}
int main()
{
    int n;
    cout<<"Enter length\n";
    cin>>n;
    int *arr=new int[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ret=minimumswap(arr,n);
    cout<<"Number of swap is"<<ret<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
