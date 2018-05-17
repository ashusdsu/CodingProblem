#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

//Code repairing needs to be done.
int maxAreaRec(vector <int> v)
{
  stack <int> s;
  int max_area = INT_MIN;
  int cur_area;
  int prob_len;
  for (int i =0;i<v.size(); i++)
  {
    if (s.empty() || v[s.top()] <= v[i])
    {  s.push(v[i]);
        i++;
    }
    else
    {
      tp = s.top();
      s.pop();
      prob_len = s.empty()? i: i - s.top() + 1;
      cur_area = v[tp]*prob_len;
      if (max_area < cur_area)
        max_area = cur_area;
    }


  }
  return max_area;
}

int main()
{
  vector <int> v1 = {1,2,3,4};
  int max_area = maxAreaRec(v1);
  cout<<"Maximum Area of the rectangle"<<max_area<<endl;
  return 0;
}
