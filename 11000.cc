#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<long long> male_bee, female_bee;
    int year;
    male_bee.push_back(0);
    female_bee.push_back(1);
    while(cin >> year && year){
        while(year>=male_bee.size()){
            int m_num = male_bee.back();
            int f_num = female_bee.back();
            male_bee.push_back(m_num+f_num);
            female_bee.push_back(m_num+1);
        }
        cout << male_bee[year] << " " << female_bee[year]+male_bee[year] << endl;
    }
    return 0;
}
