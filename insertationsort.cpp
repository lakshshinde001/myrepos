#include<iostream>
using namespace std;
void insert(int x[], int N)
{
    int i,j,k,temp;
    for(i=1;i<N-1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(x[i]<x[j])
            {
                temp=x[i];
                for(k=i;k>j;k--)
                {
                    x[k]=x[k-1];
                }
                x[k]=temp;
                break;
            }
        }
    }
}
int main()
{
    int n,i;
    cout<<"Enter Length of array=";
    cin>>n;

    int a[n];
    cout<<"Enter Array=";
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"Sorted Array=";
    insert(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;

    return 0;
}
