#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;



int rodCutting(vector <int> &v, int cut)
{

	if(cut <= 0)
	{
		return 0;
	}
	int maxPrice = INT_MIN;
	for (int i = 0 ; i<cut; i++)
	{
		maxPrice = max(maxPrice ,v[i] + rodCutting(v, cut-i-1));
		// cout<<maxPrice<<endl;
	}
	return maxPrice;
}


int main() {
	vector <int> v = {1, 5, 8, 9, 10, 17, 17, 20};
	cout<<rodCutting(v, v.size());
	// your code goes here
	return 0;
}
