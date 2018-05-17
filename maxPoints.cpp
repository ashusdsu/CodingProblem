#include <iostream>
using namespace std;

struct point
{
  int x, y;
  point(): x(0), y(0) {}
  point(int a, int b): x(a), y(b) {}
};


int main()
{
  vector <point> v = {point(1,2), point(3,2), point(5,3), point(4,1), point(2,3), point(1,4)};
  maxPoints()   
}
