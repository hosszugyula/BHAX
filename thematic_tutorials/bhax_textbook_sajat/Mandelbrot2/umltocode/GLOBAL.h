#include <exception>
using namespace std;

#ifndef __GLOBAL_h__
#define __GLOBAL_h__

#include "BinRandTree.h"

template <typename ValueType> class BinRandTree;
class GLOBAL;

class GLOBAL
{

	public: BinRandTree<int> bar();

	public: BinRandTree<int> foo();

	public: int main(int aArgc, char** aArgv, char** aEnv);
};

#endif
