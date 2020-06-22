#include <iostream>
#include "Stack.h"
#include "List.h"
//#include "Stack.h"

using namespace std;

int main()
{

	//List<double> ls;
	//ls.AddToHead(10.5);
	//ls.AddToHead(15.2);
	//ls.AddToHead(5.3);
	//ls.AddToHead(20.4);
	//ls.Print(); cout << endl;
	//ls.FindByPosition(0);
	//cout << endl << endl;
	//List<double> ls2;
	//ls2.AddToHead(150.7);
	//ls2.AddToHead(520.9);
	//ls2.Print();
	//cout << endl;
	//ls2 = ls;
	//ls2.Print();
	//*ls.DeleteHead();
	//ls.Print(); cout << endl;
	//ls.AddToTail(777);
	//ls.Print(); cout << endl;
	//ls.DeleteTail();
	//ls.DeleteTail();
	//ls.Print();*/

	//List<int> ls;
	//ls.AddToHead(10);
	//ls.AddToHead(15);
	//ls.AddToHead(5);
	//ls.AddToHead(20);
	//ls.Print();
	////ls.Print(); cout << endl;
	////ls.DeleteByIndex(2);
	////cout << endl;
	////ls.Print();
	////ls.AddByIndex(4, 155);
	////cout << endl;
	////ls.Print();
	////cout << endl;
	////cout << ls.Peek() << endl;
	////ls.Push(1230);
	////ls.Print();
	////cout << endl;
	////ls.Pop();
	////ls.Print();
	////cout << endl;

	//List<int> ls2;
	//ls.AddToHead(100);
	//ls.AddToHead(150);
	//ls.AddToHead(50);
	//ls.AddToHead(200);
	//ls2.Print();

	//List<int> ls3;
	//ls.AddToHead(159);
	//ls.AddToHead(987);
	//ls.AddToHead(69);
	//ls.AddToHead(228);
	//ls3.Print();

	/*Stack<int> st;
	st.Push(ls);
	st.Push(ls2);
	st.Push(ls3);

	st.ShowInfo();*/

	Stack<int> stack;
	stack.Push(150);
	stack.Push(123);
	stack.Push(10);
	stack.Push(15);
	stack.ShowInfo();
	stack.Pop();
	stack.ShowInfo();
	stack.Push(999);
	stack.Push(9);
	stack.ShowInfo();
	cout << endl;
	cout << stack.Peek() << endl;
	system("pause");
	return 0;
}