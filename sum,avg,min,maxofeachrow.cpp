#include <iostream>
using namespace std;
int main()
{
  int i, j,sum=0, avg=0, a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
  
  for (i=0;i<3;i++)
  {
      int max=a[i][0] ,min=a[i][0];
      sum =0;
      avg=0;
      for(j=0;j<3;j++)
      {
        cout<<a[i][j]<<" ";
        sum= sum+ a[i][j];
        avg= sum/3;
        if(a[i][j] >max)
            max = a[i][j];
        if(a[i][j]< min)
            min= a[i][j];
      }
    cout<<" = "<<sum<<"  ";
    cout<<" = "<<avg<<"  ";
    cout<<" = "<<max<<"  ";
    cout<<" = "<<min<<"\n";
  }
}
