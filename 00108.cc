#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    int arr[105][105], table[105][105];
    while(cin >> n && n){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> arr[i][j];
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                table[i][j] = arr[i][j]+table[i-1][j];
            }
        }
        int num_max = INT_MIN;
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= n; j++){
                int num = 0;
                for(int k = 1; k<=n; k++){
                    num+=table[j][k]-table[i-1][k];
                    if(num>num_max){
                        num_max = num;
                    }
                    if(num<0){
                        num = 0;
                    }
                }
            }
        }
        cout << num_max << endl;
    }
    return 0;
}