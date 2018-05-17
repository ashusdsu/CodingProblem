#include <iostream>
#include <string>


using namespace std;

int main()
{
//Give the input as inp string
  string inp = "1122212211";
  string res = "";
  int n = inp.size();
  int count = 1;
  for (int i = 0;i<n-1;i++)
  {
    if(inp[i] == inp[i+1])
    {
      count++;
    }
    else
    {
      res += to_string(count) + inp[i];
      count = 1;
    }
  }

  res += to_string(count) + inp[n-1];
  cout<<res<<endl;
  return 0;
}
