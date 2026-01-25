#include <iostream>
using namespace std;
int main()

{
  int i, key, a[5];
  bool found= false;

  cout<< "Enter a 5 number : ";
  for(i=0; i<5; i++)
    cin>>a[i];

  cout<< "Enter the key element you want to search : ";
  cin>>key;

  for(i=0; i<5; i++)
    if(a[i]==key)
    {
      found= true;
      break;
    }

  if(found== true)
    cout<< "!!ELEMENT FOUND!!";
  else
    cout<< "!!ELEMENT NOT FOUND!!";
}
