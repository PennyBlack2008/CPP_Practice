
int main(int argc, char* argv[])
{
	if (argc == 2)
	{
		std::string str(argv[1]);

		try
		{
			std::cout << "char: ";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}
}