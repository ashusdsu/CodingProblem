#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <int> multiplyString(string s1, string s2)
{
  vector <int> v1;
  vector <int> v2;
  int carrier = 0, val;
  vector <int> res;
  //Converting string to array of numbers
  for (int i = 0;i<s1.size(); i++)
  {
    v1.push_back(int(s1[i]));
  }
  for (int i = 0;i<s2.size();i++)
  {
    v2.push_back(int(s2[i]));
  }

//Trying to multiply array of numbers in elementary style
  for (int i = 0; i<v1.size(); i++)
  {
    for (int j = 0; j<v2.size(); j++)
    {
      val = v1[i]*v2[j];
      val += carrier;
      carrier = val/10;
      val = val%10;
      res.insert(val);
      if (j == v2.size()-1)
      {
        res.insert(carrier);
      }
    }
    int x = 0;
    while (x < i)
      res.push_back(0);
    carrier = 0;
  }
}

int main()
{
  string s1 = "123";
  string s2 = "23";
  vector <int> result = multiplyString(s1, s2);
  for (auto i : result)
  {
  }
  cout << i<<" , ";
  return 0;

}
