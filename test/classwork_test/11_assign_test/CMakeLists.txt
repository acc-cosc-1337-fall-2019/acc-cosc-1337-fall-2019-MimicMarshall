add_executable(cw_11_tests "vector_tests.cpp")
target_link_libraries(cw_11_tests cw_11_library)
add_test(NAME cw_11_tests COMMAND cw_11_tests -s)