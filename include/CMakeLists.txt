add_library(mylib INTERFACE)
add_library(mylib::mylib ALIAS mylib)

target_sources(mylib
    INTERFACE
        FILE_SET HEADERS
        FILES
            mylib/math.h
)
