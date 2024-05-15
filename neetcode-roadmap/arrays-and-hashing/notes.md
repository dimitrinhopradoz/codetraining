# Important things to mention
* Interesting dictionary with default values:
```python
from collections import defaultdict 
```
* Use hashmaps whenever you need to track the targets visited.
```python
def contains_duplicate_after(nums):
        visited = set()
        for num in nums:
            if num in visited:
                return True
            visited.add(num)
        return False
```