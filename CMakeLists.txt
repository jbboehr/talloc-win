cmake_minimum_required(VERSION 3.7)
project(talloc)

set(CMAKE_CXX_STANDARD 11)

add_definitions(-DTALLOC_BUILD_VERSION_MAJOR=2
                -DTALLOC_BUILD_VERSION_MINOR=1
                -DTALLOC_BUILD_VERSION_RELEASE=0)

set(SOURCE_FILES
        talloc.c
        talloc.h)

add_library(talloc ${SOURCE_FILES})
target_link_libraries(talloc winmm.lib)

install(TARGETS talloc DESTINATION lib)
install(FILES talloc.h DESTINATION include)

enable_testing()

add_executable(testsuite testsuite.c testsuite_main.c talloc.h)
target_link_libraries(testsuite talloc)

add_test(NAME testsuite COMMAND testsuite)