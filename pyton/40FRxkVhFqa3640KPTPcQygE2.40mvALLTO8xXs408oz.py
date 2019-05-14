
        
        
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
    
class TestCaseInsensitiveDict:
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
    # TODO: Documentation on valid state transitions is required to properly implement all valid cases
# TODO: To be coherent with CLI this module should also provide 'flush' functionality
    
        if module.params['environment']:
        params['deploy[rails_env]'] = module.params['environment']
    
        if module.params['environment']:
        params['deploy[environment]'] = module.params['environment']