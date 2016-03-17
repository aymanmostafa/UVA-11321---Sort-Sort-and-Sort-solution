//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

int mood;

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
//UVA 11321 - Sort! Sort!! and Sort!!!
	long long n, x;
	vector<long long> v;
	while (cin >> n >> mood && n > 0 && mood > 0) {
		cout << n << " " << mood << endl;
		v.clear();
		while (n--) {
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end(), [](long long a,long long b) {
			if(a%mood!=b%mood) return a%mood<b%mood;
			else {
				if(abs(a)%2==0&&abs(b)%2==0)
				return a<b;
				else if(abs(a)%2!=0&&abs(b)%2!=0)
				return a>b;
				else if(abs(a)%2!=0) return true;
				else return false;
			}
		});
		for (auto i : v)
			cout << i << endl;
	}
	cout << n << " " << mood << endl;
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
