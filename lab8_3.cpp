#include <iostream>
#include <string>
using namespace std;

string findCharacter(int age, int height, int power) {
    if (age <= 25) {
        if (height <= 100) {
            return "Chopper";
        }
        else if (height <= 180) {
            return "Usopp";
        }
        else {
            if (power > 1100000000) {
                return "Zoro";
            }
            else {
                return "Sanji";
            }
        }
    }
    else if (age <= 60) {
        if (power > 500000000) {
            return "Jinbe";
        }
        else {
            return "Franky";
        }
    }
    else {
        return "Brook";
    }
}
