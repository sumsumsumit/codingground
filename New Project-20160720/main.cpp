#include <iostream>
#include <string.h>

using namespace std;

int reverseString(char *inputStr)
{
    int len = strlen(inputStr) + 1;
    cout<<"len = "<<len<<endl;
    cout<<"inputStr = "<<inputStr<<endl;
    for(int i = 0,j = len-2; i < len/2; i++,j--)
    {
        char temp = inputStr[i];
        inputStr[i] = inputStr[j];
        inputStr[j] = temp;
        //cout<<"i = "<<i<<", j = "<<j<<endl;
    }
    cout<<"outStr = "<<inputStr<<endl;
    
    return 0;
}

int main(int argc, char* argv[])
{
   cout << "Hello World" << endl; 
   if(argc < 2)
     cout<<"incomplete arguements list"<<endl;
     
     cout<<"Befor reverse = "<<argv[1]<<endl;
     reverseString(argv[1]);
     
     cout<<"After reverse = "<<argv[1]<<endl;
   
   return 0;
}

