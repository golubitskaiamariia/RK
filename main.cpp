#include "classes.h"

int main() {
    TextEditor editor;
    Logger logger(&editor);

    editor.AppendText("hello");
    logger.Backup();

    editor.AppendText(" Dear amin");
    logger.Backup();

    editor.AppendText(" this a test");


    editor.Print();
    logger.Undo();
    editor.Print();
    logger.Undo();
    editor.Print();

    return 0;
}
