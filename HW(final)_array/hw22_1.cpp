#include <iostream>
using namespace std;
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
    for ( int i =0; i < 200001; i++){
        if (count[i] > 0)
        time[index++] = count[i];
    }
    long long prefix_sum[index];
    prefix_sum[0] = time[0];
    for ( int i =1; i < index; i++){
        prefix_sum[i] = prefix_sum[i-1] + time[i];
    }
    long long two_num[index];
    two_num[0] =0, two_num[1] = prefix_sum[0] * time[1];
    long long sum =0;
    for (int i =1; i < index-1; i++){
        two_num[i] = prefix_sum[i-1] *time[i] + two_num[i-1];
        sum += two_num[i] *time[i+1];
    }
    cout << sum;
}