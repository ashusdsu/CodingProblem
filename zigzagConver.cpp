#include <iostream>
#include <vector>
#include <string>
using namespace std;

string zigzagConv(string s1, int n)
{
  vector <vector <char>> res(n);
  string final_res = "";
  int dir = -1;
  int count  = 0;
  for (int i = 0; i<s1.size();i++)
  {
    res[count].push_back(s1[i]);
    if (count==0 || count==n-1)
      dir = dir*-1;
    count = count + dir;
    // count++;
  }

  for (auto seq: res)
  {
  	string str(seq.begin(), seq.end());

      final_res = final_res + str;
  }

  return final_res;
}

int main ()
{
  string s1 = "PayPalisHiring";
  int n = 3;
  string final_res;
  final_res = zigzagConv(s1, 3);
  cout<<final_res;
return 0;
}
