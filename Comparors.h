#pragma once

#define _BEGIN_COMP_ namespace Comparors {
#define _END_COMP_						 }

_BEGIN_COMP_

template<class _CompType>
bool AbscendingCompare(_CompType firstValue, _CompType secondValue)
{
	return firstValue < secondValue;
}

template<class _CompType>
bool DescendingCompare(_CompType firstValue, _CompType secondValue)
{
	return !AbscendingCompare(firstValue, secondValue);
}

_END_COMP_
