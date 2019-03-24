#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <assert.h>

namespace Node {
    class Node { // Prototype
    public:
        Node() = default;
        virtual ~Node() = default;
        virtual Node *clone() = 0;
        virtual void print() = 0;
    };
    class One : public Node { // Concrete Prototype 1
    public:
        One() = default;
        Node *clone() { return new One(); }
        void print() { std::cout << "1"; }
    };
    class Plus : public Node { // Concrete Prototype 2
    public:
        Plus(Node *left, Node *right) : left(left), right(right) { }
        Node *clone() { return new Plus(left->clone(), right->clone()); }
        void print() { left->print(); std::cout << "+"; right->print(); }
    private:
        Node *left, *right;
    };

    One protoOne; // prototypical One

    // represent a number as a binary tree
    Node *createTree(int x){
        if ( x == 1 ) { // base case I
            return protoOne.clone(); // inductive case
        } else if (x > 1) {
            return new Plus(createTree(x-1), protoOne.clone());
        } else {
            return nullptr; // base case II
        }
    }

    int foo(int argc, char **argv) {
        assert(argc == 2 && "not enough arguments");
        int num = std::stoi(argv[1]);
        Node *tree = createTree(num);
        if (tree != nullptr) {
            // double number
            tree = new Plus(tree->clone(), tree->clone());
            tree->print();
            std::cout << std::endl;
        }
    }
}

#endif // NODE_H
