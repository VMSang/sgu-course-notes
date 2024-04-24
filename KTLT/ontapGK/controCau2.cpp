#include <bits/stdc++.h>
using namespace std;

void nhap(int *&a, int &n)
{
    cin>>n;
    a = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
void xuat(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
void caub(int *a, int n, int &max1, int &max2)
{
    max1 = max2 = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
    }
    cout<<"lon nhat "<<max1<<endl;
    cout<<"lon nhi"<<max2<<endl;
}

void insersionSort(int *&a, int n)
{
    for(int i=1; i<n; i++)
    {
        int value = a[i], pos = i - 1;
        while (pos >= 0 && value < a[pos])
        {
            a[pos + 1] = a[pos];
            pos --;
        }
        a[pos+1] = value;
    }
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }
}
int main()
{
    int *a; int n;
    nhap(a,n);
    xuat(a,n);
    int max1, max2;
    caub(a,n,max1,max2);
    insersionSort(a, n);
    delete [] a;
    return 0;
}
