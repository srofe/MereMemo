project(MereMemoTests)

include_directories(lib)

set(sources
        main.cc
        Construction.cc)

add_executable(tests ${sources})
