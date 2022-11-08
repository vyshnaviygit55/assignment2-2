#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,count=0,k=0;
    cout<<"Enter the number of rows and columns of the matrix\n";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter the elements of the matrix\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
                count++;
        }
    }
    if(count>r*c/2)
    {
        cout<<"Not a sparse matrix\n";
        return 0;
    }
    cout<<"The sparse matrix is\n";
    int b[3][count];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                b[0][k]=i;
                b[1][k]=j;
                b[2][k]=a[i][j];
                k++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<count;j++)
            cout<<b[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
