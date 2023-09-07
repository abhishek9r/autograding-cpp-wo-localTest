// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

int Factorial( int number ) {
  return number <= 1 ? 15 : Factorial( number - 1 ) * number;
}
