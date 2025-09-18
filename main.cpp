
#include <iostream>
using namespace std;


int main()
{
    int I;
    long L;
    long long LL;
    double D;
    float F;
    char C;
    short S;

    unsigned int UI;
    unsigned char UC;
    unsigned long UL;
    unsigned long long ULL;
    unsigned short US;

    setlocale(LC_ALL, "Russian");
    cout << "bool: размер 1 байт, значения только true или false" << "\n"
        "short: размер " << sizeof S << " байта, значения [" << SHRT_MIN << "," << SHRT_MAX << "]\n"
        "char: размер " << sizeof C << " байт, значения[" << CHAR_MIN << ", " << CHAR_MAX << "]\n"
        "int: размер " << sizeof I << " байт, значения [" << INT_MIN << "," << INT_MAX << "]\n"
        "long: размер " << sizeof L << " байт, значения [" << LONG_MIN << "," << LONG_MAX << "]\n"
        "long long: размер " << sizeof LL << " байт, значения[" << LLONG_MIN << ", " << LLONG_MAX << "]\n"
        "float: размер " << sizeof F << " байт, значения [" << numeric_limits<float>::min() << "," << numeric_limits<float>::max() << "]\n"
        "double: размер " << sizeof D << " байт, значения [" << numeric_limits<double>::min() << "," << numeric_limits<double>::max() << "]\n"

        "unsigned int: размер " << sizeof UI << " байт, значения [" << 0 << "," << UINT_MAX << "]\n"
        "unsigned char: размер " << sizeof UC << " байт, значения [" << 0 << "," << UCHAR_MAX << "]\n"
        "unsigned long: размер " << sizeof UL << " байт, значения [" << 0 << "," << ULONG_MAX << "]\n"
        "unsigned long long: размер " << sizeof ULL << " байт, значения [" << 0 << "," << ULLONG_MAX << "]\n"
        "unsigned short: размер " << sizeof US << " байт, значения [" << 0 << "," << USHRT_MAX << "]\n";

        int a = 7;
        cout << a << endl;
        
        a = a + 9;
        cout << a;
        
    
        
}

