/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/flatten-list
@Language: C++
@Datetime: 16-10-27 02:17
*/

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer,
 *     // rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds,
 *     // if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds,
 *     // if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    // @param nestedList a list of NestedInteger
    // @return a list of integer
    vector<int> flatten(vector<NestedInteger> &nestedList) {
        // Write your code here
        vector<int> vec;
        insert(nestedList , vec);
        return vec;
    }
    void insert(vector<NestedInteger> nestedList, vector<int> &vec){
        if (nestedList.size() != 0){
        for ( auto i : nestedList ) {
        if (i.isInteger()) {
            vec.push_back(i.getInteger());
        } else { insert(i.getList(), vec); }
       }
     }
    }
};