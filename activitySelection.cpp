#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity{
  int start;
  int end;
  Activity(s,e): start(s), end(e){ }
};

vector <Activity> convertActivity (vector <int> startTimes, vector <int> endTimes)
{
  vector <Activity> vAct;
  Activity temp;
    for (int i = 0; i<startTimes.size(); i++)
    {
      temp = new Activity(startTimes[i], endTimes[i]);
      vAct.push_back(temp);
    }
    return vAct;
}

int compare_fn(Activity a, Activity b)
{
  return (a.end < b.end);
}

void printMaxActivities(vector <Activity> vAct)
{
  sort(vAct.begin(), vAct.end(), compare_fn);
  for (int i =0;i<vAct.size(); i++)
  {
    cout<<vAct[i].start<<" : "<<vAct[i].end<<endl;
  }

}

int main()
{
  #TODO: later
  vector <int> startTimes = {};
  #TODO: later
  vector <int> endTimes = {};
  vector <Acitivity> act = convertActivity(startTimes, endTimes);
  printMaxActivities(act);

  return 0;
}
