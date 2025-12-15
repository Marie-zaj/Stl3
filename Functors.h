#include <vector>
using namespace std;

struct FindMin {
	int operator() (const vector<int>& v) const;
};

struct FindMax {
	int operator() (const vector<int>& v) const;
};

struct SortAscending {
	void operator() (vector<int>& v) const;
};

struct SortDescending {
	void operator() (vector<int>& v) const;
};

struct IncreaseBy {
	int k;
	IncreaseBy(int value);
	void operator() (vector<int>& v) const;
};

struct DecreaseBy {
	int k;
	DecreaseBy(int value);
	void operator() (vector<int>& v) const;
};

struct RemoveEqual {
	int value;
	RemoveEqual(int v);
	void operator() (vector<int>& v) const;
};