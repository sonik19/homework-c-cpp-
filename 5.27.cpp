#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
 
#define FILENAME "file.txt"
 
int main()
{
    bool f = true;
    
    double maxNum;
    ifstream file;
 
    file.open(FILENAME);
 
    double temp;
    
    while(file_1>>temp){
        if(f==true){
            f=false;
            maxNum=temp;
        }
        if(temp>maxNum){
            maxNum=temp;
        }
            
    }
    file.close();
    
    cout << maxNum;
    
    return 0;
}
