// Ex 4.28 - sizeof operator.
#include <iostream>
using std::endl;
using std::cout;

int main()
{
    // void type
    cout << "void: nullptr_t\t" << sizeof(std::nullptr_t) << " bytes" << endl << endl;

    // boolean type
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;

    // character type
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
    cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

    // integer types
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

    // Fixed width integer types
    cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << endl;
    cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << endl;
    cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << endl;
    cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << endl;
    cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << endl;
    cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << endl;
    cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << endl;
    cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << endl;

    // floating point types
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;

    return 0;
}
