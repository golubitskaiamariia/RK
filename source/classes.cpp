#include "classes.h"

Memento::~Memento(){}

ConcreteMemento::ConcreteMemento(std::string state) : _state(state) {}

std::string ConcreteMemento::state() const {return _state;}
ConcreteMemento::~ConcreteMemento(){}

TextEditor::TextEditor() : _currentText("") {}
void TextEditor::AppendText(std::string text) {
        _currentText += text;
    }
void TextEditor::Print() {
        std::cout << _currentText << std::endl;
    }
void TextEditor::Clear() {
        _currentText = "";
    }
Memento* TextEditor::Save() {
        return new ConcreteMemento(_currentText);
    }
void TextEditor::Restore(Memento* state) {
        _currentText = state->state();
}

Logger::Logger(TextEditor* editor) : _editor(editor) {}
void Logger::Backup() {
        _mementos.push_back(_editor->Save());
    }
void Logger::Undo() {
        if (!_mementos.empty()) {
            Memento* memento = _mementos.back();
            _mementos.pop_back();
            _editor->Restore(memento);
            delete memento;
        }
}

