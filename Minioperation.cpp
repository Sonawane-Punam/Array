//minimum operation required to make given array as palindrom
#include<iostream>
using namespace std;
class Array
{
    public:
        int Minioperation(int *Arr,int N)
        {
            int i=0,j=N-1,icnt=0;
           while(i<=j)
           {
               if(Arr[i]==Arr[j])
               {
                   i++;
                   j--;
               }
               else if(Arr[i] < Arr[j])
               {
                   Arr[i+1]=Arr[i] + Arr[i+1];
                   i++;
                   icnt++;
               }
               else
               {
                    Arr[j-1]=Arr[j] + Arr[j-1];
                    j--;
                    icnt++;
               }
           }
            return icnt;
        }
            
};
int main()
{
    int N,k;
    cout<<"Enter Size of First Array \n";
    cin>>N;

    int *Arr = new int[N];

    cout<<"Enter No of element \n";
    for(int i=0;i<N;i++)
    {
        cin>>Arr[i];
    }
    Array obj;
    int ret=obj.Minioperation(Arr,N);
    cout<<"Minioperation required is :"<<ret;
}