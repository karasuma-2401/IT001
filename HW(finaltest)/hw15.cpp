#include <iostream>
void hinhVuong_3();
int main() {
    hinhVuong_3();
    return 0;
}
void hinhVuong_3(){
    int n; std::cin >> n;
    if ( n >=3 && n <=20){
        for ( int i =1; i <= n; i++){
            for ( int j =1; j <= n; j ++){
                if ( j == i || i == 1 || i == n || j == 1||j == n || j == n-i +1){
                    std::cout << "*" << " ";
                }
                else std::cout << "  ";
            }
            std::cout << std::endl;
        }
    }
    else std::cout << "Khong thoa dieu kien nhap.";
}
