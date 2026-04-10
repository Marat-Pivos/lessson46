#include "util.h"
#include "logic.h"

int main() {
	int array[DEF_SIZE];

	int size;

	cout << "Input siz eof array: ";
	cin >> size;

	init(array, size, 0, 100);

	print("Array: ");
	print(convert(array, size));

	int max = get_max(array, size);
	int min = get_min(array, size);
	int arit = calculate_arithmetical_mean(array, size);

	print("\nMax value is " + to_string(max) + ".");
	print("\nMin value is " + to_string(min) + ".");
	print("\narith mean is " + to_string(arit) + ".");
	return 0;
}
