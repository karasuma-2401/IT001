#include <iostream>
using namespace std;
int h, w, k;
char a[100][100];
int res =0;     // answer of problem
int sel_row[100]= {0}; // array is used to store selection rows 
void columns ( int row[], int row_num, int sel_col[], int col, int col_num ){
    if ( col == w){ // 'neo' condition
        if ( col_num >0){
            int count =0;
            // duyet array
            for ( int i =0; i < row_num; i++){
                for ( int j =0; j < col_num; j++){
                    if (a[row[i]][sel_col[j]] == '#')   count++;
                }
            }
            // check condition of problems
            if ( count ==k) res++;
        }
        return;
    }
    columns (row, row_num, sel_col, col +1, col_num); // next column need to erase
    sel_col[col_num] = col;
    columns (row, row_num, sel_col, col+1, col_num +1); // next permutation
}
//function of backtracking row
void rows (int row, int row_num){
    if ( row ==h){ // 'neo' condition
        if ( row_num >0){
            int sel_col[100] = {0};
            // backtracking column
            columns(sel_row, row_num, sel_col, 0,0);
        }
        return;
    }
    rows (row+1, row_num); // next rows need to erase
    sel_row[row_num] = row;
    rows (row +1, row_num +1); // next permutation
}
int main(){
    cin >> h >> w >>k;
    for ( int i =0; i < h; i++){
        for (int j =0; j < w; j++){
            cin >> a[i][j];
        }
    }
    rows (0,0);
    cout << res;
}