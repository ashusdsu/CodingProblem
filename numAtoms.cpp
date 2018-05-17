#include <iostream>
#include <string>
#include <map>
using namespace std;
#define UPPER_CASE_ASCII_LEFT 22;
#define UPPER_CASE_ASCII_RIGHT 22;
#define LOWER_CASE_ASCII_LEFT 22;
#define LOWER_CASE_ASCII_RIGHT 22;
#define NUMBER_LEFT 22;
#define NUMBER_RIGHT 22;
// int handleBrackets(string s2)
// {
//   if ()
// }

void formulaParser(string s1, map <string, int> m, int start)
{
  stack <char> brackets;
  if (s1 == "")
      return res;

  int multiple = 1;
  if (s1[0] == )

  for(int i = 0;i<s1; i++)
  {
    string elem_name = "";
    string value = "";
    if (s1[i] == '(')
    {
      formulaParser(s1, map<string, int> m, i);
      continue;
    }
    else if (s1[i] == ')')
    {
    	if (NUMBER_LEFT < s1[i+1] && s1[i+1] < NUMBER_RIGHT)
    	{
    		multiple = s1[i+1];
    	}

      for (map <string, int> it = m.begin(); it != m.end(); it++)
      {
          //Multply all the values on it
          it->second = it->second * multiple;

      }
      i++;
      return ;
    }
    else if (UPPER_CASE_ASCII_LEFT<s1[i] && s1[i] < UPPER_CASE_ASCII_RIGHT)
    {
      elem_name += s1[i];
      while(i < s1.size())
      {
        if (LOWER_CASE_ASCII_LEFT< s1[i+1] && s[i+1] <LOWER_CASE_ASCII_RIGHT)
        {
          elem_name += s1[++i];

        }
        else if (NUMBER_LEFT < s1[i+1] < NUMBER_RIGHT)
        {
          value += s1[++i];
        }
      }
    }
    else
    {
      cout<<"Error : Please Try again"<<endl;
      cout<<s1<<endl;
    }

    if (m.find(elem_name) != m.end())
    {
      if (value == "")
        m[elem_name] = 1;
      else
        m[elem_name] = atoi(value);
    }
    else
    {
      if (value == "")
        m[elem_name] += 1;
      else
        m[elem_name] += atoi(value);
    }
  }
}

int main()
{
  string s = "H2SO4";
  map <string, int> m;
	formulaParsing(s, m, 0);
	for (map<string, int> it = m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" : "<<it->second<<endl;
	}

	return 0;
}
