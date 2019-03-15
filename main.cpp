#include <iostream>
#include <vector>
#include "mysort.h"
#include <algorithm>

using namespace std;
int main()
{
    vector<int> k={1,5,65,46,4,4,654,56,1,1,654,6,1,65,56,8,48,64,6,46,4,1};
    std::cout<<"original: "<<endl;
    for(auto iter:k)
    {
        cout<<iter<<' ';
    }
    cout<<endl;
    mysort sort;
    std::sort(k.begin(),k.end());
    auto j=sort.quickSort(k,0,k.size()-1);
    for(auto iter:j)
    {
        cout<<iter<<' ';
    }
    cout<<endl;
    auto a=sort.simpleInsertSort(k);
    for(auto iter:a)
    {
        cout<<iter<<' ';
    }
    cout<<endl;
    auto b=sort.shellSort(k);
    for(auto iter:b)
    {
        cout<<iter<<' ';
    }
    cout<<endl;
    auto c=sort.simpleSelectSort(k);
    for(auto iter:c)
    {
        cout<<iter<<' ';
    }
    cout<<endl;
    auto d=sort.heapSort(k);
    for(auto iter:d)
    {
        cout<<iter<<' ';
    }
    cout<<endl;
    auto e=sort.mergeSort(k,0,k.size()-1);
    for(auto iter:e)
    {
        cout<<iter<<' ';
    }

}