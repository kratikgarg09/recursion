#include<iostream> 
using namespace std; 

void reachedHome(int src,int dest)
{
    cout << "source : " << src << " Destination : " << dest << endl; 
    int count = 0;
    if (src == dest)
    {
        cout <<  "Reached Home" << endl;
        return;
    }
    src++;
    reachedHome(src,dest);
}

int main() 
{ 
    int dest = 10;
    int src =  1;

    reachedHome(src,dest);
    return 0;
}