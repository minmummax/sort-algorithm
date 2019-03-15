//
// Created by wangKun on 2019/3/6.
//

#ifndef EXAMPLE_MYSORT_H
#define EXAMPLE_MYSORT_H

#include <vector>
class mysort
{
private:
    std::vector<int> list;
public:
    mysort();
    mysort(std::vector<int> &list);
    //交换排序
    std::vector<int> bubbleSort(std::vector<int> &list);
    std::vector<int> quickSort(std::vector<int> &list, unsigned long low, unsigned long high);
    //插入排序
    std::vector<int> simpleInsertSort(std::vector<int> &list);
    std::vector<int> shellSort(std::vector<int> &list);
    //选择排序
    std::vector<int> simpleSelectSort(std::vector<int> &list);
    std::vector<int> heapSort(std::vector<int> &list);
    //归并排序
    std::vector<int> mergeSort(std::vector<int> &list,unsigned long low, unsigned long high);
};
#endif //EXAMPLE_MYSORT_H
