
        
        '''
requests.api
~~~~~~~~~~~~
    
        def test_multiple_requests(self):
        '''multiple requests can be served'''
        requests_to_handle = 5
    
    try:
    import simplejson as json
except ImportError:
    import json
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    class PyTest(TestCommand):
    user_options = [('pytest-args=', 'a', 'Arguments to pass into py.test')]
    
        # If it isn't any of the above, we don't understand it.
    if not host:
        raise AnsibleError('Not a valid network hostname: %s' % address)
    
            expected = {
            'name': 'myhealthcheck',
            'checkIntervalSec': 5,
            'port': 443,
            'unhealthyThreshold': 2,
            'healthyThreshold': 2,
            'host': '',
            'timeoutSec': 5,
            'requestPath': '/'}
    
    #############################################
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
            elif isinstance(e, MismatchedTreeNodeException):
            tokenName = '<unknown>'
            if e.expecting == EOF:
                tokenName = 'EOF'
            else:
                tokenName = self.tokenNames[e.expecting]
    
            if len(args) == 2:
            programName = args[0]
            instructionIndex = args[1]
        elif len(args) == 1:
            programName = self.DEFAULT_PROGRAM_NAME
            instructionIndex = args[0]
        else:
            raise TypeError('Invalid arguments')
        
        p = self.programs.get(programName, None)
        if p is not None:
            self.programs[programName] = (
                p[self.MIN_TOKEN_INDEX:instructionIndex])
    
        def getTokenIndex(self):
        '''@brief Get the index in the input stream.
    
    - tree.CommonTree: A basic and most commonly used Tree implementation.
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    
##     def specialTransition(self, state, symbol):
##         return 0