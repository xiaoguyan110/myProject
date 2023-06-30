#include <iostream>
#include <fstream>
#include <sstream>

#include "dealfile.h"
#include "sales.h"

using namespace std;

int main(int argc, char ** argv)
{

    if(argc != 3)
    {
        cerr << "usage: " << argv[0] << " infile outfile" << endl;
        return 0;
    }
    if(!DealFile::exists_file1(argv[1]))
    {
        cerr << "file noexistent:" << argv[1] << endl;
        return -1;
    }


    if(!DealFile::exists_file1(argv[2]))
    {
        cerr << "file noexistent:" << argv[2] << endl;
        return -1;
    }

    Sales sale_data;    
    ifstream input(argv[1]);
    ofstream output(argv[2]);

    if(read(input, sale_data))
    {
        Sales trans;
        while(read(input, trans))
        {
            if(sale_data.isbn() == trans.isbn())
                sale_data.combine(trans);
            else
            {
                print(output, sale_data) << endl;
                sale_data = trans;   
            }

        }
        print(output, sale_data) << endl;


    }
    else
        cerr << "No data?!" << endl;

}