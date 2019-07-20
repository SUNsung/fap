
        
            This could be extended by having nested blocks, sorting them recursively
    and flattening the end structure into a list of lines. Revision 2 maybe ^.^.
'''
    
    
FILEPATH = os.path.join(
    os.path.abspath(os.path.dirname(os.path.dirname(__file__))), 'blns.txt')
'''Path to the file'''
    
            # install new cert
        xlog.info('Add cert to database $HOME/.pki/nssdb')
        cmd_line = 'certutil -d sql:$HOME/.pki/nssdb -A -t 'C,,' -n '%s' -i '%s'' % (common_name, ca_file)
        os.system(cmd_line)
        return True
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
            if isinstance(index, Token):
            # index is a Token, grap the stream index from it
            index = index.index
    
            raise NotImplementedError
    
    
    def getCharPositionInLine(self):
        '''@brief Get the column of the tokens first character,
        
        Columns are numbered 0..n-1
        
        Using setter/getter methods is deprecated. Use o.charPositionInLine instead.'''
    
        def test_decode_bad(self):
        self.assertRaises(jose.DeserializationError, self.field.decode, 'y')
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
        @certbot_util.patch_get_utility()
    def test_select_correct(self, mock_util):
        mock_util().checklist.return_value = (
            display_util.OK, [self.vhosts[3].display_repr(),
                              self.vhosts[2].display_repr()])
        vhs = select_vhost_multiple([self.vhosts[3],
                                     self.vhosts[2],
                                     self.vhosts[1]])
        self.assertTrue(self.vhosts[2] in vhs)
        self.assertTrue(self.vhosts[3] in vhs)
        self.assertFalse(self.vhosts[1] in vhs)
    
    Certbot will emit a warning if it detects that the credentials file can be
accessed by other users on your system. The warning reads 'Unsafe permissions
on credentials configuration file', followed by the path to the credentials
file. This warning will be emitted each time Certbot uses the credentials file,
including for renewal, and cannot be silenced except by addressing the issue
(e.g., by using a command like ``chmod 600`` to restrict access to the file).
    
            :param str record_name: The record name (typically beginning with '_acme-challenge.').
        :param str record_content: The record content (typically the challenge validation).
        :param int record_ttl: The record TTL (number of seconds that the record may be cached).
        :raises certbot.errors.PluginError: if an error occurs communicating with the DNS server
        '''
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 10)
        self.blackboard.common_state['suggestions'] += random.randint(1, 10)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(1, 2)
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
        @staticmethod
    def check_range(request):
        if 0 <= request < 10:
            print('request {} handled in handler 0'.format(request))
            return True
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
        @Transactional will rollback to entry-state upon exceptions.
    '''
    
        # Localize some text
    >>> for msg in 'dog parrot cat bear'.split():
    ...     print(e.localize(msg), g.localize(msg))
    dog σκύλος
    parrot parrot
    cat γάτα
    bear bear
    '''
    
        def __exit__(self, Type, value, traceback):
        if self.item is not None:
            self._queue.put(self.item)
            self.item = None
    
    
class Prototype(object):
    
        >>> print(objects[0].original_dict())
    {'name': 'Dog'}
    
    
# Refined Abstraction
class CircleShape(object):
    def __init__(self, x, y, radius, drawing_api):
        self._x = x
        self._y = y
        self._radius = radius
        self._drawing_api = drawing_api