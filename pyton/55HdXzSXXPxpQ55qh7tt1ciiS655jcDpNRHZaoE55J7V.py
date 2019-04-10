
        
        min_primitive_root = 3
    
        def bulk_insert(self, values):
        i = 1
        self.__aux_list = values
        for value in values:
            self.insert_data(value)
            self._step_by_step(i)
            i += 1
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
    def getItemAtIndexZero(x):
    return x[0]