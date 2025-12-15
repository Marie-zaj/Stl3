#include "Functors.h"
#include <algorithm>

int FindMin::operator()(const vector<int>& v) const
{
	return *min_element(v.begin(), v.end());
}

int FindMax::operator()(const vector<int>& v) const
{
	return *max_element(v.begin(), v.end());
}

void SortAscending::operator()(vector<int>& v) const
{
	sort(v.begin(), v.end());
}

void SortDescending::operator()(vector<int>& v) const
{
	sort(v.begin(), v.end(), greater<int>());
}

IncreaseBy::IncreaseBy(int value) :k(value)
{
}

void IncreaseBy::operator()(vector<int>& v) const
{
	for (int& x : v) x += k;
}

DecreaseBy::DecreaseBy(int value) :k(value)
{
}

void DecreaseBy::operator()(vector<int>& v) const
{
	for (int& x : v) x -= k;
}

RemoveEqual::RemoveEqual(int v) :value(v)
{
}

void RemoveEqual::operator()(vector<int>& v) const
{
	v.erase(remove_if(v.begin(), v.end(),
		[&](int x) {return x == value; }),
		v.end());
}