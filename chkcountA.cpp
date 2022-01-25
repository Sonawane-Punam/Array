//Find largest consicative consequence(......Array must be sorted......)
#include<iostream>
#include<stdbool.h>
using namespace std;
class Array
{
    private:
        int *Arr=NULL;
        int N=0;
        int K=0;
    public:
        Array(int *Brr,int n,int k)
        {
            Arr=Brr;
            N=n;
            K=k;
        }
        void chkcount()
        {
            int icnt=0;
            int temp[N],m=0;
            for(int i=0;i<N;i++)
            {
                icnt=0;
                for(int j=i;j<N;j++)
                {
                    if(Arr[i]==Arr[j])
                    {icnt++;}
                }
                if((icnt-1)>=(N/K))
                {
                   temp[m]=Arr[i];
                   m++;
                }
            }
            cout<<"Number present in N/k times is :";
            for(int i=0;i<m;i++)
            {
                cout<<temp[i]<<" ";
            }
        }
};
int main()
{
    int N,k;

    cout<<"Enter size of array \n";
    cin>>N;

    cout<<"Enter Number \n";
    cin>>k;
    int *Arr= new int[N];
    cout<<"Enter the Elements \n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    Array obj(Arr,N,k);
    obj.chkcount();
}