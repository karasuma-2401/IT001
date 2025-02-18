#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
bool check(char word){
    if ( (word>='a' && word<='z')||(word>='A' && word<='Z')|| (word==' ')) return true;
    return false;
}
int main(){
    string chuoi, x[100];
    int count[100]={0}, tmp =-1;
    getline(cin,chuoi);
    chuoi = chuoi + " ";
    for (int i = chuoi.size() - 1; i >= 0; i--)
        if (!check(chuoi[i]))     chuoi.erase(i,1);
    while (!chuoi.empty()){
        tmp ++;
        x[tmp]=chuoi.substr(0,chuoi.find(" "));
        chuoi = chuoi.substr(chuoi.find(" ") + 1);
        if (x[tmp][0]>='A' && x[tmp][0]<='Z')
            count[tmp]= count[tmp-1]+1;
    }
    for (int i = 0;i <= tmp; i++)
        if (count[i] > 1 && count[i] > count[i+1]){
            for (int j= i- count[i]+1; j <= i; j++)
                cout << x[j]<<" ";
            cout<<endl;
        }
}