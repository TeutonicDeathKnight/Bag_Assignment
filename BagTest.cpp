#include <string>
#include <sstream>
#include "KVPair.h"
#include "ABag.h"

using namespace std;

int main()
{
	cout << "Start of program\n\n";

	ABag<int>* bag1 = new ABag<int>(2);

	cout << "Bag1 size: " << bag1->size() << '\n' << "Bag1 cap: " << bag1->bagCapacity() << "\n\n";

	cout << "Bag1 pointer: " << bag1 << "\n\n";

	cout << bag1->addItem(1) << "\n";
	cout << bag1->addItem(3) << "\n";
	cout << bag1->addItem(92) << "\n\n";

	cout << "Bag1 size: " << bag1->size() << '\n' << "Bag1 cap: " << bag1->bagCapacity() << "\n\n";

	cout << "Deleting bag1\n\n";

	delete bag1;

	bag1 = NULL;

	cout << "Bag1 pointer: " << bag1 << "\n\n";

	cout << "End of program\n\n";

	system("pause");
	return 0;
}