# 用  前缀和数组 + 哈希  解决问题
## 问题描述
  给定一个整数数组 nums 和一个整数 k ，返回其中元素之和可被 k 整除的（连续、非空） 子数组的数目。
  
### 前缀和数组
  给定一个数组，其对应的前缀和数组每一项的值等于原数组前面所有项的值（包括当前项）的总和，且通常前缀和第一项为 -1 ，值为0。<br>
  即：  Presum -1 = 1;<br>
        Presum i = presum i-1  +  array  i ;(0 <= i < size(array))<br>
        
### 哈希表在寻找重复元素中的应用
  将元素的值作为索引，索引对应的内容作为出现次数进行存储，可以快速得到多个元素中重复元素的个数，复杂度为O（n）<br>
