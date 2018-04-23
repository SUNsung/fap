
        
                if not qop:
            respdig = KD(HA1, '%s:%s' % (nonce, HA2))
        elif qop == 'auth' or 'auth' in qop.split(','):
            noncebit = '%s:%s:%s:%s:%s' % (
                nonce, ncvalue, cnonce, 'auth', HA2
            )
            respdig = KD(HA1, noncebit)
        else:
            # XXX handle auth-int.
            return None
    
    
class ConnectTimeout(ConnectionError, Timeout):
    '''The request timed out while trying to connect to the remote server.
    
    
class TestRequests:
    
            self = cls(transitions, type_indices, ttis, abbrs)
        self.tzh = tzh
    
    import re
    
    import unittest
import sys
import pickle
import itertools
    
        def test_types(self):
        # types are always true.
        for t in [bool, complex, dict, float, int, list, object,
                  set, str, tuple, type]:
            self.assertIs(bool(t), True)
    
        def find_handler(self, request, **kwargs):
        # type: (httputil.HTTPServerRequest, typing.Any)->httputil.HTTPMessageDelegate
        '''Must be implemented to return an appropriate instance of `~.httputil.HTTPMessageDelegate`
        that can serve the request.
        Routing implementations may pass additional kwargs to extend the routing logic.
    
    
def try_close(f):
    # Avoid issue #875 (race condition when using the file in another
    # thread).
    for i in range(10):
        try:
            f.close()
        except IOError:
            # Yield to another thread
            time.sleep(1e-3)
        else:
            break
    # Try a last time and let raise
    f.close()
    
    
def main():
    base_cmd = [
        sys.executable, '-m', 'timeit', '-s',
        'from stack_context_benchmark import StackBenchmark, ExceptionBenchmark']
    cmds = [
        'StackBenchmark().enter_exit(50)',
        'StackBenchmark().call_wrapped(50)',
        'StackBenchmark().enter_exit(500)',
        'StackBenchmark().call_wrapped(500)',
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new