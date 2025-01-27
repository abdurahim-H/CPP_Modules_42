#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
	// uintptr_t num = reinterpret_cast<uintptr_t>(ptr);
	// return num;

	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
