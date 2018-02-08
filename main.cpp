//Author:
#include<iostream>

using namespace std;

int main()
{
  char Character;
  char Character1;
  char Character2;
  cout<<"What character do you want to know about?\n";
  cin >> Character;
  //when user's entry is between A-Z...
  if ( Character>=65, Character<=90 )
  {
  cout<<" is an upper case letter!\n";
  }
  //when user's entry is between a-z...
  else if ( Character>=97, Character<=122) 
  {
  cout<<" is a lower case letter!\n";
  }
  //in all other cases...
  else 
  {
  cout<<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: " << Character; 

  return 0;
}
