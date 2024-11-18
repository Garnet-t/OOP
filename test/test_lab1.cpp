#include <gtest/gtest.h>
#include "../lab1.cpp"

TEST(Lab1_test, TestString1200PM) {
    char s[9] { "12:00 pm"};
    ASSERT_STREQ(s, "12:00 pm");
}

TEST(Lab1_test, TestString0830AM) {
    char s[9] { "8:30 am"};
    ASSERT_STREQ(s, "8:30 am");
}

TEST(Lab1_test, TestString1012AM) {
    char s[9] { "10:12 am"};
    ASSERT_STREQ(s, "10:12 am");
}
TEST(Lab1_test, TestString0015AM) {
    char s[9] { "00:15 am"};
    ASSERT_STREQ(s, "00:15 am");
}
TEST(Lab1_test, TestString0000AM) {
    char s[9] { "00:00 am"};
    ASSERT_STREQ(s, "00:00 am");
}
TEST(Lab1_test, TestString0000PM) {
    char s[9] { "00:00 pm"};
    ASSERT_STREQ(s, "00:00 pm");
}
TEST(Lab1_test, TestString1215PM) {
    char s[9] { "12:15 pm"};
    ASSERT_STREQ(s, "12:15 pm");
}
TEST(Lab1_test, TestString1157AM) {
    char s[9] {"11:57 am"};
    ASSERT_STREQ(s, "11:57 am");
}
TEST(Lab1_test, TestString515PM) {
    char s[9] {"5:15 pm"};
    ASSERT_STREQ(s, "5:15 pm");
}
TEST(Lab1_test, TestString1007PM) {
    char s[9] { "10:07 pm"};
    ASSERT_STREQ(s, "10:07 pm");
}
TEST(Lab1_test, TestString329PM) {
    char s[9] { "3:29 pm"};
    ASSERT_STREQ(s, "3:29 pm");
}
TEST(Lab1_test, TestString118AM) {
    char s[9] { "1:18 am"};
    ASSERT_STREQ(s, "1:18 am");
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
