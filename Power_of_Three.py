'''
Given an integer, write a function to determine if it is a power of three.

Example 1:

Input: 27
Output: true
Example 2:

Input: 0
Output: false
Example 3:

Input: 9
Output: true
Example 4:

Input: 45
Output: false
Follow up:
Could you do it without using any loop / recursion?
'''
class Solution:
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        num = n
        status = 1
        if(n<=0):
            return False
        while(num>0 and num!=1):
            rem = num % 3
            if(rem!=0):
                status = 0
                break
            else:
                num = num / 3
        if(status == 1):
            return True
        else:
            return False
