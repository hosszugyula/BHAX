#include <exception>
using namespace std;

#include "BinRandTree.h"
#include "Node.h"
#include "Unirand.h"

template <typename ValueType> BinRandTree<ValueType>::BinRandTree(Node* aRoot, Node* aTreep) {
	_depth = {0};
	_ur = {std::chrono::system_clock::now().time_since_epoch().count(), 0, 2};
}

template <typename ValueType> BinRandTree<ValueType>::BinRandTree(const BinRandTree& aOld) {
	_depth = {0};
	_ur = {std::chrono::system_clock::now().time_since_epoch().count(), 0, 2};
}

template <typename ValueType> Node* BinRandTree<ValueType>::cp(Node* aNode, Node* aTreep) {
	throw "Not yet implemented";
}

template <typename ValueType> BinRandTree& BinRandTree<ValueType>::_(const BinRandTree& aOld) {
	throw "Not yet implemented";
}

template <typename ValueType> BinRandTree<ValueType>::BinRandTree(BinRandTree&& aOld) {
	_depth = {0};
	_ur = {std::chrono::system_clock::now().time_since_epoch().count(), 0, 2};
}

template <typename ValueType> BinRandTree& BinRandTree<ValueType>::_(BinRandTree&& aOld) {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::_BinRandTree() {
	throw "Not yet implemented";
}

template <typename ValueType> BinRandTree& BinRandTree<ValueType>::_<(ValueType aValue) {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::print() {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::printr() {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::print(Node* aNode, std::ostream& aOs) {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::print(const Node& aCnode, std::ostream& aOs) {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::deltree(Node* aNode) {
	throw "Not yet implemented";
}

template <typename ValueType> int BinRandTree<ValueType>::whereToPut() {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::eval() {
	throw "Not yet implemented";
}

template <typename ValueType> double BinRandTree<ValueType>::getMean() {
	return this->_mean;
}

template <typename ValueType> void BinRandTree<ValueType>::rmean() {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::rmean(Node* aUnnamed_1) {
	throw "Not yet implemented";
}

template <typename ValueType> double BinRandTree<ValueType>::getVar() {
	return this->_var;
}

template <typename ValueType> void BinRandTree<ValueType>::rvar() {
	throw "Not yet implemented";
}

template <typename ValueType> void BinRandTree<ValueType>::rvar(Node* aUnnamed_1) {
	throw "Not yet implemented";
}

