#ifndef __P2_h__
#define __P2_h__

#include "utils.h"

/*
Each new term in the Fibonacci sequence is
generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence 
whose values do not exceed four million, 
find the sum of the even-valued terms.
*/

class P2
{
public:

	uint64_t answer()
	{
		uint64_t sum, fib, iter;
		iter = fib = sum = 0;
		while ( ( fib = Utils::fibonacci(iter++) ) < four_million )
		{
			// Only consider the even terms
			sum += (fib % 2) ? 0 : fib;
		}

		return sum;
	}

private:

	static const uint64_t four_million = 4000000;
};

#endif