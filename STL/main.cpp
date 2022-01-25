#include<iostream>
#include<array>
#include<vector>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define STL_ARRAY
//#define STL_VECTOR

void main()
{
	setlocale(LC_ALL, "");

#ifdef STL_ARRAY

	const int n = 5;
	std::array<int, n> arr{ 3,5,8 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif // STL_ARRAY

#ifdef STL_VECTOR

	std::vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	cout << "Size:	  " << vec.size() << endl;
	cout << "Capacity:" << vec.capacity() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;

	vec.push_back(55);

	vec.reserve(5);

	//vec.shrink_to_fit();

	try
	{
		for (int i = 0; i < vec.capacity(); i++)
		{
			//cout << vec[i]<<tab;
			//cout << vec[i] << tab;
			cout << vec.at(i) << tab;
		}
	}

	catch (const std::exception& e)
	{
		std::cerr << endl << e.what() << endl;
	}

	cout << endl;
	cout << "Size:	  " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;

	/*std::vector<char> d_vec;
	cout << "Size:	  " << d_vec.size() << endl;
	cout << "Capacity: " << d_vec.capacity() << endl;
	cout << "MaxSize: " << d_vec.max_size() << endl;*/
#endif // STL_VECTOR

	std::vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	int value;
	int index;
	cout << "¬ведите индекс добовл€емого значени€: "; cin >> index;
	cout << "¬ведите добовл€емое значение: "; cin >> value;
	vec.insert(vec.cbegin() + index, value);

	for (int i = 0; i < vec.capacity(); i++)
	{
		cout << vec.data()[i] << tab;
	}

	cout << endl << "¬ведите индекс удал€емого значени€: "; cin >> index;
	vec.erase(vec.cbegin() + index);

	for (int i = 0; i < vec.capacity(); i++)
	{
		cout << vec.data()[i] << tab;
	}
}