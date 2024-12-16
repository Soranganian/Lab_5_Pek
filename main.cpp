#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Зад 1" << endl;
     
    const int x = 10000;
    int m[x]  {-8, -7, -6, 18, 19, 20};
    
    int sum, max, num;
    for (int i = 0; i < x; i++) {
        if (-7 <= m[i] & m[i] <= 19) {
            sum += m[i];
            if (m[i] > max) {
                max = m[i];
                num = i + 1;
            }
        }
    }
    
    cout << "Сумма " << sum << endl;
    cout << "Макс число " << max << endl;
    cout << "Номер числа " << num << endl;
    
    cout << "Зад 2" << endl;
    
    int n = 12345678;
    int nsum = 0;
    for (int i = 1; i < 9; i++) {
        nsum += n % int(pow(10, i)) / int(pow(10, i - 1));
    }
    cout << "Сумма чисел " << nsum << endl;
    return 0;
}