##hello leet code

class Solution(object):
    def twoSum(self, nums, target):

        tam = len(nums)

        if(tam == 2):
            return [0, 1]
        else:
            i = 0
            j = 1
            while((nums[i]+nums[j]) != target and i != tam-2):
                if(j == tam-1):
                    j = i + 1
                    i = i + 1
                j = j + 1
        return [i, j]
