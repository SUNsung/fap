
        
        
packages = {
    package_name: get_info(package_name) for package_name in PACKAGES
}
    
            headers = dict(self._orig.headers)
        if 'Host' not in self._orig.headers:
            headers['Host'] = url.netloc.split('@')[-1]
    
        CHUNK_SIZE = 1
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
    
def test_unicode_headers_verbose(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http('--verbose', httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        See <https://github.com/httpie/httpie-ntlm> for an example auth plugin.
    
        def __iter__(self):
        return iter(self._plugins)
    
            '''
        for name, value in request_headers.items():
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
            assert len(self.args) in [1, 2, 3]
        self.obj_name = self.args[0] or None
        self.obj_type = self.objects[self.obj_name]
    
    # -- General configuration ------------------------------------------------
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)
    
    
class Scientist(AbstractExpert):
    
        def __init__(self):
        self._active_state = Active(self)  # Unit.Inservice.Active()
        self._standby_state = Standby(self)  # Unit.Inservice.Standby()
        self._suspect_state = Suspect(self)  # Unit.OutOfService.Suspect()
        self._failed_state = Failed(self)  # Unit.OutOfService.Failed()
        self._current_state = self._standby_state
        self.states = {'active': self._active_state,
                       'standby': self._standby_state,
                       'suspect': self._suspect_state,
                       'failed': self._failed_state}
        self.message_types = {'fault trigger': self._current_state.on_fault_trigger,
                              'switchover': self._current_state.on_switchover,
                              'diagnostics passed': self._current_state.on_diagnostics_passed,
                              'diagnostics failed': self._current_state.on_diagnostics_failed,
                              'operator inservice': self._current_state.on_operator_inservice}
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        @staticmethod
    def _static_method_2():
        print('executed method 2!')
    
    *TL;DR80
Traverses a container and accesses the container's elements.
'''
    
    
class NotSpecification(CompositeSpecification):
    _wrapped = Specification()