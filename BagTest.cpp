/*
#include <string>
#include <sstream>
#include "KVPair.h"
#include "ABag.h"

using namespace std;

KVpair<int, string> intStr1(1, "love");
KVpair<int, string> intStr2(2, "compassion");
KVpair<int, string> intStr3(3, "integrity");
KVpair<int, string> intStr4(4, "honesty");

KVpair<int, string> test1(1, "love");
KVpair<int, string> test2(1, "other");
KVpair<int, string> test3(2, "compassion");
KVpair<int, string> test4(2, "other");
KVpair<int, string> test5(3, "integrity");
KVpair<int, string> test6(3, "other");
KVpair<int, string> test7(4, "honesty");
KVpair<int, string> test8(4, "other");

KVpair<string, int> strInt1("love", 1);
KVpair<string, int> strInt2("compassion", 2);
KVpair<string, int> strInt3("integrity", 3);
KVpair<string, int> strInt4("honesty", 4);

KVpair<string, int> test9("love", 1);
KVpair<string, int> test10("love", 5);
KVpair<string, int> test11("compassion", 2);
KVpair<string, int> test12("compassion", 6);
KVpair<string, int> test13("integrity", 3);
KVpair<string, int> test14("integrity", 7);
KVpair<string, int> test15("honesty", 4);
KVpair<string, int> test16("honesty", 8);

KVpair<int, string> emptyIntStr;
KVpair<string, int> emptyStrInt;

int main()
{
	cout << "start intStr test\n\n";

	ABag<KVpair<int, string>>* intStr = new ABag<KVpair<int, string>>;

	cout << "Size/cap check\n----------\n" << "intStr size: " << intStr->size() << '\n' << "intStr cap: " << intStr->bagCapacity() << "\n\n";

	cout << "intStr pointer: " << intStr << "\n\n";

	intStr->addItem(intStr1);
	intStr->addItem(intStr2);
	intStr->addItem(intStr3);
	*intStr += intStr4;

	cout << "Size/cap check 1\n----------\n" << "intStr size: " << intStr->size() << '\n' << "intStr cap: " << intStr->bagCapacity() << "\n\n";

	intStr->remove(intStr1);

	cout << "Size/cap check 2\n----------\n" << "intStr size: " << intStr->size() << '\n' << "intStr cap: " << intStr->bagCapacity() << "\n\n";

	intStr->removeTop(emptyIntStr);

	cout << "Size/cap check 3\n----------\n" << "intStr size: " << intStr->size() << '\n' << "intStr cap: " << intStr->bagCapacity() << "\n\n";

	bool intStrInspTop = intStr->inspectTop(emptyIntStr);
	if (intStrInspTop == true)
		cout << "intStr top value is: " << emptyIntStr.key() << "\n\n";
	else
		cout << "intStr inspectTop() failed\n\n";

	intStr->emptyBag();

	cout << "Find check\n----------\n"
		<< "Found 1 (first): " << intStr->find(test1) << '\n'
		<< "Found 1 (second): " << intStr->find(test2) << '\n'
		<< "Found 2 (first): " << intStr->find(test3) << '\n'
		<< "Found 2 (second): " << intStr->find(test4) << '\n'
		<< "Found 3 (first): " << intStr->find(test5) << '\n'
		<< "Found 3 (second): " << intStr->find(test6) << "\n"
		<< "Found 4 (first): " << intStr->find(test7) << '\n'
		<< "Found 4 (second): " << intStr->find(test8) << "\n\n";

	cout << "Deleting intStr\n\n";

	delete intStr;

	intStr = NULL;

	cout << "intStr pointer: " << intStr << "\n\n";




	cout << "end intStr test\n\n\n\n\n\nbegin strInt test\n\n";




	ABag<KVpair<string, int>>* strInt = new ABag<KVpair<string, int>>;

	cout << "Size/cap check\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	cout << "strInt pointer: " << strInt << "\n\n";

	strInt->addItem(strInt1);
	strInt->addItem(strInt2);
	strInt->addItem(strInt3);
	*strInt += strInt4;

	cout << "Size/cap check 1\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	strInt->remove(strInt2);

	cout << "Size/cap check 2\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	strInt->removeTop(emptyStrInt);

	cout << "Size/cap check 3\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	bool strIntInspTop = strInt->inspectTop(emptyStrInt);
	if (strIntInspTop == true)
		cout << "strInt top value is: " << emptyStrInt.key() << "\n\n";
	else
		cout << "strInt inspectTop() failed\n\n";

	strInt->emptyBag();

	cout << "Find check\n----------\n"
		<< "Found 1 (first): " << strInt->find(test9) << '\n'
		<< "Found 1 (second): " << strInt->find(test10) << '\n'
		<< "Found 2 (first): " << strInt->find(test11) << '\n'
		<< "Found 2 (second): " << strInt->find(test12) << '\n'
		<< "Found 3 (first): " << strInt->find(test13) << '\n'
		<< "Found 3 (second): " << strInt->find(test14) << "\n"
		<< "Found 4 (first): " << strInt->find(test15) << '\n'
		<< "Found 4 (second): " << strInt->find(test16) << "\n\n";

	cout << "Deleting strInt\n\n";

	delete strInt;

	strInt = NULL;

	cout << "strInt pointer: " << strInt << "\n\n";

	cout << "end strInt test\n\n";

	system("pause");
	return 0;
}
*/