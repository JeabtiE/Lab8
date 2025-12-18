#include <iostream>
using namespace std;

int main() {
    int age, height, power;
    string character;
    
    // รับค่าอายุ
    cout << "Enter age: ";
    cin >> age;
    
    // ตรวจสอบอายุไม่เกิน 25
    if (age <= 25) {
        // รับค่าส่วนสูง
        cout << "Enter height (cm): ";
        cin >> height;
        
        // ตรวจสอบสูงไม่เกิน 100cm
        if (height <= 100) {
            character = "Chopper";
        }
        // ตรวจสอบสูงไม่เกิน 180cm
        else if (height <= 180) {
            character = "Usopp";
        }
        else {
            // รับค่าพลัง
            cout << "Enter power: ";
            cin >> power;
            
            // ตรวจสอบพลังเกิน 1.1 พันล้าน
            if (power > 1100000000) {
                character = "Zoro";
            }
            else {
                character = "Sanji";
            }
        }
    }
    // อายุไม่เกิน 60
    else if (age <= 60) {
        // รับค่าพลัง
        cout << "Enter power: ";
        cin >> power;
        
        // ตรวจสอบพลังเกิน 500 ล้าน
        if (power > 500000000) {
            character = "Jinbe";
        }
        else {
            character = "Franky";
        }
    }
    else {
        character = "Brook";
    }
    
    // แสดงผล
    cout << "Your character is " << character << "." << endl;
    
    return 0;
}
