
        
        import pytest
from requests.compat import urljoin
    
            # If response is not 4xx, do not auth
        # See https://github.com/requests/requests/issues/3772
        if not 400 <= r.status_code < 500:
            self._thread_local.num_401_calls = 1
            return r
    
    # Syntax sugar.
_ver = sys.version_info
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
            # Verify we haven't overwritten the location with our previous fragment.
        assert r.history[1].request.url == 'http://{}:{}/get#relevant-section'.format(host, port)
        # Verify previous fragment is used and not the original.
        assert r.url == 'http://{}:{}/final-url/#relevant-section'.format(host, port)
    
    codes = LookupDict(name='status_codes')
    
        cookie_dict = {}
    
    import datetime
import sys