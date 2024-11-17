include(FetchContent)


# Tags: https://github.com/catchorg/Catch2/tags
# Linkage: target_link_libraries(Catch2::Catch2WithMain or Catch2::Catch2)

set(NEEDED_Catch2_VERSION "3.7.0")

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v${NEEDED_Catch2_VERSION}
    GIT_SHALLOW TRUE
    FIND_PACKAGE_ARGS ${NEEDED_Catch2_VERSION}
)

FetchContent_MakeAvailable(Catch2)

# this needs to be called for the catch_discover_tests command to work
include(Catch)

add_executable(testrunner

    #main.cpp

    math_tests.cpp

)

target_link_libraries(testrunner
    PRIVATE
        Catch2::Catch2WithMain
        mylib::mylib
)

catch_discover_tests(testrunner)
