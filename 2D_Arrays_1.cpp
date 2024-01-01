// Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include<iostream>
using namespace std;
int main()
{
    int a[5][5]={{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
    }
}


// Q2:Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows = ";
    cin>>m;
    cout<<"enter columns = ";
    cin>>n;
    int a[m][n],b[m][n],i,j;
    cout<<"enter first array = \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    cout<<"enter second array = \n";
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
        cin>>b[i][j];
        a[i][j]=a[i][j]+b[i][j];
         }
    }
    cout<<"sum = \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
    }
}



// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows = ";
    cin>>m;
    cout<<"enter columns = ";
    cin>>n;
    int a[m][n],l1,r1,l2,r2,i,j,sum=0;
    cout<<"enter array = \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter first coordinate l1 and r1 = ";
    cin>>l1>>r1;
    cout<<"enter second coordiante l2 and r2 = ";
    cin>>l2>>r2;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i>=l1 && i<=l2) && (j>=r1 && j<=r2))
            sum+=a[i][j];
        }
    }
    cout<<"sum of rectangle = "<<sum;
}




// Q4: Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows = ";
    cin>>m;
    cout<<"enter columns =";
    cin>>n;
    int a[m][n],i,j,l=INT_MIN;
    cout<<"enter array = \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
        cin>>a[i][j];
        if(a[i][j]>l)
        l=a[i][j];
        }
    }
    cout<<"largest = "<<l;
}


// Q5: Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows = ";
    cin>>m;
    cout<<"enter coloumns = ";
    cin>>n;
    int a[m][n],i,j,sum=0,max=INT_MIN,row=0;
    cout<<"enter array = \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        if(sum>max)
        {
        max=sum;
        row=i;
        }
    }
    cout<<"row having max sum = "<<row+1;
}



// Q6: Write a program to display the element of middle row and elements of middle column of a 2d matrix.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of odd square matrix = ";
    cin>>n;
    int a[n][n],i,j;
    cout<<"enter array = \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    cout<<"print = \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n/2 || j==n/2)
            cout<<a[i][j]<<" ";
            else
            cout<<"   ";
        }
        cout<<endl;
    }
}

