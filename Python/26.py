class Solution:
    def removeDuplicates(self, nums):
        if nums == []:
            return 0
        index = 0
        for i in range(1, len(nums)):
            if nums[index] == nums[i]:
                continue
            else:
                nums[index+1] = nums[i]
                index+= 1
        return index + 1


if __name__ == '__main__':
    s = Solution()
    nums = [0, 0, 1, 1, 1, 2, 2, 3, 4, 5, 6, 7]
    lens = s.removeDuplicates(nums)
    print(lens)
    for i in range(lens):
        print(nums[i])