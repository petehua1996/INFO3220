#pragma once

#include <deque>

#include "StringQueue.h"
#include "StringStack.h"

using namespace std;

class StringStackQueue: public StringStack, public StringQueue{
public:
    virtual ~StringStackQueue() {}

    bool empty() const override{
        return container.empty();
    }

    size_t size() const override{
        return container.size();
    }

    const string& peek() const override{
        return container.back();
    }

    void push(const std::string& string) override{
        container.push_back(string);
    }

    string pop() override{
        if(container.empty()){
            return string();
        }
        string value = container.back();
        container.pop_back();
        return value;
    }

    const string& front() const override{
        return container.front();
    }

    void enqueue(const string& string) override{
        container.push_back(string);
    }

    std::string deqeue() override{
        if(container.empty()){
            return string();
        }
        string value = container.front();
        container.pop_front();
        return value;
    }

    StringStack& operator=(const StringStack& stack) override{
        StringStackQueue * ssq = new StringStackQueue(dynamic_cast<const StringStackQueue&>(stack));
        container.clear();
        while(!ssq->empty())
            container.push_back(ssq->deqeue());
        delete ssq;
        return *this;
    }

    StringQueue& operator=(const StringQueue& queue) override{
        StringStackQueue * ssq = new StringStackQueue(dynamic_cast<const StringStackQueue&>(queue));
        container.clear();
        while(!ssq->empty())
            container.push_back(ssq->deqeue());
        delete ssq;
        return *this;
    }

private:
    deque<string> container;
};
