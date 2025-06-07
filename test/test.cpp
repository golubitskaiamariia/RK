#include "classes.h"
#include <gtest/gtest.h>
TEST(ConcreteMemento_test, StateTest) {
  ConcreteMemento test_state("state");
  EXPECT_EQ(test_state.state(), "state");
}

TEST(TextEditor_test, AppendTextTest){
  TextEditor test_editor;
  test = test_editor.AppendText("test")
  EXPECT_EQ(test, "test");
}

TEST(Logger_test, BackupTest){
  Logger test_logger(test_editor);
  test_logger.Backup();
  test.editor.AppentText("testing");
  test_ligger.Undo();
  EXPECT_EQ(test_editor.Save()->state(), "test");
}

int main(int argc, char** argv) {
 ::testing::FLAGS_gmock_verbose = "error";
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
