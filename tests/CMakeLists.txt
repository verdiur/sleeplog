if(BUILD_TESTING)
    include(GoogleTest)
    set(TEST_INCLUDE_DIRS ../src/ ../libs/)

    # core tests
    add_executable(             tests_core tests_core.cc)
    target_link_libraries(      tests_core PRIVATE GTest::gtest_main)
    target_include_directories( tests_core PUBLIC ${TEST_INCLUDE_DIRS})
    gtest_discover_tests(tests_core)
endif()