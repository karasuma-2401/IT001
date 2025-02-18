#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n, f0, D; 
    cin >> n >> f0 >> D;
    vector<pair<int, int>> v;
    vector<pair<int, int>> F1;
    vector<pair<int, int>> F2;
    pair <int, int> disease;
    for ( int i = 1; i <= n; i++){
        int x, y; cin >> x >> y;
        if ( i == f0)   disease = {x,y};
        else  v.push_back({x, y});
    }
    int count_F1 =0;
    int count_F2 =0;
    for ( auto it = v.begin(); it != v.end(); it++){
        double space = sqrt( pow(((*it).first - disease.first),2) + pow(((*it).second - disease.second),2));
        if ( space < D){
            F1.push_back(*it);
            count_F1++;
        }
        else F2.push_back(*it);
    }
    for ( auto i = F2.begin(); i != F2.end(); i++){
        for ( auto j = F1.begin(); j != F1.end(); j++){
            double space = sqrt( pow(((*i).first - (*j).first),2) + pow(((*i).second - (*j).second),2));
            if ( space < D){
                count_F2++;
                break;
            }
        }
    }
    cout << count_F1 << " " << count_F2;
}