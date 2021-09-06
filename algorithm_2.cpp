#include <iostream>
#include <vector>
#include <numeric>

//copy

int main()
{
	std::vector<int> from_vector(10);
	std::iota(from_vector.begin(), from_vector.end(), 0);//从0开始递增10个数
	std::copy(from_vector.begin(), from_vector.end(),
		std::ostream_iterator<int>(std::cout, " "));


	std::string out;
	std::string v = "123456789";
	std::copy_n(v.begin(),5, std::back_inserter(out));//复制前五位给out，back_inserter使用push_back()在容器尾端安插元素，元素排列顺序和安插顺序相同。
	std::cout << "\n"<<out << std::endl;


	std::vector<int> v1{ 1,5,7,8,9,13 };
	std::vector<int> v2{ 100,200,300 };
	auto it = std::copy_backward(v2.begin(), v2.end(), v1.end()-2);//从后往回复制[begin,end)范围内的元素到v1中。
	std::cout << "v1=";
	for (int& i : v1)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "v2=";
	for (int& i : v2)
		std::cout << i << " ";





}
