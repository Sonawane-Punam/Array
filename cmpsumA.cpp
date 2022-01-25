//Find pair of integer array whose sum is equal to given sum
#include<iostream>
using namespace std;
class Array
{
    public:
        void Inversion(int *Arr,int N,int sum)
        {
            int icnt=0,mysum=0;
            for(int i=0;i<N;i++)
            {
                for(int j=i;j<N;j++)
                {
                    mysum=Arr[i]+Arr[j+1];
                    if(mysum==sum)
                    {
                        cout<<"["<<Arr[i]<<","<<Arr[j+1]<<"]"<<" ";
                        mysum=0;
                    }
                    else
                    {
                        mysum=0;
                    }
                }
            }
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

    cout<<"Enter sum\n";
    cin>>sum;

    Array obj;
    obj.Inversion(Arr,N,sum);
    //cout<<"Inversion count is :"<<ret;
}