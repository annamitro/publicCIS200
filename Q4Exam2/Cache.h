#pragma once

using namespace std;

class Cache
{
protected:
	int size;
	int numItem = 0;
	int *dataCache;
	void setSize(int someSize);

public:
	Cache(int size);
	virtual void addItem(int item);
	virtual int getIndexOfItem(int item);
	int getItemAtFront();
};

