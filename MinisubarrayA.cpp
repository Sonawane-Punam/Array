//Find maximum sum of contiguous subarray(kadane's Algorithm)
//complexity O(n^2)
#include<iostream>
using namespace std;
class Array
{
    private:
        int *Arr=NULL;
        int N=0;
        int X=0;
    public:
        Array(int *Brr,int n,int sum)
        {
            Arr=Brr;
            N=n;
            X=sum;
        }
        int Minisubarray()
        {
            int sum=0,start=0,end=0,length=N+1;
            while(end < N)
            {
                while((sum <= X) && (end <N))
                {
                    sum = sum + Arr[end];
                    end++;
                }
                while((sum > X) && (start < N))
                {
                    if((end-start)< length)
                    {
                        length=end-start;
                    }
                    sum = sum - Arr[start];
                    start++;
                }
            }
            return length;
        }
};
int main()
{
    int N,sum=0;

    cout<<"Enter size of array \n";
    cin>>N;

    int *Arr= new int[N];
    cout<<"Enter the Elements \n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Enter sum \n";
    cin>>sum;
    Array obj(Arr,N,sum);
    int ret=obj.Minisubarray();
    cout<<"length of Minimum subarray sum is :"<<ret<<"\n";
}