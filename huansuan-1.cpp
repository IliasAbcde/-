#include <iostream>
#include <windows.h> // 用于设置控制台编码
using namespace std;

// 温度换算
double 摄氏度To华氏度(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double 华氏度To摄氏度(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double 开尔文To摄氏度(double kelvin) {
    return kelvin - 273.15;
}

double 摄氏度To开尔文(double celsius) {
    return celsius + 273.15;
}

double 华氏度To开尔文(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double 开尔文To华氏度(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

// 长度换算
double 米To英尺(double meters) {
    return meters * 3.28084;
}

double 英尺To米(double feet) {
    return feet / 3.28084;
}

// 重量换算
double 千克To磅(double kilograms) {
    return kilograms * 2.20462;
}

double 磅To千克(double pounds) {
    return pounds / 2.20462;
}

// 主函数
int main() {
    SetConsoleOutputCP(CP_UTF8); // 设置控制台输出编码为 UTF-8
    SetConsoleCP(CP_UTF8);       // 设置控制台输入编码为 UTF-8

    while (true) {
        cout << "请选择换算类型:" << endl;
        cout << "1. 温度换算" << endl;
        cout << "2. 长度换算" << endl;
        cout << "3. 重量换算" << endl;
        cout << "0. 退出程序" << endl;

        int choice;
        cin >> choice;

        if (choice == 0) {
            cout << "程序已退出。" << endl;
            break;
        }

        switch (choice) {
            case 1: {
                double temp;
                cout << "输入温度值: ";
                cin >> temp;
                cout << "选择换算方向 (1: 摄氏度到华氏度, 2: 华氏度到摄氏度, 3: 开尔文到摄氏度, 4: 摄氏度到开尔文, 5: 华氏度到开尔文, 6: 开尔文到华氏度): ";
                int tempChoice;
                cin >> tempChoice;
                if (tempChoice == 1) {
                    cout << "结果: " << 摄氏度To华氏度(temp) << " °F" << endl;
                } else if (tempChoice == 2) {
                    cout << "结果: " << 华氏度To摄氏度(temp) << " °C" << endl;
                } else if (tempChoice == 3) {
                    cout << "结果: " << 开尔文To摄氏度(temp) << " °C" << endl;
                } else if (tempChoice == 4) {
                    cout << "结果: " << 摄氏度To开尔文(temp) << " K" << endl;
                } else if (tempChoice == 5) {
                    cout << "结果: " << 华氏度To开尔文(temp) << " K" << endl;
                } else if (tempChoice == 6) {
                    cout << "结果: " << 开尔文To华氏度(temp) << " °F" << endl;
                } else {
                    cout << "无效选项" << endl;
                }
                break;
            }
            case 2: {
                double length;
                cout << "输入长度值: ";
                cin >> length;
                cout << "选择换算方向 (1: 米到英尺, 2: 英尺到米): ";
                int lengthChoice;
                cin >> lengthChoice;
                if (lengthChoice == 1) {
                    cout << "结果: " << 米To英尺(length) << " 英尺" << endl;
                } else if (lengthChoice == 2) {
                    cout << "结果: " << 英尺To米(length) << " 米" << endl;
                } else {
                    cout << "无效选项" << endl;
                }
                break;
            }
            case 3: {
                double weight;
                cout << "输入重量值: ";
                cin >> weight;
                cout << "选择换算方向 (1: 千克到磅, 2: 磅到千克): ";
                int weightChoice;
                cin >> weightChoice;
                if (weightChoice == 1) {
                    cout << "结果: " << 千克To磅(weight) << " 磅" << endl;
                } else if (weightChoice == 2) {
                    cout << "结果: " << 磅To千克(weight) << " 千克" << endl;
                } else {
                    cout << "无效选项" << endl;
                }
                break;
            }
            default:
                cout << "无效选项" << endl;
                break;
        }
    }

    return 0;
}
