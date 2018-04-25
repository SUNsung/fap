
        
                '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
            for response in responses:
    
    '''
__version__ = '1.0.0-dev'
__author__ = 'Jakub Roztocil'
__licence__ = 'BSD'
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
        def __init__(self, path, *args, **kwargs):
        super(Session, self).__init__(*args, **kwargs)
        self._path = path
        self['headers'] = {}
        self['cookies'] = {}
        self['auth'] = {
            'type': None,
            'username': None,
            'password': None
        }
    
    
def make_git_tag(tag):
    info('Tagging '%s'', tag)
    Popen(['git', 'tag', tag]).wait()
    
    
def best_server():
    # TODO: find and use the best server
    # teredo.remlab.net / teredo - debian.remlab.net(Germany)
    # teredo.ngix.ne.kr(South Korea)
    # teredo.managemydedi.com(USA, Chicago)
    # teredo.trex.fi(Finland)
    # win8.ipv6.microsoft.com(The Teredo server hidden in Windows RT 8.1) of which Windows 7 has no knowledge.
    # win10.ipv6.microsoft.com
    return 'teredo.remlab.net'
    
                else:
                raise RuntimeError('DFA bang!')
            
        finally:
            input.rewind(mark)
    
    
class BacktrackingFailed(Exception):
    '''@brief Raised to signal failed backtrack attempt'''
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.