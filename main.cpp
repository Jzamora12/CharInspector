//Author:Joseluis Zamora
#include<iostream>

using namespace std;

int main()
{
  char Character;
  cout<<"What character do you want to know about?\n";
  cin >> Character;
  //when user's entry is between A-Z...
  if ( Character >= 65 && Character <= 90 )
  {
  cout << "" << Character;
  cout<<" is an upper case letter!\n";
  }
  //when user's entry is between a-z...
  else if ( Character >= 97 && Character <= 122) 
  {
  cout << "" << Character;
  cout<<" is a lower case letter!\n";
  }
  //in all other cases...
  else
  {
  cout << "" << Character;
  cout<<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: " << int(Character) <<endl;

  return 0;
}
