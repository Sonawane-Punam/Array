//Find comman element int 3 sorted array
#include<iostream>
using namespace std;
class Array
{
    public:
       
        void CommanA(int *Arr,int *Brr,int *Crr)
        {
            int temp[5],k=0;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    if(Arr[i]==Brr[j])
                    {
                        temp[k]=Brr[j];
                        k++;
                    }
                }
            }
            int temp1[5];
            k=0;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    if(temp[i]==Brr[j])
                    {
                        temp1[k]=Brr[j];
                        k++;
                    }
                }
            }
            for(int j=0;j<k;j++)
            {
                cout<<temp1[j]<<" ";
            }
        }
};
int main()
{
    int Arr[]={1,2,3,4,5};
    int Brr[]={4,6,7,8,9};
    int Crr[]={3,11,13,4,12};
    Array obj;
    obj.CommanA(Arr,Brr,Crr);
}