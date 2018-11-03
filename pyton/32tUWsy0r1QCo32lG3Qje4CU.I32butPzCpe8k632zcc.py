
        
        
class TestCaseInsensitiveDict:
    
    # -------
# Pythons
# -------
    
    import copy
import time
import calendar
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    
def test_digestauth_401_count_reset_on_redirect():
    '''Ensure we correctly reset num_401_calls after a successful digest auth,
    followed by a 302 redirect to another digest auth prompt.
    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
    # The master toctree document.
master_doc = 'index'