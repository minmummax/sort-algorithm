//
// Created by wangKun on 2019/3/6.
//

#include "mysort.h"
#include <iostream>
#include <algorithm>
void swap(int &a, int &b) {
    auto temp=a;
    a=b;
    b=temp;
}

const int N = 204800;
mysort::mysort() {
    std::vector<int> t={4,5,5,9,1,2};
    this->list=t;
}
mysort::mysort(std::vector<int> &list) {
  this->list=list;
}
//冒泡
std::vector<int> mysort::bubbleSort(std::vector<int> &list) {
    //主要确定双层循环的上下界
    std::cout<<"using bubblesort"<<std::endl;
    double len=list.size();
    for (auto (i) = 0; (i) < len-1; ++(i)) {
        for (auto j = 0; j < len-i-1; ++j) {
            if(list[j]>list[j+1])
            {
               swap(list[j],list[j+1]);
            }
        }
    }
    return list;
}

//快排
static int FLAG=0;
std::vector<int> mysort::quickSort(std::vector<int> &list,unsigned long left, unsigned long right)
{
    if(FLAG==0){std::cout<<"using quickSort"<<std::endl;FLAG++;}
    auto i=left;
    auto j=right;
    auto temp=list[left];
    while (i<j)
    {
        while(list[j]>=temp&&i<j)
        {
            j--;
        }
        if(i<j) {
            list[i] = list[j];i++;
        }
        while (list[i]<=temp&&i<j){
            i++;
        }
        if(i<j){
            list[j]=list[i];j--;
        }
    }
    list[i] = temp;
    if(left<i) {quickSort(list,left,i-1);}
    if(j<right) {quickSort(list,j+1,right);};
    return list;
}
//插入排序
std::vector<int> mysort::simpleInsertSort(std::vector<int> &list) {
    std::cout<<"using simpleInsertSort"<<std::endl;
    if(list.size()==1){ return list;}
    for (auto i=1;i<list.size();++i){
        auto temp=list[i];
        for(auto j=i-1;j>=0;--j){
            if(temp<list[j]){swap(temp,list[j]);}
            else{ break;}
        }
    }
    return list;
}
//希尔排序
std::vector<int> mysort::shellSort(std::vector<int> &list) {
    std::cout<<"using shellSort"<<std::endl;
    auto increment=list.size();
    auto len=list.size();
    while(true){
        increment=increment/3+1; //Knuth提出
        //increment=increment/2; //shell提出
        for(auto i=0;i<len-increment;++i){
            if(list[i]>list[i+increment]){swap(list[i],list[i+increment]);}
        }
        if(increment==1){ break;}
    }
    return list;
}
//选择排序
std::vector<int> mysort::simpleSelectSort(std::vector<int> &list) {
    std::cout<<"using simpleSelectSort"<<std::endl;
    auto min_index=0;
    auto length=list.size();
    for (auto i =0;i<length-1;++i)
    {
        min_index=i;
        for (auto j=i+1;j<length;++j){

            if (list[j]<list[min_index]){min_index=j;}
        }
        swap(list[min_index],list[i]);
    }
    return list;
}


//堆排序
//对于一个数组而言a[n]=[1,2.34,3.6,3.4],构建大顶堆：parent[i]=a[floor[(i-1)/2]];left[i]=a[2*i];right[i]=a[2*i+1]
void heapify(std::vector<int> &list, unsigned long i,unsigned long n){
    unsigned long j;
    int temp;
    j=2*i;//左儿子
    temp=list[i];
    if (j >= n){//i是叶子节点

        return;
    }
    while (j < n) {//i 不是叶子节点


        if (list[j]<list[j+1]) {//左儿子小于右儿子

            j = j + 1;
        }

        if (temp>list[j]) {

            break;
        }

        if (temp <= list[j]) {// 儿子大于父亲就交换

            list[j/2] = list[j];
            list[j] = temp;
            j = j * 2;
        }

    }

}
std::vector<int> mysort::heapSort(std::vector<int> &list) {
    std::cout<<"using heapSort"<<std::endl;
    auto len=list.size();
    for (auto i = len/2-1; i >= 1; i --) {

        heapify(list, i, len);             //先做一次大顶堆
    }
    for(auto i=len-1;i>=1;i--)
    {
        swap(list[1],list[i]);
        heapify(list,1,i-1);
    }
    return list;
}
//归并排序（分治法）
std::vector<int> mysort::mergeSort(std::vector<int> &list, unsigned long p, unsigned long r) {

    return list;
}
