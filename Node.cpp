//combining Node.h and Student.h to set up getters/setters for student and next pointers, and constructor/destructor

#include <iostream>
#include "Node.h"
#include "Student.h"

Node::Node(Student* newStudent) {
  student = newStudent;
  next = NULL;
}

Node::~Node() {
  delete &student;
  next = NULL;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

Node* Node::getNext() {
  return next;
}

void Student::setStudent(Student* newStudent) {
  student = newStudent;
}

Student* Student::getStudent() {
  return student;
}
