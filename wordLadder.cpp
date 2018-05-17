#include <iostream>
#include <vector>
#include <list>
#include <climits>
using namespace std;

vector <vector <string>> res;
int m = INT_MAX;
int resultList =

int findDistance(string a, string b)
{
  int count = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] != b[i])
    {
      count++;
    }
  }
  return count;
}

void findLadder(list <string> wordList, string beginWord, string endWord, vector <string> resultList)
{
  if (findDistance(beginWord, endWord) == 0)
  {
    if (resultList.size() < m)
    {
      m = resultList.size();
      res.push_back(resultList);
    }
    return ;
  }

  if (beginWord == "" && endWord == "")
  {
    return ;
  }

  for (list<string>::i = wordList.begin(); i != wordList.size(); i++)
  {
    if (findDistance(*i, beginWord) == 1)
    {
      wordList.erase(i);
      resultList.push_back(beginWord);
      findLadder(wordList, *i, endWord, resultList);
      resultList.pop_back(beginWord);
      wordList.push_back(i);
    }
    // else
    // {
    //
    // }
  }
}

int main()
{
  begingWord = "hit";
  endWord = "cog";
  vector <string> wordList = {"hot","dot","dog","lot","log","cog"}
  vector <string> resultList;
  findLadder(wordList, begingWord, endWord, resultList);
  for (auto i : resultList)
  {
    cout <<i<<endl;
  }
  return 0;
}
