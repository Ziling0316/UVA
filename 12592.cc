#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string in_1, in_2;
    int num_1, num_2;
    map<string, string> Slogan;
    map<string, string>::iterator it;
    cin >> num_1;
    getchar();
    while(num_1){
        getline(cin, in_1);//才不會被空白分割
        getline(cin, in_2);
        Slogan[in_1] = in_2;
        num_1--;
    }
    cin >> num_2;
    getchar();
    while(num_2){
        getline(cin, in_1);
        it = Slogan.begin();
        while(it!=Slogan.end()){
            if(it->first == in_1){
                cout << it->second << endl;
                break;
            }
            else if(it->second == in_1){
                cout << it->first << endl;
                break;
            }
            it++;
        }
        num_2--;
    }
    return 0;
}