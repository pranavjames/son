
#include "main.cpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Adding two numbers", "[add]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}

TEST_CASE("Subtracting two numbers", "[subtract]") {
    REQUIRE(add(5, -2) == 3);
    REQUIRE(add(0, 0) == 0);
}

