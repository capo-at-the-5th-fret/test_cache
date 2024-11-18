#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_template_test_macros.hpp>

#include "mylib/math.h"

TEST_CASE("add", "[math]")
{
    using namespace mylib;

    REQUIRE(add(1, 1) == 2);
    CHECK(add(-1, 0) == -1);
}

TEST_CASE("subtract", "[math]")
{
    using namespace mylib;

    REQUIRE(subtract(1, 1) == 0);
    CHECK(subtract(-1, 0) == -1);
}

TEST_CASE("multiply", "[math]")
{
    using namespace mylib;

    REQUIRE(multiply(1, 2) == 2);
}

TEST_CASE("divide", "[math]")
{
    using namespace mylib;

    REQUIRE(divide(4, 2) == 2);
}