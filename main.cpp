//Vincent Lopez
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  vector<string> list;
  char input;
  string item;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    if(list.size() != 0)
    {
      cout<<"\n (D)elete last item";
    }
      cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if(input == 'a'|| input == 'A')
    {
      cout<<"What is the item?\n";
      cin>>item;
      {
        list.push_back(item);
      } 

    }
    if ((input == 'd' || input == 'D') && list.size() != 0)
    {
      cout<<list[list.size()-1]<<" was deleted from the list. \n";
      list.pop_back();

    }
  } while (input!='q' && input!='Q');

  if (list.size() != 0)
  {
    cout<<"==ITEMS TO BUY==\n";
  }

  for (int index = 0; index < list.size(); index++)
  { 
    cout<<index+1<<" "<<list[index]<<endl;
  }
  if(list.size() == 0)
  {
    cout<<"No items to buy!\n";
  }

  return 0;
}
