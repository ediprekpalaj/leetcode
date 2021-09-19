class Solution:
    def isHappy(self, n: int) -> bool:
        visited = set()
        
        while n != 1:
            if n in visited:
                return False
            
            visited.add(n)
            
            str2 = str(n)
            
            n = 0
            for i in str2:
                n += int(i) ** 2
        
        return True
        