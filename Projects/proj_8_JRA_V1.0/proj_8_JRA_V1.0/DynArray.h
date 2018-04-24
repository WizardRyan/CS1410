#pragma once
class DynArray
{
public:
	DynArray();
	~DynArray();
	DynArray(int n);
	
	int size() const;
	int capacity() const;
	void clear();

private:
	int si = 0;
	int cap = 0;
	int data[];
};

