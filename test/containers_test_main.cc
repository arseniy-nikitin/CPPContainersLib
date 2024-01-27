#include <gtest/gtest.h>
#include "../source/containers.h"

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(test, standard_constructor) {
  ContainersLib::Container m;
  EXPECT_EQ(m.test, 0);
}