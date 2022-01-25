#include<iostream>
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
        void duplicate()
        {
            cout<<"Duplicate Element is :";
            for(int i=0;i<N;i++)
            {
                for(int j=i+1;j<N;j++)
                {
                    if(Arr[i]==Arr[j])
                    {
                       cout<<Arr[j]<<" ";
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
    obj.duplicate();
}