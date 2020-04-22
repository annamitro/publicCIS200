#include "Cache.h"
#include <iostream>

using namespace std;

Cache::Cache(int size)
{
	this->size = size;
	setSize(size);
	
}
void Cache::setSize(int someSize){ dataCache = new int[someSize]; }

void Cache::addItem(int item)
{
	int i = getIndexOfItem(item);

	if (i == -1)
	{
		if (numItem == size)
		{
			if (getItemAtFront() != item)
			{
				i = 0;
				for (int j = i; j < numItem; j++)
				{
					dataCache[j] = dataCache[j + 1];
				}
				dataCache[numItem - 1] = item;
			}
		}
		else
		{
			dataCache[numItem] = item;
			numItem++;
		}
	}
	else
	{
		if (getItemAtFront() != item)
		{
			for (int j = i; j < numItem; j++)
			{
				dataCache[j] = dataCache[j + 1];
			}
			dataCache[numItem - 1] = item;
		}
	}

	for (int j = numItem - 1; j >= 0; j--)
	{
		cout << dataCache[j] << " ";
	}
	cout << endl;
}
int Cache::getIndexOfItem(int item)
{
	for (int k = 0; k < numItem; k++)
	{
		if (item == dataCache[k])
		{
			return k;
		}
	}
	return -1;
}
int Cache::getItemAtFront()
{
	return dataCache[numItem];
}