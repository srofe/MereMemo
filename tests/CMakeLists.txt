project(MereMemoTests)

include_directories(lib)

set(sources
        main.cc
        Construction.cc
        util.cc util.h)

add_executable(tests ${sources})
