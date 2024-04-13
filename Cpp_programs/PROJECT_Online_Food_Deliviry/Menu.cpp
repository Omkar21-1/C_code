#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Menu
{
	string res_id;
	ifstream menu_file;
	public:
		Menu(string id="") : res_id(id) 
		{
			menu_file.open("menu_file.txt",ios::app);
		}
		Menu(Menu &M) : res_id(M.res_id) 
		{
			menu_file.open("menu_file.txt",ios::app);
		}	
		
		void display_menu()
		{
			int flag = 0;
			std::string line;
			while (std::getline(menu_file, line)) 
			{
				if (line.find(res_id) != std::string::npos) 
				{
					// Found the line containing ID 201, print it
					std::cout << line << std::endl;
					// Read and print the next lines until a line break
					while (std::getline(menu_file, line) && line.size()!=0) 
					{
						std::cout << line << std::endl;
					}
					flag = 1;
					break; // Exit the loop after printing the required section
				}
			}			
		}
		
		
		
		~Menu()
		{
			menu_file.close();
		}
};


int main() {
	Menu obj("ID : 203");
	obj.display_menu();
    
    return 0;
}
