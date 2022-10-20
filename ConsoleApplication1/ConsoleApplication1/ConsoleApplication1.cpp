// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
#include <iostream>
using namespace std;

class StackClass
{
public:
	StackClass();
	~StackClass();
	void push(int _value)
	{
		stackcount++;
		values[stackcount] = _value;
	}
	int pop()
	{
		if (stackcount != 0)
		{
			stackcount--;
			return values[stackcount + 1];
		}
		else
		{
			return -1;
		}
	}
	int size()
	{
		return stackcount;
	}
	int empty()
	{
		if (stackcount != 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	int top()
	{
		if (stackcount != 0)
		{
			return values[stackcount];
		}
		else
		{
			return -1;
		}
	}
private:
	int values[10000], stackcount;
};

StackClass::StackClass()
{
	stackcount = 0;
}

StackClass::~StackClass()
{
}

int main()
{
	collection;
	int N = 0;
	StackClass stack;
	string order = "";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		order = "";
		cin >> order;
		if (order == "push")
		{
			int value = 0;
			cin >> value;
			stack.push(value);
		}
		else if (order == "pop")
		{
			cout << stack.pop() << '\n';
		}
		else if (order == "size")
		{
			cout << stack.size() << '\n';
		}
		else if (order == "empty")
		{
			cout << stack.empty() << '\n';
		}
		else if (order == "top")
		{
			cout << stack.top() << '\n';
		}
	}
}

