
        
                d = deque(s)
        e = deque(s)
        e.rotate(BIG+17)        # verify on long series of rotates
        dr = d.rotate
        for i in range(BIG+17):
            dr()
        self.assertEqual(tuple(d), tuple(e))
    
    def pi_decimal():
    '''decimal'''
    D = P.Decimal
    lasts, t, s, n, na, d, da = D(0), D(3), D(3), D(1), D(0), D(0), D(24)
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
                #'Plural-Forms' is optional
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.size_read >= self.chunksize:
            return b''
        if size < 0:
            size = self.chunksize - self.size_read
        if size > self.chunksize - self.size_read:
            size = self.chunksize - self.size_read
        data = self.file.read(size)
        self.size_read = self.size_read + len(data)
        if self.size_read == self.chunksize and \
           self.align and \
           (self.chunksize & 1):
            dummy = self.file.read(1)
            self.size_read = self.size_read + len(dummy)
        return data
    
    # With respect to junk, an earlier version of ndiff simply refused to
# *start* a match with a junk element.  The result was cases like this:
#     before: private Thread currentThread;
#     after:  private volatile Thread currentThread;
# If you consider whitespace to be junk, the longest contiguous match
# not starting with junk is 'e Thread currentThread'.  So ndiff reported
# that 'e volatil' was inserted between the 't' and the 'e' in 'private'.
# While an accurate view, to people that's absurd.  The current version
# looks for matching blocks that are entirely junk-free, then extends the
# longest one of those as far as possible but only with matching junk.
# So now 'currentThread' is matched, then extended to suck up the
# preceding blank; then 'private' is matched, and extended to suck up the
# following blank; then 'Thread' is matched; and finally ndiff reports
# that 'volatile ' was inserted before 'Thread'.  The only quibble
# remaining is that perhaps it was really the case that ' volatile'
# was inserted after 'private'.  I can live with that <wink>.
    
        def _getresp(self):
        '''Internal: get a response from the server.
        Raise various errors if the response indicates an error.
        Returns a unicode string.'''
        resp = self._getline()
        if self.debugging: print('*resp*', repr(resp))
        resp = resp.decode(self.encoding, self.errors)
        c = resp[:1]
        if c == '4':
            raise NNTPTemporaryError(resp)
        if c == '5':
            raise NNTPPermanentError(resp)
        if c not in '123':
            raise NNTPProtocolError(resp)
        return resp
    
        def saveXML(self, snode):
        if snode is None:
            snode = self
        elif snode.ownerDocument is not self:
            raise xml.dom.WrongDocumentErr()
        return snode.toxml()
    
    _threads_queues = weakref.WeakKeyDictionary()
_shutdown = False
    
    
  def Done( self ):
    return bool( self._response_future ) and self._response_future.done()
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    with HandleServerException():
      self._response = self.PostDataToHandler( request_data,
                                               'semantic_completion_available' )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def RegexFilter_test():
  opts = _JavaFilter( { 'regex' : 'taco' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
    
def is_translated(msg):
    if isinstance(msg.string, basestring):
        return bool(msg.string)
    for item in msg.string:
        if not item:
            return False
    return True
    
    '''
Port of the Java example of 'Constructor Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050)
    
    class ProductionCodeTimeProvider(object):
    '''
    Production code version of the time provider (just a wrapper for formatting
    datetime for this example).
    '''
    
    
class SuperUserSpecification(CompositeSpecification):
    
        if added:
        print >> options.out, 'added %d issues' % added
    if removed:
        print >> options.out, 'removed %d issues!' % removed
    
    
def register_api_templates(template_name, template_class):
    for style in ('api', 'api-html', 'api-compact'):
        tpm.add_handler(
            name=template_name,
            style=style,
            handler=template_class,
        )
    
            Responds with a 120x50 `image/png` which should be displayed
        to the user.