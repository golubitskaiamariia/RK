#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <vector>
#include <string>

class Memento {
public:
    ~Memento();
    virtual std::string state() const = 0;

};

class ConcreteMemento : public Memento {
    std::string _state;

public:
    ConcreteMemento(std::string state);
    std::string state() const override;
    ~ConcreteMemento();
};

class TextEditor {
    std::string _currentText = "";

public:
    TextEditor();
    void AppendText(std::string text);
    void Print();
    void Clear();
    Memento* Save();
    void Restore(Memento* state);
};

class Logger {
    
    std::vector<Memento*> _mementos;
    TextEditor* _editor;

public:
    Logger(TextEditor* editor);
    void Backup();
    void Undo();
};

#endif // CLASSES_H
