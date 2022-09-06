#pragma once

#define _BEGIN_COMP_ namespace Comparors {
#define _END_COMP_						 }

_BEGIN_COMP_

bool AbscendingCompare(int firstValue, int secondValue)
{
	return firstValue < secondValue;
}

bool DescendingCompare(int firstValue, int secondValue)
{
	return !AbscendingCompare(firstValue, secondValue);
}

_END_COMP_
