#include <exception>
using namespace std;

#ifndef __BinSearchTree_h__
#define __BinSearchTree_h__

#include "BinRandTree.h"

// template <typename ValueType> class BinRandTree;
template <typename ValueType> class BinSearchTree;

template <typename ValueType> class BinSearchTree: public BinRandTree<ValueType>
{

	public: BinSearchTree();

	public: BinSearchTree& _<(ValueType aValue);
};

#endif
