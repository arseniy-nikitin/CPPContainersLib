if(BUILD_TESTING)
  include(GoogleTest)

  file(GLOB TEST_SRCS *.cc)

  add_executable(containers_tests ${TEST_SRCS})

  target_link_libraries(containers_tests CONTAINERS gtest gtest_main)

  gtest_discover_tests(containers_tests)
endif()