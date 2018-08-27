
        
        
class PostgresSimpleLookup(Lookup):
    def as_sql(self, qn, connection):
        lhs, lhs_params = self.process_lhs(qn, connection)
        rhs, rhs_params = self.process_rhs(qn, connection)
        params = lhs_params + rhs_params
        return '%s %s %s' % (lhs, self.operator, rhs), params
    
        def __init__(self, name):
        self.name = name
    
    
class SessionStore(SessionBase):
    '''
    A cache-based session store.
    '''
    cache_key_prefix = KEY_PREFIX