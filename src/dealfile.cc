#include "dealfile.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


using namespace std;

bool DealFile::exists_file1 (const std::string& name) 
{
    ifstream f(name.c_str());
    return f.good();
}

bool DealFile::exists_file2 (const std::string& name) 
{
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }   
}

bool DealFile::exists_file3 (const std::string& name) 
{
    return ( access( name.c_str(), F_OK ) != -1 );
}

bool DealFile::exists_file4 (const std::string& name) 
{
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}