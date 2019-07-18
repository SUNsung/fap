
        
        
def _lookup_req_object(name):
    top = _request_ctx_stack.top
    if top is None:
        raise RuntimeError(_request_ctx_err_msg)
    return getattr(top, name)
    
            return session.modified or (
            session.permanent and app.config['SESSION_REFRESH_EACH_REQUEST']
        )
    
        :copyright: 2010 Pallets
    :license: BSD-3-Clause
'''
from werkzeug.exceptions import BadRequest
from werkzeug.wrappers import Request as RequestBase
from werkzeug.wrappers import Response as ResponseBase
from werkzeug.wrappers.json import JSONMixin as _JSONMixin
    
        # make sure we're not leaking a request context since we are
    # testing flask internally in debug mode in a few cases
    leaks = []
    while flask._request_ctx_stack.top is not None:
        leaks.append(flask._request_ctx_stack.pop())
    assert leaks == []
    
        app = flask.Flask(__name__, instance_path=str(modules_tmpdir))
    assert app.instance_path == str(modules_tmpdir)
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
    Typical output
--------------
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
        if 'Content-Encoding' in headers:
        if headers['Content-Encoding'] == 'deflate':
            payload = zlib.decompress(payload, -zlib.MAX_WBITS)
            headers['Content-Length'] = str(len(payload))
            del headers['Content-Encoding']
    
    
    def mark(self):
        state = (self.p, self.line, self.charPositionInLine)
        try:
            self._markers[self.markDepth] = state
        except IndexError:
            self._markers.append(state)
        self.markDepth += 1
        
        self.lastMarker = self.markDepth
        
        return self.lastMarker
    
            You don't have to implement but it's nice to know where a Token
        comes from if you have include files etc... on the input.'''