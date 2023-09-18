/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function(nums) {
    result = []
    let hash = {}
    for(let i = 0; i < nums.length; i++){
        if(hash[nums[i]])
            hash[nums[i]] = hash[nums[i]] + 1;  
        else 
            hash[nums[i]] = 1;
    }

    for(let elt of Object.keys(hash)){
        if(hash[elt] !== 1)
            result.push(elt)
    }

    return result;
};