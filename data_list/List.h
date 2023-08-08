#pragma once
const int MAX = 100;



template<typename T>
class List
{

	typedef struct nodeRecord
	{
		T data;
		struct nodeRecord* prev;
		struct nodeRecord* next;
	}node;
	typedef node* Nptr;

public:
	List();
	List(const List& L);
	~List();
	void Insert(int _pos, T _item);
	void Delete(int _pos);
	void Retreive(int _pos, T& _item);
	bool IsEmpty();
	int Size();

private:
	int m_count =0;
	Nptr m_head;
	Nptr m_tail;
	
};

template <typename T>
List<T>::List()
{
	m_count = 0;
}

template <typename T>
List<T>::List(const List& L)
{
	m_count = L.m_count;
	if (L.m_head == nullptr)
		m_head = nullptr;
	else
	{
		
	}
}

template <typename T>
List<T>::~List()
{
}

template <typename T>
void List<T>::Insert(int _pos, T _item)
{
}

template <typename T>
void List<T>::Delete(int _pos)
{
}

template <typename T>
void List<T>::Retreive(int _pos, T& _item)
{
}

template <typename T>
bool List<T>::IsEmpty()
{
}

template <typename T>
int List<T>::Size()
{
	return m_count;
}

