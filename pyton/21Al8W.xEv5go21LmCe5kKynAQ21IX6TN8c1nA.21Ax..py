
        
        '''
    
    
def upgrade():
    op.create_table('dashboard_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('dashboard_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['dashboard_id'], [u'dashboards.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    op.create_table('slice_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('slice_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['slice_id'], [u'slices.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    
            # largeish random divisions: a/b where |a| <= |b| <=
        # 2*|a|; |ans| is between 0.5 and 1.0, so error should
        # always be bounded by 2**-54 with equality possible only
        # if the least significant bit of q=ans*2**53 is zero.
        for M in [10**10, 10**100, 10**1000]:
            for i in range(1000):
                a = random.randrange(1, M)
                b = random.randrange(a, 2*a+1)
                self.check_truediv(a, b)
                self.check_truediv(-a, b)
                self.check_truediv(a, -b)
                self.check_truediv(-a, -b)
    
        def entry_ok(self):
        'Return apparently valid (name, path) or None'
        self.entry_error['text'] = ''
        self.path_error['text'] = ''
        name = self.item_ok()
        path = self.path_ok()
        return None if name is None or path is None else (name, path)
    
        See ``pvariance`` for arguments and other details.
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    
_CONSTANTS = {
    '-Infinity': NegInf,
    'Infinity': PosInf,
    'NaN': NaN,
}
    
    import re
    
                    # kwnames=()
                result = _testcapi.pyobject_fastcallkeywords(func, args, ())
                self.check_result(result, expected)
    
            If the registered instance has a _dispatch method then that
        method will be called with the name of the XML-RPC method and
        its parameters as a tuple
        e.g. instance._dispatch('add',(2,3))