#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, m;
    vector<int> ans;
    while(cin >> n >> m){
        bool flag = true;
        if(m<=1 || n<=1 || n<m) flag = false;
        while(n!=1 && flag){
            if(n%m){
                flag = false;
                break;
            }
            ans.push_back(n);
            n/=m;
        }
        if(flag){
            for(int i = 0; i<ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << 1 << endl;
        }
        else    cout << "Boring!" << endl;
        flag = true;
        ans.clear();
    }
    return 0;
}