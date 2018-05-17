#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int jumpGame(vector <int> &v)
{
  vector <int> jumps (v.size(), INT_MAX);
  if (v.size() == 0 || v[0] == 0)
    return 0;

  jumps[0] = 0;
  for (int i = 1;i<v.size(); i++)
  {
    for (int j = 0;j<i;j++)
    {
      if (i<= j+v[j] && jumps[j] != INT_MAX)
      {
        jumps[i] = min(jumps[i], jumps[j] + 1);
      }
    }
  }
  return jumps[v.size()-1];
}

int main()
{
  vector <int> v = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
  cout<<"The minimum number of jumps : "<<jumpGame(v);
  return 0;
}
