#include<iostream>
using namespace std;
main()
{
    int a[20],n,i,num;
    cout<<"enter the number of elements:"<<endl;
    cin>>n;
    cout<<"enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"entered elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the number you want to delete"<<endl;
    cin>>num;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            a[i]=a[i+1];
        }
        else
        {
            cout<<a[i]<<" ";
        }
    }
}

