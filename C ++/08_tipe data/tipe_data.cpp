#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    // bilangan bulat
    unsigned int a = 1; // 32 bit
    long b = 6;
    short c = 7;

    // bilangnan decimal
    float d = 1.0;
    double e = 0.5;

    // charakter
    char f = 'a'; // char 1 bit

    // boolean
    bool g = true; // true/false

    cout << a << endl;
    cout << sizeof(a) << " byte" << endl; 
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;

    cin.get(); 
    return 0;
}