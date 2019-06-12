
        
                Emit key value pairs of the form:
    
        def __init__(self, url, contents, child_urls):
        self.url = url
        self.contents = contents
        self.child_urls = child_urls
        self.signature = self.create_signature()
    
            $ curl -XDELETE 'localhost:9200/example_index'
        $ curl -XDELETE 'localhost:9200/update_log/_query?q=target_index:example_index'
    
        .. code:: console
    
        Example luigi configuration::
    
        def requires(self):
        '''
        This task's dependencies:
    
    
def get_dataproc_client():
    return _dataproc_client
    
        def create_index(self):
        '''
        Override to provide code for creating the target index.
    
    
class PublisherACL(object):
    '''
    Represents the publisher ACL and provides methods
    to query the ACL for given operations
    '''
    def __init__(self, blacklist):
        self.blacklist = blacklist
    
        ^realm
        The realm required by htdigest authentication.
    
        try:
        conn_info['hostname'] = __opts__['mysql_auth']['hostname']
        conn_info['username'] = __opts__['mysql_auth']['username']
        conn_info['password'] = __opts__['mysql_auth']['password']
        conn_info['database'] = __opts__['mysql_auth']['database']
    
        for item in _config['txt']:
        changes_key = 'txt.' + salt.utils.stringutils.to_unicode(item)
        if _config['txt'][item].startswith('grains.'):
            grain = _config['txt'][item][7:]
            grain_index = None
            square_bracket = grain.find('[')
            if square_bracket != -1 and grain[-1] == ']':
                grain_index = int(grain[square_bracket+1:-1])
                grain = grain[:square_bracket]
    
        Specify thresholds for percent used and only emit a beacon
    if it is exceeded.
    
    log = logging.getLogger(__name__)
    
    log = logging.getLogger(__name__)
    
        .. code-block:: yaml
    
    
def list_(bank):
    '''
    Return an iterable object containing all entries stored in the specified bank.
    '''
    try:
        _, keys = api.kv.get(bank + '/', keys=True, separator='/')
    except Exception as exc:
        raise SaltCacheError(
            'There was an error getting the key '{0}': {1}'.format(
                bank, exc
            )
        )
    if keys is None:
        keys = []
    else:
        # Any key could be a branch and a leaf at the same time in Consul
        # so we have to return a list of unique names only.
        out = set()
        for key in keys:
            out.add(key[len(bank) + 1:].rstrip('/'))
        keys = list(out)
    return keys
    
                super(YourSubClass, self).start()