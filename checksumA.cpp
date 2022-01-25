//check if there is any subarray whose sum is 0.
#include<iostream>
#include<stdbool.h>
using namespace std;
class Array
{
    private:
        int *Arr=NULL;
        int N=0;
    public:
        Array(int *Brr,int n)
        {
            Arr=Brr;
            N=n;
        }
        bool subarray()
        {
            for(int i=0;i<N;i++)
            {
                int sum=0;
                for(int j=i;j<N;j++)
                {
                    sum=sum + Arr[j];
                    if(sum==0)
                    {
                       return true;
                    }
                }
            }
        }
};
int main()
{
    int N;

    cout<<"Enter size of array \n";
    cin>>N;

    int *Arr= new int[N];
    cout<<"Enter the Elements \n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    Array obj(Arr,N);
    bool bret=obj.subarray();
   if(bret==true)
   {
       cout<<"There is subarray whose sum is 0";
   }
   else
   {
        cout<<"There is No subarray whose sum is 0";
   }
}