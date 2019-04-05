
        
        versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    print('WARNING: Lazy loading extractors is an experimental feature that may not always work', file=sys.stderr)
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
    
def test_init_db_command(runner, monkeypatch):
    class Recorder(object):
        called = False
    
        def check(self, value):
        return isinstance(value, datetime)
    
        return logger

    
        @property
    def endpoint(self):
        '''The endpoint that matched the request.  This in combination with
        :attr:`view_args` can be used to reconstruct the same or a
        modified URL.  If an exception happened when matching, this will
        be ``None``.
        '''
        if self.url_rule is not None:
            return self.url_rule.endpoint
    
        def inner(name, base=modules_tmpdir):
        if not isinstance(name, str):
            raise ValueError(name)
        base.join(name).ensure_dir()
        base.join(name).join('__init__.py').ensure()