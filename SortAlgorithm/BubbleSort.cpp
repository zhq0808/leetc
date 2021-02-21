#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

/**
 * 交换两个数的值
 */
void swap(int &num1, int& num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

/**
 * 获取数组的长度
 */
int getArrSize(int arr[]){
    return (int)sizeof(* arr)/(int)sizeof(arr[0]);
}

/**
 * 算法名：冒泡排序
 * 过程：从0到N-1依次比较相邻两个数的大小，如果arr[i]>arr[j]交换相邻的两个数，使得最大的数放置在N-1位置出
 */
void bubbleSort(vector<int> &arrTest){
    for(int i = arrTest.size() - 1; i >=0; i--){
        for(int j = 0; j < i; j++){
            if(arrTest[j] > arrTest[j+1]){
                swap(arrTest[j],arrTest[j+1]);
            }
        }
    }
}

/**
 * 算法名：冒泡排序
 * 过程：从0到N-1依次比较相邻两个数的大小，如果arr[i]>arr[j]交换相邻的两个数，使得最大的数放置在N-1位置出
 */
void bubbleSortInt(int* arrTest){
    for(int i = getArrSize(arrTest) - 1; i >=0; i--){
        for(int j = 0; j < i; j++){
            if(arrTest[j] > arrTest[j+1]){
                swap(arrTest[j],arrTest[j+1]);
            }
        }
    }
}

/**
 * 算法名：生成随机数组(min~max)
 */
int* getRanDomArr0(int size, int min, int max, int* arrRandom){
    //vector<int> arrRandom;
    for(int i = 0; i < size; i++){
        arrRandom[i] = (rand()%(max - min + 1))+min;
    }
    return arrRandom;
}

/**
 * 算法名：生成随机数组(min~max)
 */
int* getRanDomArr(int size, int value, int* arrRandom){
    //vector<int> arrRandom;
    for(int i = 0; i < size; i++){
        //使用减法这样就可以产生负数
        arrRandom[i] = rand()%value - rand()%value;
    }
    return arrRandom;
}

/**
 * 算法名：判断两个数组是否相等
 */
bool compareTwoArr(int arr1[], int arr2[]){
    if((arr1 == nullptr && arr2 != nullptr) || (arr1 == nullptr && arr2 != nullptr)){
        return false;
    }

    int arr1_size = getArrSize(arr1);
    int arr2_size = getArrSize(arr2);

    if(arr1_size != arr2_size){
        return false;
    }

    for(int i = 0; i < arr1_size; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

/**
 * 算法名：生成随机数组(min~max)
 */
void printArr(int arr[]){
    int arr_size = getArrSize(arr);
    for(int i = 0; i < arr_size; i++){
        cout<< arr[i] <<endl;
    }
}



int main(){
    int times = 1;
    while(times--){
        //生成随机数组
        int* testArr;
        testArr = getRanDomArr(10, 10, testArr);
        
    } 
    return 0;
}


