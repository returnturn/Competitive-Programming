#include <iostream> 
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <bitset>
#include <numeric>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <cassert>

using namespace std;
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vb = vector<bool>;
using vvi = vector<vi>;
using vii = vector<ii>;
using vvii = vector<vii>;

const int INF = 2000000000;
const ll LLINF = 9000000000000000000;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll a, b, k;
	cin >> k >> a >> b;
	
	if (b < 0) {
		a = -a;
		b = -b;
		swap(a, b);
	}
	
	ll ans = b / k;
	if (a > 0) ans -= (a-1) / k;
	if (a < 0) ans += (-a) / k;
	if (a <= 0 && 0 <= b) ans++;
	
	cout << ans << endl;
	
	return 0;
}
