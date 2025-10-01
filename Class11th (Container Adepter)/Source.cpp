#include "../Program/stdafx.h"
#include <stack>
#include <queue>

int main()
{
#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여 만든 
	// 기능이 제한되거나 변경된 컨테이너입니다.

#pragma region stack container

	// stack<int> stack;

	// stack.push(10);
	// stack.push(20);
	// stack.push(30);
	// stack.push(40);
	// stack.push(50);

	// while (stack.empty() == false)
	// {
	// 	cout << stack.top() << endl;

	// 	stack.pop();
	// }



#pragma endregion

#pragma region queue container
	// queue<int> queue;

	// for (int i = 0; i < 5; i++)
	// {
	// 	queue.push(i);
	// }

	// while (queue.empty())
	// {
	// 	cout << "queue의 값 : " << queue.front() << endl;

	// 	queue.pop();
	// }

#pragma endregion

#pragma region priority queue container

	// priority_queue<int> priority_queue;

	// priority_queue.push(33);
	// priority_queue.push(62);
	// priority_queue.push(3);
	// priority_queue.push(5);
	// priority_queue.push(21);

	// while (!priority_queue.empty())
	// {
	// 	cout << priority_queue.top() << endl;

	// 	priority_queue.pop();
	// }
#pragma endregion

#pragma endregion

	return 0;
}