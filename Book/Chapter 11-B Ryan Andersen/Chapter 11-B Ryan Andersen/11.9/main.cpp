#include "Header.h";

int main(){
	rand_seed();
	vector<int> v(8);
	for (int i = 0; i < v.size(); i++)
		v[i] = rand_int(1, 100);
	print(v);
	merge_sort(v);
	print(v);

	cout << endl << endl;
	system("pause");
	return 0;
}