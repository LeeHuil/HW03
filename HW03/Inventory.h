#pragma once
#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Inventory
{
public:

	Inventory(int capacity = 10)
	{
		size_ = 0;
		cout << "인벤토리 최대 크기를 입력해주세요(기본 크기는 10 입니다.)" << endl;
		cin >> capacity;

		if (capacity <= 0)
		{
			cout << "최소 용량은 1입니다" << endl << "인벤토리 최대 크기를 1로 설정합니다" << endl;
			capacity = 1;
		}
		pItems_ = new T[capacity];
	}
	~Inventory()
	{
		delete[] pItems_;
		pItems_ = nullptr;
	}
	void AddItem(const T& item)
	{
		if (size_ > capacity)
		{
			cout << "인벤토리에 공간이 없습니다." << endl;
		}
		else
		{
			cout << "아이템이 추가되었습니다" << endl;
			pItems_[size_] = item;
			cout << "빈 공간이" << capacity - size_ << "만큼 남았습니다" << endl;
			++size_;
		}
	}
	void RemoveLastItem()
	{
		if (size_ == 0)
		{
			cout << "인벤토리가 비어있습니다." << endl;
		}
		else
		{
			cout << "아이템을 제거 했습니다" << endl;
			--size_;
		}
	}
	int GetSize() const
	{
		return size_;
	}
	int GetCapacity() const
	{
		return capacity;
	}
	void PrintAllItems() const
	{
		if (size_ == 0)
		{
			cout << "인벤토리가 비어있습니다." << endl;
		}
		else
		{
			for (int i = 0; i < size_; ++i)
			{
				pItems_->PrintInfo();
			}
		}
	}
private:
	T* pItems_;
	int capacity;
	int size_;
};

