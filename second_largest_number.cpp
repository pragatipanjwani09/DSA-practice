#include <iostream>
using namespace std;

int main()
{
  int i, a[5];

  cout<<" Enter 5 elements: ";
  for(i=0; i<=4; i++)
    cin>> a[i];

  int max= a[0],max2= a[1];
  
  if(max < max2)
  {
    max= a[1];
    max2= a[0];
  }
  
  for(i=2; i<5; i++)
    if(a[i]>max and a[i]> max2)
      {
        max2= max;
        max= a[i];
      }
    else if(a[i]> max2 and a[i]!= max) 
      max2= a[i];

  cout<<" The maximum number is : "<<max <<" and 2nd maximum number is : "<<max2;
}
    
