/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let result = []
    let hash = {}
    for(let  i = 0; i < nums.length; i++){
        if(hash[target - nums[i]] !== undefined){
            result.push(i);
            result.push(hash[target - nums[i]])
            break
        }
        else
            hash[nums[i]] = i;
    }
    return result;
};