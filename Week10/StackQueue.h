#pragma once

#include <deque>

#include "GenericQueue.h"
#include "GenericStack.h"

using namespace std;

namespace Week10 {
    template <class T>
    class StackQueue: public Stack<T>, public Queue<T>{
    public:
        virtual ~StackQueue() {}

        bool empty() const override{
            return container.empty();
        }

        size_t size() const override{
            return container.size();
        }

        const T& peek() const override{
            return container.back();
        }

        void push(const T& item) override{
            container.push_back(item);
        }

        T pop() override{
            if(container.empty()){
                return T();
            }
            T value = container.back();
            container.pop_back();
            return value;
        }

        const T& front() const override{
            return container.front();
        }

        void enqueue(const T& item) override{
            container.push_back(item);
        }

        T deqeue() override{
            if(container.empty()){
                return T();
            }
            T value = container.front();
            container.pop_front();
            return value;
        }

        Stack<T>& operator=(const Stack<T> &stack) override{
            StackQueue<T> * ssq = new StackQueue<T>(dynamic_cast<const StackQueue<T>&>(stack));
            container.clear();
            while(!ssq->empty())
                container.push_back(ssq->deqeue());
            delete ssq;
            return *this;
        }

        Queue<T>& operator=(const Queue<T>& queue) override{
            StackQueue<T> * ssq = new StackQueue<T>(dynamic_cast<const StackQueue<T>&>(queue));
            container.clear();
            while(!ssq->empty())
                container.push_back(ssq->deqeue());
            delete ssq;
            return *this;
        }

    private:
        deque<T> container;
    };
}
