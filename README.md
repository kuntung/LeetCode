# VScode上的刷题笔记
用来记录`leetcode`的刷题笔记

# 知识点总结

## 位运算
### 二进制的源码、补码、反码
1. 补码：在补码表示中，最高位为符号位，`0正1负`

2. 原码：最高位为符号位，其他位相同

3. 正整数的补码是其二进制表示，与原码相同

4. 求负整数的补码，将其原码除符号位外的所有位取反（0变1，1变0，符号位为1不变）后加1

4. 已知一个数的补码，求原码的操作其实就是对该补码再求补码
    > 对于数-5原码：10000101, 补码：11111011
    > 已知一个补码为11111001，则原码是10000111（-7）
    
6. `&&`逻辑与的特性：短路原理

    ```c++
    //求1+2+3+...+n
    int sumNums(int n) {
        // //牛
        // bool arr[n][n+1];
        // return sizeof(arr)>>1;
        n && (n += sumNums(n-1)); //递归实现，终止条件为n == 1;
        return n;
    }
    ```

    

### 相关题型：


## 常用函数
### 上下取整函数
1. ceil:需要#include<cmath>,并且里面元素需要强转为`float`
   
    > 参考[森林中的兔子](https://leetcode-cn.com/problems/rabbits-in-forest/)

**要点：** C++中C++有符号和无符号整型（unsigned int），32位操作系统下：
- 有符号：-2147483648 ~ 2147483647
- 无符号：0~4294967295（2的32次方减1）
- 对于函数返回值类型为bool,不能通过返回数字的形式。不然容易出错。
    > 比如：返回所查找的元素是否存在[1,3,2],target = 1;
    >
    > 真实结果是找到了target1的`下标0`，但是直接返回会将0视为`false`**功能错误**

## 二分搜索法总结
1. 当数组元素有序时，采用二分搜索法。
2. 当数组元素有序，但被旋转后解法
    - 寻找旋转点，然后在每一段进行查找
    - 直接二分查找

3. 二分查找的细节问题：
    - 寻找左侧边界问题：相当于判断小于该target的元素个数。如果全部都小于该元素，则有可能溢出。应该对返回的left进行判断
    - 寻找右侧边界问题：相当于判断小于等于该target的元素个数，如果全部都大于该元素，那么返回值为—1,需要进行相关处理

    ```java
    // 查找第一个值等于给定值的元素
    private int firstEquals(int[] arr, int target) {
        int l = 0, r = arr.length - 1;
        while (l < r) {
            int mid = l + ((r - l) >> 1);
            if (arr[mid] < target) l = mid + 1;
            else r = mid; // 收缩右边界不影响 first equals
        }
        if (arr[l] == target && (l == 0 || arr[l - 1] < target)) return l;
        return -1;
    }
    // 查找最后一个值等于给定值的元素
    private int lastEquals(int[] arr, int target) {
        int l = 0, r = arr.length - 1;
        while (l < r) {
            int mid = l + ((r - l + 1) >> 1);
            if (arr[mid] > target) r = mid - 1;
            else l = mid; // 收缩左边界不影响 last equals
        }
        if (arr[l] == target && (l == arr.length - 1 || arr[l + 1] > target)) return l;
        return -1;
    }
    // 查找第一个大于等于给定值的元素
    private int firstLargeOrEquals(int[] arr, int target) {
        int l = 0, r = arr.length - 1;
        while (l < r) {
            int mid = l + ((r - l) >> 1);
            if (arr[mid] < target) l = mid + 1;
            else r = mid; // 收缩右边界不影响 first equals
        }
        if (arr[l] >= target && (l == 0 || arr[l - 1] < target)) return l; // >=
        return -1;
    }
    // 查找最后一个小于等于给定值的元素
    private int lastLessOrEquals(int[] arr, int target) {
        int l = 0, r = arr.length - 1;
        while (l < r) {
            int mid = l + ((r - l + 1) >> 1);
            if (arr[mid] > target) r = mid - 1;
            else l = mid; // 收缩左边界不影响 last equals
        }
        if (arr[l] <= target && (l == arr.length - 1 || arr[l + 1] > target)) return l; // <=
        return -1;
    }
    ```

## 二叉树相关
> 二叉树相关细节：
>
> 1. 对于二叉树，链表等问题，必须要判断数是否为空等
### 二叉树的遍历问题
1. 递归遍历：简单
2. 迭代遍历：前中后层
    - 颜色标记法
    - 辅助栈法