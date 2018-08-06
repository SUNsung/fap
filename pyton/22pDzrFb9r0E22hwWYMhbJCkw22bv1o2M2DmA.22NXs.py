
        
            def to_json(self, value):
        # JSON objects may only have string keys, so don't bother tagging the
        # key here.
        return dict((k, self.serializer.tag(v)) for k, v in iteritems(value))
    
    
def explain_ignored_app_run():
    if os.environ.get('WERKZEUG_RUN_MAIN') != 'true':
        warn(Warning('Silently ignoring app.run() because the '
                     'application is run from the flask command line '
                     'executable.  Consider putting app.run() behind an '
                     'if __name__ == '__main__' guard to silence this '
                     'warning.'), stacklevel=3)

    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
        app.testing = False
    stream = StringIO()
    rv = client.get('/', errors_stream=stream)
    assert rv.status_code == 500
    assert rv.data
    err = stream.getvalue()
    assert 'Exception on / [GET]' in err
    assert 'Exception: test' in err

    
        def fire():
        with app.test_client() as c:
            rv = c.get('/')
            assert rv.status_code == 200
            assert rv.data == b'<h1>42</h1>'
    
        if address_family == socket.AF_INET:
        if len(packed_ip) != ctypes.sizeof(addr.ipv4_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv4_addr, packed_ip, 4)
    elif address_family == socket.AF_INET6:
        if len(packed_ip) != ctypes.sizeof(addr.ipv6_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv6_addr, packed_ip, 16)
    else:
        raise socket.error('unknown address family')
    
    def version_str_to_tuple(version_str):
    import re
    import sys
    
    EOF = -1
    
                else:
                raise RuntimeError('DFA bang!')
            
        finally:
            input.rewind(mark)
    
    MIN_TOKEN_TYPE = UP+1