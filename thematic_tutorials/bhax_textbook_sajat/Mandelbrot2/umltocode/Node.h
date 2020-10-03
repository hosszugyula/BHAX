#include <exception>
using namespace std;

#ifndef __Node_h__
#define __Node_h__

// #include "BinRandTree.h"

template <typename ValueType> class BinRandTree;
class Node;

class Node
{
	private: ValueType _value;
	private: Node* _left;
	private: Node* _right;
	private: int _count;
	public: Node* _unnamed_Node_;
	public: BinRandTree* _unnamed_BinRandTree_;

	private: Node(const Node& aUnnamed_1);

	private: Node& _(const Node& aUnnamed_1);

	private: Node(Node&& aUnnamed_1);

	private: Node& _(Node&& aUnnamed_1);

	public: Node(ValueType aValue, int aCount = 0);

	public: ValueType getValue();

	public: Node* leftChild();

	public: Node* rightChild();

	public: void leftChild(Node* aNode);

	public: void rightChild(Node* aNode);

	public: int getCount();

	public: void incCount();
};

#endif
