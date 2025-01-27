#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data data;
	data.value = 42;
	Data* original = &data;

	uintptr_t serialized = Serializer::serialize(original);
	Data* deserialized = Serializer::deserialize(serialized);

	deserialized->value = 100;
	std::cout << data.value << std::endl;
	if (original == deserialized) {
		std::cout << "Success!" << std::endl;
	} else {
		std::cout << "Failure!" << std::endl;
	}
	return 0;
}