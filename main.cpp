#include <iostream>
int main() {
    std::cout << "type      " << "\t"  << "size" <<" " << "Min"  << "\t" <<"\t" <<"\t"<< "        Max" << "\n" ;
    std::cout << "int      " << "\t"  <<" " << sizeof(int) <<  "\t" << INT_MIN  << "\t"<< "\t"<< "\t"<< "\t"  << INT_MAX << "\n" ;
    std::cout << "bool     " << "\t"  <<" " << sizeof(bool) <<  "\t" << 0    << "\t"<< "\t"<< "\t"<< "\t"<< "\t"<< "\t"  << 255<< "\n" ;
    std::cout << "char     " << "\t"  <<" " << sizeof(char) <<  "\t" << CHAR_MIN  << "\t"<< "\t"<< "\t"<< "\t"<< "\t"  << CHAR_MAX << "\n" ;
    std::cout << "short    " << "\t"  <<" " << sizeof(short) <<  "\t" << SHRT_MIN << "\t"<< "\t"<< "\t"<< "\t"<< "\t"  << SHRT_MAX << "\n";
    std::cout << "long     " << "\t"  <<" " << sizeof(long) <<  "\t" << LONG_MIN  << "\t"  << LONG_MAX << "\n" ;
    std::cout << "long long" << "\t"  <<" " << sizeof(long long) <<  "\t" << LONG_LONG_MIN  << "\t"  << LONG_LONG_MAX << "\n" ;
    std::cout << "double   " << "\t"  <<" " << sizeof(double) <<  "\t" << __DBL_MIN__  << "\t" << "\t"<<"\t" << __DBL_MAX__ << "\n" ;
    return 0;
}
