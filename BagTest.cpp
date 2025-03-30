#include <string>
#include <sstream>
#include "KVPair.h"
#include "ABag.h"

using namespace std;

KVpair<int, string> intStr1(1, "love");
KVpair<int, string> intStr2(2, "compassion");
KVpair<int, string> intStr3(3, "integrity");

KVpair<int, string> test1(1, "love");
KVpair<int, string> test2(1, "other");
KVpair<int, string> test3(2, "compassion");
KVpair<int, string> test4(2, "other");
KVpair<int, string> test5(3, "integrity");
KVpair<int, string> test6(3, "other");

KVpair<string, int> strInt4("love", 1);
KVpair<string, int> strInt5("compassion", 2);
KVpair<string, int> strInt6("integrity", 3);

KVpair<string, int> test7("love", 1);
KVpair<string, int> test8("love", 4);
KVpair<string, int> test9("compassion", 2);
KVpair<string, int> test10("compassion", 5);
KVpair<string, int> test11("integrity", 3);
KVpair<string, int> test12("integrity", 6);

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

	cout << "Size/cap check 1\n----------\n" << "intStr size: " << intStr->size() << '\n' << "intStr cap: " << intStr->bagCapacity() << "\n\n";

	intStr->remove(intStr1);

	cout << "Size/cap check 2\n----------\n" << "intStr size: " << intStr->size() << '\n' << "intStr cap: " << intStr->bagCapacity() << "\n\n";

	intStr->removeTop(emptyIntStr);

	cout << "Size/cap check 3\n----------\n" << "intStr size: " << intStr->size() << '\n' << "intStr cap: " << intStr->bagCapacity() << "\n\n";

	cout << "Find check\n----------\n"
		<< "Found 1 (first): " << intStr->find(test1) << '\n'
		<< "Found 1 (second): " << intStr->find(test2) << '\n'
		<< "Found 2 (first): " << intStr->find(test3) << '\n'
		<< "Found 2 (second): " << intStr->find(test4) << '\n'
		<< "Found 3 (first): " << intStr->find(test5) << '\n'
		<< "Found 3 (second): " << intStr->find(test6) << "\n\n";

	cout << "Deleting intStr\n\n";

	delete intStr;

	intStr = NULL;

	cout << "intStr pointer: " << intStr << "\n\n";




	cout << "end intStr test\n\n\n\n\n\nbegin strInt test\n\n";




	ABag<KVpair<string, int>>* strInt = new ABag<KVpair<string, int>>;

	cout << "Size/cap check\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	cout << "strInt pointer: " << strInt << "\n\n";

	strInt->addItem(strInt4);
	strInt->addItem(strInt5);
	strInt->addItem(strInt6);

	

	cout << "Size/cap check 1\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	strInt->remove(strInt4);

	cout << "Size/cap check 2\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	strInt->removeTop(emptyStrInt);

	cout << "Size/cap check 3\n----------\n" << "strInt size: " << strInt->size() << '\n' << "strInt cap: " << strInt->bagCapacity() << "\n\n";

	cout << "Find check\n----------\n"
		<< "Found 1 (first): " << strInt->find(test7) << '\n'
		<< "Found 1 (second): " << strInt->find(test8) << '\n'
		<< "Found 2 (first): " << strInt->find(test9) << '\n'
		<< "Found 2 (second): " << strInt->find(test10) << '\n'
		<< "Found 3 (first): " << strInt->find(test11) << '\n'
		<< "Found 3 (second): " << strInt->find(test12) << "\n\n";

	cout << "Deleting strInt\n\n";

	delete strInt;

	strInt = NULL;

	cout << "strInt pointer: " << strInt << "\n\n";

	cout << "end strInt test\n\n";

	system("pause");
	return 0;
}