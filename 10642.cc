#include <iostream>

using namespace std;
void solve(int i) {
    long long x0, y0, x1, y1, s0, s1;
    int step;
    cin >> x0 >> y0 >> x1 >> y1;
    cout << "Case " << i << ": "; 
    s0 = (x0 + y0 ) * (x0 + y0 + 1) / 2 + x0;
    s1 = (x1 + y1 ) * (x1 + y1 + 1) / 2 + x1;
    cout << s1 - s0 << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}