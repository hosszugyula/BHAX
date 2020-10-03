#include <exception>
using namespace std;

#include "Node.h"
#include "BinRandTree.h"

Node::Node(const Node& aUnnamed_1) {
	_count = {0};
}

Node& Node::_(const Node& aUnnamed_1) {
	throw "Not yet implemented";
}

Node::Node(Node&& aUnnamed_1) {
	_count = {0};
}

Node& Node::_(Node&& aUnnamed_1) {
	throw "Not yet implemented";
}

Node::Node(ValueType aValue, int aCount) {
	_count = {0};
}

ValueType Node::getValue() {
	return this->_value;
}

Node* Node::leftChild() {
	throw "Not yet implemented";
}

Node* Node::rightChild() {
	throw "Not yet implemented";
}

void Node::leftChild(Node* aNode) {
	throw "Not yet implemented";
}

void Node::rightChild(Node* aNode) {
	throw "Not yet implemented";
}

int Node::getCount() {
	return this->_count;
}

void Node::incCount() {
	throw "Not yet implemented";
}

