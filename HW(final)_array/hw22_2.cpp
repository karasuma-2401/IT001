#include <iostream>
using namespace std;
long long nC3(int n) {
    if (n < 3) return 0;
    return (long long)n * (n - 1) * (n - 2) / 6;
    }
long long nC2(int n) {
    if (n < 2) return 0;
    return (long long)n * (n - 1) / 2;
}
int a[200001];
int count[200001]={0};
int main(){
    int n; cin >> n;
    for ( int i =0; i < n; i++){
        cin >> a[i];
        count[a[i]]++;
    }
    int time[200001];
    int index =0;
    long long res = nC3(n);
    for ( int i =0; i < 200001; i++){
        if (count[i] > 0)
        time[index++] = count[i];
    }
    long long twice =0, three =0;
    for (int i =0; i < index;i++){
        twice += nC2(time[i]) *( n-time[i]);
    }
    for (int i =0; i < index;i++){
        three += nC3(time[i]);
    }
    cout << res - (twice + three);
}