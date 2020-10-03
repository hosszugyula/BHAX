#include <exception>
using namespace std;

#ifndef __Unirand_h__
#define __Unirand_h__

class Unirand;

class Unirand
{
	private: std::function<int()> _random;

	public: Unirand(long aSeed, int aMin, int aMax);

	public: int __();
};

#endif
