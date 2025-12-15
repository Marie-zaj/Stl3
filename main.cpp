#include <iostream>
#include "Functors.h"
using namespace std;

void Print(const vector<int>& v)
{
	for (int x : v) cout << x << " ";
	cout << endl;
}

int main()
{
	vector<int> nums = { 5,1,7,3,2,7,4 };
	cout << "The sourse vector: ";
	Print(nums);

	cout << "Min: " << FindMin()(nums) << endl;
	cout << "Max: " << FindMax()(nums) << endl;

	SortAscending() (nums);
	cout << "Sort in ascending order: ";
	Print(nums);

	SortDescending() (nums);
	cout << "Sort in descending order: ";
	Print(nums);

	IncreaseBy(10)(nums);
	cout << "Increase by 10: ";
	Print(nums);

	DecreaseBy(5)(nums);
	cout << "Decrease by 5: ";
	Print(nums);

	RemoveEqual(12)(nums);
	cout << "Deleted elements equals 12: ";
	Print(nums);

	return 0;
}