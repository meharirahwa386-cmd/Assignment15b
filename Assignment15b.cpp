// Rahwa Mehari
// CIS 1202
// July 27, 2026


#include <iostream>
#include <cmath>

using namespace std;

// Template function for floating-point types
template <typename T>
T half(T value)
{
    return value / 2;
}

// Explicit specialization for int
template <>
int half<int>(int value)
{
    return static_cast<int>(round(static_cast<double>(value) / 2.0));
}

int main()
{
    // Test integer values
    cout << "half(7) = " << half(7) << endl;
    cout << "half(8) = " << half(8) << endl;

    // Test float values
    cout << "half(7.0f) = " << half(7.0f) << endl;
    cout << "half(8.0f) = " << half(8.0f) << endl;

    // Test double values
    cout << "half(7.5) = " << half(7.5) << endl;
    cout << "half(8.8) = " << half(8.8) << endl;

    return 0;
}