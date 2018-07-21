
        
        
def consume_socket_content(sock, timeout=0.5):
    chunks = 65536
    content = b''
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    try:
    from urllib3.contrib import pyopenssl
except ImportError:
    pyopenssl = None
    OpenSSL = None
    cryptography = None
else:
    import OpenSSL
    import cryptography
    
    import copy
import time
import calendar
    
        def get(self, key, default=None):
        return self.__dict__.get(key, default)

    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
                    # not in range and not EOF/EOT, must be invalid symbol
                self.noViableAlt(s, input)
                return 0
    
            else:
            return self.c
    
        # overridden by generated subclasses
    tokenNames = None
    
    INVALID_TOKEN_TYPE = 0
    
    for prec in [9, 19]:
    print('\nPrecision: %d decimal digits\n' % prec)
    for func in to_benchmark:
        start = time.time()
        if C is not None:
            C.getcontext().prec = prec
        P.getcontext().prec = prec
        for i in range(10000):
            x = func()
        print('%s:' % func.__name__.replace('pi_', ''))
        print('result: %s' % str(x))
        print('time: %fs\n' % (time.time()-start))
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
    
class DifferentAgentTest(CrawlDelayAndRequestRateTest):
    agent = 'FigTree Robot libwww-perl/5.04'
    # these are not actually tested, but we still need to parse it
    # in order to accommodate the input parameters
    request_rate = None
    crawl_delay = None
    
        The func will be passed to sys.setprofile() for each thread, before its
    run() method is called.
    
        '''
    def gen(a, b):
        try:
            while 1:
                x = next(a)
                y = next(b)
                yield x
                yield y
        except StopIteration:
            return
    
        def test_various___class___pathologies(self):
        # See issue #12370
        class X(A):
            def f(self):
                return super().f()
            __class__ = 413
        x = X()
        self.assertEqual(x.f(), 'A')
        self.assertEqual(x.__class__, 413)
        class X:
            x = __class__
            def f():
                __class__
        self.assertIs(X.x, type(self))
        with self.assertRaises(NameError) as e:
            exec('''class X:
                __class__
                def f():
                    __class__''', globals(), {})
        self.assertIs(type(e.exception), NameError) # Not UnboundLocalError
        class X:
            global __class__
            __class__ = 42
            def f():
                __class__
        self.assertEqual(globals()['__class__'], 42)
        del globals()['__class__']
        self.assertNotIn('__class__', X.__dict__)
        class X:
            nonlocal __class__
            __class__ = 42
            def f():
                __class__
        self.assertEqual(__class__, 42)