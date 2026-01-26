#include <iostream>
using namespace std;

int main()
{
  int i, count = 0, key, a[5];
  cout<<" Enter 5 elements: ";
  for(i=0; i<5; i++)
    cin>> a[i];

  cout<<" Which key element you want to find? : ";
  cin>> key;

  for(i=0; i<5; i++)
    if(a[i] == key)
      count++;

  if(count >0)
  {
    cout<<" \n !!ELEMENT FOUND!! ";
    cout<<"\n The key element occurred " <<count <<" times.";
  }
  else
    cout<<"!!ELEMENT NOT FOUND!! ";
}
