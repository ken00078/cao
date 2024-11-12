#include <iostream>
using namespace std;

int main() {
    int month;

    // 提示用户输入月份
    cout << "輸入月份: ";
    cin >> month;

    // 根据月份判断季节
    if (month >= 1 && month <= 12) {
        if (month >= 3 && month <= 5) {
            cout << "春天" << endl;   // 春季：3月到5月
        }
        else if (month >= 6 && month <= 8) {
            cout << "夏天" << endl;   // 夏季：6月到8月
        }
        else if (month >= 9 && month <= 11) {
            cout << "秋天" << endl;   // 秋季：9月到11月
        }
        else {  // 12月到2月为冬季
            cout << "冬天" << endl;
        }
    }
    else {
        cout << "請輸入有效月份" << endl;  // 输入的月份无效
    }

    return 0;
}
