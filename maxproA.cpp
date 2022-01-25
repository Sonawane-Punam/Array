//Find maximum sum of contiguous subarray(kadane's Algorithm)
//complexity O(n^2)
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
        int Maxpro()
        {
            int pro=1;
            for(int i=0;i<N;i++)
            {
                pro=pro * Arr[j];
            }
            return pro;
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
    int ret=obj.Maxpro();
    cout<<"Maximum summ is :"<<ret;
}