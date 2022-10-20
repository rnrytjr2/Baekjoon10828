// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    collection;
    int N=0;
    stack<int> stack;
    string order="";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> order;
        if (order=="push")
        {
            int value=0;
            cin >> value;
            stack.push(value);
        }
        else if (order == "pop")
        {
            if (stack.size() != 0)
            {
                cout << stack.top() << '\n';
                stack.pop();
            }
            else
            {
                cout << "-1" << '\n';
            }
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
            if (stack.size() != 0)
            {
            cout << stack.top() << '\n';
            }
            else
            {
                cout << "-1" << '\n';
            }
        }
    }
}

