#include "StringStackQueue.h"
#include <iostream>

bool constructionTest() {
  StringStackQueue s;
  return s.empty() && 0 == s.size();
}

bool addAsIfStackTest() {
  StringStackQueue s;
  s.push("World");
  s.push("Hello");
  return !s.empty() && 2 == s.size();
}

bool peekTest() {
  StringStackQueue s;
  s.push("World");
  s.push("Hello");

  return "Hello" == s.peek() && 2 == s.size();
}

bool popTest() {
  StringStackQueue s;
  s.push("World");
  s.push("Hello");

  std::string first = s.pop();
  std::string second = s.pop();

  return "Hello" == first && "World" == second;
}

bool popAllTest() {
  StringStackQueue s;
  s.push("World");
  s.push("Hello");

  std::string first = s.pop();
  std::string second = s.pop();
  std::string third = s.pop();

  return "Hello" == first && "World" == second && third.empty();
}

bool addAsIfQueueTest() {
  StringStackQueue s;
  s.enqueue("Hello");
  s.enqueue("World");
  return !s.empty() && 2 == s.size();
}

bool frontTest() {
  StringStackQueue s;
  s.enqueue("Hello");
  s.enqueue("World");

  std::string first = s.front();

  return "Hello" == first && 2 == s.size();
}

bool dequeTest() {
  StringStackQueue s;
  s.enqueue("Hello");
  s.enqueue("World");

  std::string first = s.deqeue();
  std::string second = s.deqeue();

  return "Hello" == first && "World" == second;
}

bool dequeAllTest() {
  StringStackQueue s;
  s.enqueue("Hello");
  s.enqueue("World");

  std::string first = s.deqeue();
  std::string second = s.deqeue();
  std::string third = s.deqeue();

  return "Hello" == first && "World" == second && third.empty();
}

bool assignmentOperatorTest() {
  StringQueue* queue = new StringStackQueue();
  queue->enqueue("Hello");
  queue->enqueue("World");

  StringStack* stack = new StringStackQueue();
  stack->push("World");
  stack->push("Hello");

  StringStackQueue both;
  both = *queue;

  if (2 == both.size() && "Hello" == both.deqeue() && "World" == both.deqeue() && both.empty()) {
    both = *stack;
    if (2 == both.size() && "Hello" == both.pop() && "World" == both.pop() && both.empty()) {
      bool result = (2 == queue->size() && 2 == stack->size());
      delete queue;
      delete stack;
      return result;
    }
  }
  delete stack;
  delete queue;
  return false;
}

void test() {
  int numberOfTestsFailed = 0;
  int numberOfTest = 0;
  if (!constructionTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!addAsIfStackTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!peekTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!popTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!popAllTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!addAsIfQueueTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!frontTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!dequeTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!dequeAllTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  numberOfTest++;
  if (!assignmentOperatorTest()) {
    numberOfTestsFailed++;
    std::cout << "Failed test " << numberOfTest << std::endl;
  }
  if (0 == numberOfTestsFailed) {
    std::cout << "All Tests Passed!" << std::endl;
  } else {
    std::cout << numberOfTestsFailed << " Tests Failed" << std::endl;
  }
}

int main(){
    test();

    StringQueue* queue = new StringStackQueue();
    queue->enqueue("Hello");
    queue->enqueue("World");

    StringStack* stack = new StringStackQueue();
    stack->push("World");
    stack->push("Hello");

    StringStackQueue both;
    both = *queue;

    StringStackQueue * ssq = dynamic_cast<StringStackQueue*>(stack);

    std::cout << ssq->size() << std::endl;
    while(!ssq->empty())
        std::cout << ssq->pop() << std::endl;
}
