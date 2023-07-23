#include<iostream>
using namespace std;

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };
int main() {
    Color col = Color::red;
    cout << static_cast<int>(col) << endl;
    Traffic_light light = Traffic_light::green;
    cout << static_cast<int>(light) << endl;

    return 0;
}