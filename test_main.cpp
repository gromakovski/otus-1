#include <gtest/gtest.h>

TEST(hwTest, TEST_EXAMPLE) {
  EXPECT_EQ(1,1);
}

int main(int argc, char const *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


