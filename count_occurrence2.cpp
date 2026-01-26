#include <iostream>
using namespace std;

int main()
{
  int i, a[5], key1, key2;
  int countkey1 =0, countkey2= 0;

  cout<<" Enter the 5 element: ";
  for(i=0; i<5; i++)
    cin>>a[i];

  cout<< " 1st key element you want to find? : ";
  cin>> key1;

  cout<< " 2nd key element you want to find? : ";
  cin>> key2;

  for(i=0; i<5; i++)
    if(key1==a[i])
      countkey1++;
    else if(key2==a[i])
      countkey2++;

  if( countkey1>0 and countkey2>0)
    {
      cout<<"\n!!ELEMENT FOUND!!\n";
      cout<<"Key1 element found " << countkey1 << " times\n";
      cout<<"Key2 element found " << countkey2 << " times";
    }
    else
        cout<<"!!NOT FOUND!!";
}
