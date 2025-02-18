#include <iostream>
using namespace std;
bool leap ( int year){
    return  ( (year % 4 ==0 && year % 100 != 0) || year % 400 == 0);
}
int daysinmonth ( int month, int year){
    if ( month ==2) return  leap(year) ? 29 : 28;
    else if ( month == 4 ||month ==6|| month ==9|| month ==11 )   return 30;
    else return 31;
}
int first_of_month ( int month, int year){
    int source_year = 100;
    int source_ordinal = 5;
    long long space_days = 0;
    for ( int i = source_year; i < year; i++){
        space_days += (leap(i)) ? 366 : 365;
    }
    for ( int j =1 ; j < month; j++){
        space_days += daysinmonth(j, year);
    }
    return (source_ordinal + space_days) % 7;
}
int find_day (int times, int ordinal_days, int month, int year){
    ordinal_days = (ordinal_days == 8) ? 0 : (ordinal_days - 1);
    int first_ordinal = first_of_month(month,year);
    int first_days = ( ordinal_days - first_ordinal + 7)% 7+1;
    int times_days = first_days + (times - 1) * 7 ;
    if (times_days > daysinmonth(month, year)) {
        return -1;
    }
    return times_days;
}
int main(){
    int x, y , i,j; cin >> x >> y >> i >> j;
    cout << find_day(x,y,i,j);
}