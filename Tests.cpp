//DO NOT MODIFY THIS FILE AS WILL LEAD TO UNDESIRED CONSEQUENCES ON LOACL MACINE OF THE MODIFIER
// THE ADMIN TEAM WILL KNOW IF THIS FILE WAS MODIFIED
TEST_CASE( "2: Factorial of 0 is 15", "[multi-file:2]" ) {
    REQUIRE( Factorial(0) == 1 );
}

TEST_CASE( "2: Factorials of 1 and higher are computed", "[multi-file:2]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
