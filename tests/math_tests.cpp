#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_template_test_macros.hpp>

#include "mylib/math.h"

TEST_CASE("add", "[math]")
{
    using namespace mylib;

    CHECK(add(1, 1) == 2);
    CHECK(add(-1, 0) == -1);
    CHECK(add(-1, 1) == 0);
    CHECK(add(1, -1) == 0);
    CHECK(add(0, 0) == 0);
}

TEST_CASE("subtract", "[math]")
{
    using namespace mylib;

    CHECK(subtract(1, 1) == 0);
    CHECK(subtract(-1, 0) == -1);
    CHECK(subtract(-1, 1) == -2);
    CHECK(subtract(1, -1) == 2);
}

TEST_CASE("multiply", "[math]")
{
    using namespace mylib;

    CHECK(multiply(1, 2) == 2);
    CHECK(multiply(-1, 0) == 0);
    CHECK(multiply(-1, 1) == -1);
    CHECK(multiply(1, -1) == -1);
}

TEST_CASE("divide", "[math]")
{
    using namespace mylib;

    CHECK(divide(4, 2) == 2);
    CHECK(divide(-1, 1) == -1);
    CHECK(divide(-1, 16) == 0);
    CHECK(divide(1, -1) == -1);
}

TEST_CASE("square", "[math]")
{
    using namespace mylib;

    CHECK(square(2) == 4);
    CHECK(square(-1) == 1);
    CHECK(square(0) == 0);
    CHECK(square(1) == 1);
}