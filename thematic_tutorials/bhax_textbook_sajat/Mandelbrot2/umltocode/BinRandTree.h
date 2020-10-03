#include <exception>
using namespace std;

#ifndef __BinRandTree_h__
#define __BinRandTree_h__

// #include "Node.h"
#include "Unirand.h"

class Node;
class Unirand;
template <typename ValueType> class BinRandTree;

template <typename ValueType> class BinRandTree
{
	protected: Node* _root;
	protected: Node* _treep;
	protected: int _depth;
	public: Unirand _ur;
	public: double _mean;
	public: int _msum;
	public: int _mcount;
	public: double _var;
	public: double _vsum;
	public: int _vcount;
	public: Node* _unnamed_Node_;

	public: BinRandTree(Node* aRoot = nullptr, Node* aTreep = nullptr);

	public: BinRandTree(const BinRandTree& aOld);

	public: Node* cp(Node* aNode, Node* aTreep);

	public: BinRandTree& _(const BinRandTree& aOld);

	public: BinRandTree(BinRandTree&& aOld);

	public: BinRandTree& _(BinRandTree&& aOld);

	public: void _BinRandTree();

	public: BinRandTree& _<(ValueType aValue);

	public: void print();

	public: void printr();

	public: void print(Node* aNode, std::ostream& aOs);

	public: void print(const Node& aCnode, std::ostream& aOs);

	public: void deltree(Node* aNode);

	public: int whereToPut();

	public: void eval();

	public: double getMean();

	public: void rmean();

	public: void rmean(Node* aUnnamed_1);

	public: double getVar();

	public: void rvar();

	public: void rvar(Node* aUnnamed_1);
};

#endif
