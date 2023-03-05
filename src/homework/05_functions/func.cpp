//add include statements
#include "func.h"
#include<iostream>
using std::string;
using std::cout; using std::cin;

//add function code here
double get_gc_content(const string& dna)
{
    double dna_len = 0;
    double gc_count = 0;
    double percent = 0;

    for(double i = 0; i < dna.length(); i ++)
    {
        if(dna[i] == 'C' || dna[i] == 'G')
    
        {
            gc_count++;
            dna_len++;
        }
        else 
        {
            dna_len++;
        }
        percent = (gc_count / dna_len);
    }
return percent;
    
}
string get_dna_complement(string dna)
{
    string result;

    int len = dna.length();
    
    for(char i = 0; i < len -1; i++)

    {
        if(dna[i] = ('A'))
        
            dna[i] = 'T';

        else if(dna[i] = ('T'))

            dna[i] = 'A';

        else if(dna[i] = ('G'))

            dna[i] = 'C';

        else if(dna[i] = ('C'))

            dna[i] = 'G';
        
    }
       result = dna;   
      
return result;

}

string get_reverse_string(string dna)
{
    string result;

    for(int i = dna.length() -1; i >= 0; i--)
    {
        result = dna[i];
    }
return result;
}