#pragma warning(push)
#pragma warning(disable:4067)
#pragma warning(disable:4624)
#pragma warning(disable:4819)
#include <torch/torch.h>
#pragma warning(pop)
#include <iostream>

int main()
{
	torch::Device Device([]() { return torch::cuda::is_available() ? torch::kCUDA : torch::kCPU; }());
	std::cout << "Hello LibTorch" << std::endl;
	std::cout << "Device Type = " << Device.type() << std::endl;

	std::cin.get();
}