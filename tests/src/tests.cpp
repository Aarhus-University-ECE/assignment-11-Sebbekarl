#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

struct test_struct
{
    int input;
    int output;
};
// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    /* testing base case, a normal number, and a big number */
    test_struct test_array[] = {{1, 1}, {10, 55}, {200, 20100}};

    for (auto &[input, output] : test_array)
    {
        REQUIRE(sumtail(input,0) == output);
    }
    
}

TEST_CASE("sumwhile")
{
    /* testing three known values */
    test_struct test_array[] = {{1, 1}, {10, 55}, {200, 20100}};

    for (auto &[input, output] : test_array)
    {
        REQUIRE(sumwhile(input) == output);
    }
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
    /* testing base case, a normal number, and a big number */
   test_struct test_array[] = {{1, 1}, {10, 55}, {30, 832040}};

    for (auto &[input, output] : test_array)
    {
        REQUIRE(fib(input,0,1) == output);
    }
    
}


