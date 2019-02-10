
        
            while s % 2 == 0:
        s = s // 2
        t += 1
    
    
class SubArray:
    
        dp = [[False for x in range(s+1)]for y in range(n+1)]