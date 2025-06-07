#include "classes.h"
#include <gtest/gtest.h>
TEST(ConcreteMemento_test, StateTest) {
  ConcreteMemento test_state("state");
  EXPECT_EQ(test_state.state(), "state");
}

TEST(TextEditor_test, AppendTextTest){
  TextEditor test_editor;
  test_editor.AppendText("test");
  Memento* p = test_editor.Save();
  EXPECT_EQ(p->state(), "test");
}

TEST(Logger_test, BackupTest){
  TextEditor test_editor;
  TextEditor* p = &test_editor;
  Logger test_logger(p);
  test_editor.AppendText("testing1");
  test_logger.Backup();
  test_editor.AppendText("testing2");
  test_logger.Undo();
  EXPECT_EQ(test_editor.Save()->state(), "testing1");
}

int main(int argc, char** argv) {
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
