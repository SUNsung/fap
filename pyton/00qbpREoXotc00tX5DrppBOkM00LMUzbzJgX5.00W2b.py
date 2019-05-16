
        
            def exists(self, session_key):
        return self.model.objects.filter(session_key=session_key).exists()
    
    
def helper2(n, length):
    if n == 0:
        return ['']
    if n == 1:
        return ['0', '8', '1']
    mids = helper(n-2, length)
    res = []
    for mid in mids:
        if n != length:
            res.append('0'+mid+'0')
        res.append('1'+mid+'1')
        res.append('6'+mid+'9')
        res.append('9'+mid+'6')
        res.append('8'+mid+'8')
    return res

    
    # Python solution with two tables (~196ms):
def multiply(self, a, b):
    '''
    :type A: List[List[int]]
    :type B: List[List[int]]
    :rtype: List[List[int]]
    '''
    if a is None or b is None: return None
    m, n = len(a), len(b[0])
    if len(b) != n:
        raise Exception('A's column number must be equal to B's row number.')
    l = len(b[0])
    table_a, table_b = {}, {}
    for i, row in enumerate(a):
        for j, ele in enumerate(row):
            if ele:
                if i not in table_a: table_a[i] = {}
                table_a[i][j] = ele
    for i, row in enumerate(b):
        for j, ele in enumerate(row):
            if ele:
                if i not in table_b: table_b[i] = {}
                table_b[i][j] = ele
    c = [[0 for j in range(l)] for i in range(m)]
    for i in table_a:
        for k in table_a[i]:
            if k not in table_b: continue
            for j in table_b[k]:
                c[i][j] += table_a[i][k] * table_b[k][j]
    return c
