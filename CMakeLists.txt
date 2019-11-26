cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(NumberGenerators VERSION 1.0.2 DESCRIPTION "Pre-work to modern C++ workshop")

set(SRC_LIST
    src/FibonacciNumberGenerator.cpp
    src/PrimeNumberGenerator.cpp
    src/UtilityFunctions.cpp
)

add_library(${PROJECT_NAME}-lib STATIC ${SRC_LIST})

add_executable(${PROJECT_NAME} src/Generators.cpp)
if (MSVC)
    target_compile_options(${PROJECT_NAME} PUBLIC /W4 /WX)
else()
    target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -pedantic -Werror -Wno-unused-parameter -Wno-unused-variable)
endif()
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(TEST_SRC_LIST
    test/testMain.cpp
    test/FibonacciNumberGeneratorTests.cpp
    test/PrimeNumberGeneratorTests.cpp
    test/UtilityFunctionsTests.cpp
)

add_executable(${PROJECT_NAME}-ut ${TEST_SRC_LIST})
if (MSVC)
    target_compile_options(${PROJECT_NAME}-ut PUBLIC /W4 /WX)
else()
    target_compile_options(${PROJECT_NAME}-ut PUBLIC -Wall -Wextra -pedantic -Werror -Wno-unused-parameter -Wno-unused-variable)
endif()
target_include_directories(${PROJECT_NAME}-ut PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(${PROJECT_NAME}-ut ${PROJECT_NAME}-lib)
