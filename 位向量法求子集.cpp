#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
///���ظ�Ԫ�ص��Ӽ������㷨,�Ӽ���
///λ������,�Ӽ�����
#define maxn 1000
int A[maxn];
void print_subset(int *A,int n,int k)
{
    if(k==n)
    {
        for(int i=0;i<n;i++)
            if(A[i])
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    A[k]=1;
    print_subset(A,n,k+1);
    A[k]=0;
    print_subset(A,n,k+1);
}
int main()
{
   int n;
   cin>>n;
   print_subset(A,n,0);

   return 0;
}
