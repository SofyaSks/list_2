///// класс LIST /////////

// explicit - создаём явный конструктор который нельзя преобразовать

//template <class T, class Allocator = Allocator<T>>
//class list
//
//	/*************/
//explicit list(const Allocator &a = Allocator());
//
//explicit list(size_type num, const T &val = T(),const Allocator &a = Allocator());
//
//list(const list <T, Allocator> &ob); // конструктор копирования
//
//template < class InIter> list(InIter start, InIter end,const Allocator &a = Allocator());
///******************/
//    ■■ ==
//  	■■ <=
//	■■ !=
//	■■ >
//	■■ >=
//	
	// 1 template <class InIter> void assign(InIter start,InIter end); // добавить в наш список

	// 2 void assign(size_type num, const T &val);

	// 3 reference back();
	//   const_reference back() const; // ссылка на последний элемент в списке

	// 4 void clear();

	// 5 bool empty() const;

	// 6 const_iterator end() const;
	//   iterator end();

	// 7 iterator erase(iterator start, iterator end) или [(iterator i)]; // либо удаляем область, либо один

	// 8 size_type max_size() const;

	// 9 void pop_back();

	// 10 void pop_front();

	// 11 void push_back(const T &val);

	// 12 void swap(list<T,Allocator> &ob);
	// 13 	void unique();
	// template <class BinPred> void unique(BinPred pr);

	//Создание, заполнение, сортировка, вывод списка на экран.
	//Принципы работы с итераторами.

#include <iostream>
#include <list>
using namespace std;
typedef list<int> ourList;
void ShowLists(ourList& l1, ourList& l2)
{
	ourList::iterator iter;
	cout << "list1: ";
	for (iter = l1.begin(); iter != l1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl << "list2: ";
	for (iter = l2.begin(); iter != l2.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl << endl;
}

void main()
{
	ourList list1, list2;
	for (int i = 0; i < 6; ++i)
	{
		list1.push_back(i);
		list2.push_front(i);
	}
	ShowLists(list1, list2);
	list2.splice(list2.end(), list2, list2.begin()); 
						
	list1.reverse();
	ShowLists(list1, list2);
	list1.sort();
	list2.sort();
	ShowLists(list1, list2);
	list1.merge(list2);
	ShowLists(list1, list2);
	list1.unique();
	ShowLists(list1, list2);
}