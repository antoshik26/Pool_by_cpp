#include <iostream>

typedef struct	Data
{
	std::string data1;
	std::string data2;
}				Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data *data = new Data();
	data->data1 = "sdfgh";
	data->data2 = "fijpthgf";
	uintptr_t serialized = serialize(data);
	
	std::cout << "Data address : " << data << std::endl;
	std::cout << "Serialize    : " << serialized << std::endl;
	std::cout << "Deserialize  : " << deserialize(serialized) << std::endl;
	std::cout << "Deserialize  : " << deserialize(serialized)->data1 << std::endl;
	std::cout << "Deserialize  : " << deserialize(serialized)->data1 << std::endl;
	return (0);
}