#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class DigitStringDiv2 {
public:
	int v(string s){
		int r = 0;
		for (int i = 0; i < s.size(); i++){
			r *= 10;
			r += s[i] - '0';
		}
		return r;
	}
	int count(string S, int X) {
		int c = 0;
		for (int i = 0; i < S.size(); i++){
			if (S[i] == '0')continue;
			string y = "";
			for (int j = i; j < S.size(); j++){
				y += S[j];
				c += (v(y) > X);
			}
		}
		return c;	
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!