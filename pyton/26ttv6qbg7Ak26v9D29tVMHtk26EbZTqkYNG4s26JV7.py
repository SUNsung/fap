
        
            def message_user(self, friend_id, message):
        pass
    
    
class RemoveDuplicateUrls(MRJob):
    
        def append_to_front(self, node):
        ...
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
))
def test_create_update_validate(client, auth, path):
    auth.login()
    response = client.post(path, data={'title': '', 'body': ''})
    assert b'Title is required.' in response.data
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
            .. versionadded:: 0.10
    
    
def attach_enctype_error_multidict(request):
    '''Since Flask 0.8 we're monkeypatching the files object in case a
    request is detected that does not use multipart form data but the files
    object is accessed.
    '''
    oldcls = request.files.__class__
    class newcls(oldcls):
        def __getitem__(self, key):
            try:
                return oldcls.__getitem__(self, key)
            except KeyError:
                if key not in request.form:
                    raise
                raise DebugFilesKeyError(request, key)
    newcls.__name__ = oldcls.__name__
    newcls.__module__ = oldcls.__module__
    request.files.__class__ = newcls
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
        # If request specific information is available we have some extra
    # features that support 'relative' URLs.
    if reqctx is not None:
        url_adapter = reqctx.url_adapter
        blueprint_name = request.blueprint
    
            # chop off the port which is usually not supported by browsers
        # remove any leading '.' since we'll add that later
        rv = rv.rsplit(':', 1)[0].lstrip('.')
    
    
class RetryError(RequestException):
    '''Custom retries logic failed'''
    
        def test_list(self):
        assert list(self.case_insensitive_dict) == ['Accept']
    
        while True:
        more_to_read = select.select([sock], [], [], timeout)[0]
        if not more_to_read:
            break
    
    
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
            return response
    
    '''
requests.auth
~~~~~~~~~~~~~
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
            with server as (host, port):
            server_url = 'http://{}:{}'.format(host, port)
            for _ in range(requests_to_handle):
                r = requests.get(server_url)
                assert r.status_code == 200
    
    
# -- Options for HTML output ----------------------------------------------