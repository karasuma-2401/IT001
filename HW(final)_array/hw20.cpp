#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long a[100005], b[100005];
bool check (int n, int m, int height){
    int j =1;
    for ( int i = 1; i <= n; i++){
        if ( a[i] < height){
            while ( j <= m && a[i]+ b[j] < height)  j++;
                if ( j > m) return false;
                j++;
        }
    }
     return true;
}
long long binary_searchs ( int n , int m,long long res = -1){
     long long l =0 , r = 8e8;
    while ( l <= r-2){
        int mid = (l +r)/2;
        if ( check(n,m,mid)){
            res = mid;
            l = mid;
        }
        else r = mid;
    }
    return res;
}
int main(){
    int n,m; cin >> n;
    for ( int i =1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for ( int i =1; i <= m; i++)
        cin >> b[i];
    long long res = binary_searchs ( n,m,res);
    vector<pair<int, int>> ans;
    int j = 1;
    for (int i = 1; i <= n; i++) {
        if (a[i] < res) {
            while (j <= m && a[i] + b[j] < res) j++;
            if (j <= m) {
                ans.push_back(make_pair(i, j));
                j++;
            }
        }
    }
    cout << res << " " << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}
