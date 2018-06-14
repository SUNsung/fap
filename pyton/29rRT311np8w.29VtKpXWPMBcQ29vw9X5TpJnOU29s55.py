
class TerminalModule(TerminalBase):
    
        results = {}
    for group in sort_groups(groups):
        results = combine_vars(results, group.get_vars())
    
        if WSAStringToAddressA(
            ip_string,
            address_family,
            None,
            ctypes.byref(addr),
            ctypes.byref(addr_size)
    ) != 0:
        raise socket.error(ctypes.FormatError())
    
            self.grammarDecisionDescription = grammarDecisionDescription
        self.decisionNumber = decisionNumber
        self.stateNumber = stateNumber
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
    
    
    def __str__(self):
        if self.inserted is not None and self.token is not None:
            return 'MissingTokenException(inserted %r at %r)' % (
                self.inserted, self.token.text)
    
    
def variance(data, xbar=None):
    '''Return the sample variance of data.
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    Usually an IFF-type file consists of one or more chunks.  The proposed
usage of the Chunk class defined here is to instantiate an instance at
the start of each chunk and read from the instance until it reaches
the end, after which a new instance can be instantiated.  At the end
of the file, creating a new instance will fail with an EOFError
exception.
    
        # We only ever write one 'entry point' symbol - either
    # 'main' or 'WinMain'.  Therefore, there is no need to
    # pass a subsystem switch to the linker as it works it
    # out all by itself.  However, the subsystem _does_ determine
    # the file extension and additional linker flags.
    target_link_flags = ''
    target_ext = '.exe'
    if subsystem_details[vars['subsystem']][2]:
        target_link_flags = '-dll'
        target_ext = '.dll'
    
        def test_fastcall(self):
        # Test _PyObject_FastCall()
    
        # Fold '--'s and remove trailing '-'
    while 1:
        cleaned = platform.replace('--', '-')
        if cleaned == platform:
            break
        platform = cleaned
    while platform[-1] == '-':
        platform = platform[:-1]
    
        def test_java_ver(self):
        res = platform.java_ver()
        if sys.platform == 'java':
            self.assertTrue(all(res))