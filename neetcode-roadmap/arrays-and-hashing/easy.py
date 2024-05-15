from collections import defaultdict 

def contains_duplicate_mine(nums):
        visited = {}
        for index, value in enumerate(nums):
            if value in visited:
                return True
            visited[value] = 1
        return False

def contains_duplicate_after(nums):
        visited = set()
        for num in nums:
            if num in visited:
                return True
            visited.add(num)
        return False


def valid_anagram_mine(s, t):
        if(len(s) != len(t)):
             return False
        symbols_s = {}
        symbols_t = {}
        lenght = len(s)
        for i in range(lenght):
            if s[i] not in symbols_s: 
                 symbols_s[s[i]] = 0
            symbols_s[s[i]] += 1
            if t[i] not in symbols_t: 
                symbols_t[t[i]] = 0
            symbols_t[t[i]] += 1
        for value in symbols_s.keys():
            if value not in symbols_t or symbols_s[value] != symbols_t[value]:
                 return False
        return True

def valid_anagram_after(s, t):
        if(len(s) != len(t)):
            return False
        symbols_s = defaultdict(int)
        symbols_t = defaultdict(int)
        lenght = len(s)
        for i in range(lenght):
            symbols_s[s[i]] += 1
            symbols_t[t[i]] += 1
        for value in symbols_s.keys():
            if value not in symbols_t or symbols_s[value] != symbols_t[value]:
                 return False
        return True

def valid_anagram_other(s, t):
    count = defaultdict(int)
    for x in s:
        count[x] += 1
    for x in t:
        count[x] -= 1
    for val in count.values():
        if val != 0:
            return False
    return True

def two_sum_mine(nums, target):
     visited = {}
     for index, number in enumerate(nums):
        if target - number in visited:
            return [visited[target - number], index]
        visited[number] = index


print(two_sum_mine([2,7,11,15],9))