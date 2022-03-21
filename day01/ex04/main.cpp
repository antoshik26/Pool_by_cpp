#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	std::string buffer;
	std::string s1;
	std::string s2;
	std::string file_name;
	std::ifstream file_1;
	std::ofstream file_2; 
	std::string file_replace;
	int i;
	int k;


	file_name = argv[1];
	file_replace = file_name + "replace";
	file_1.open(file_name, std::ios::in);
	file_2.open(file_replace, std::ios::out | std::ios::trunc);
	s1 = argv[2];
	s2 = argv[3];
	while(std::getline(file_1, buffer))
	{
		i = 0;
		while ((i = buffer.find(s1, i)) != std::string::npos)
		{
			k = 0;
			for (int j = 0; j < s1.length(); j++)
			{
				buffer[i + j] = s2[j];
			}
		}
		file_2 << buffer << std::endl;
	}
	file_1.close();
	file_2.close();
	return (0);
}