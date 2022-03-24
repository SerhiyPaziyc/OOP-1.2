#include <iostream>
#include "square.h"
using namespace std;
int main()
{
	square g;
	g.Read();
	g.side();
	g.area();
	g.perimeter();
	g.Display();
	g.Init(0,0,0,0);
	cout << "fe" << endl;
	return 0;
}
