#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_template_test_macros.hpp>

#include "mylib/math.h"

TEST_CASE("add", "[math]")
{
    using namespace mylib;

    REQUIRE(add(1, 1) == 2);
}
