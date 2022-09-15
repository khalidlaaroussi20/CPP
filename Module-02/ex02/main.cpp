#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 2 ) + Fixed( 2 ));
std::cout << b << std::endl;
//std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}