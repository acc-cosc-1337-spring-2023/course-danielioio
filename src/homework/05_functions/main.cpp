#include"func.h"
using std::cin; using std::cout;

int main() 
{
	auto option = 0;
	auto choice = 'y';
	string result;
	string sequence;

	 
	do
	{
		cout<<"Choose an option""\n";
		cout<<"1. Get GC Content""\n";
		cout<<"2. Get DNA Complement""\n";
		cout<<"3. Exit""\n";
		cin>>option;

		if(option == 1)

		{
			cout<<"Enter a dna sequence: ""\n";
			cin>>sequence;
			result = get_gc_content(sequence);
			cout<<"The GC Content is: "<<result<<"\n";
			
		}

		else if(option == 2)

		{
			cout<<"Enter the dna sequence: ""\n";
			cin>>sequence;
			result = get_dna_complement(sequence);
			cout<<"The DNA Complement is: "<<result<<"\n";
			
		}

		else if(option == 3)

		{
			cout<<"Are you sure you want to exit? ""\n";
			cout<<"Enter 'y' for yes: ";
			cin>>choice;
		}


	}
	while(choice != 'y');

	return 0;
}