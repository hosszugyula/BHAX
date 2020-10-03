#include <exception>
using namespace std;

#ifndef __ZLWTree_h__
#define __ZLWTree_h__

#include "BinRandTree.h"

// template <typename ValueType> class BinRandTree;
template <typename ValueType, ValueType vr, ValueType v0> class ZLWTree;

template <typename ValueType, ValueType vr, ValueType v0> class ZLWTree: public BinRandTree<ValueType>
{

	public: ZLWTree();

	public: ZLWTree& _<(ValueType aValue);
};

#endif
