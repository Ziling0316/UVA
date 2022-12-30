#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    vector<int> table;
    for (int i = 0; i < 20000; i++){
        table.push_back( (i*(i+1))/2 );
    }
    while(cin >> n && n){
        vector<int>::iterator it = upper_bound(table.begin(), table.end(), n);
        cout << *it-n << " " << it-table.begin() << endl;
    }
    return 0;
}