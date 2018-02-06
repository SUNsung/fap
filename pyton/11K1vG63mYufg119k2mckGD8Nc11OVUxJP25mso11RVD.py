
        
                headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
    
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
    import requests
from requests import __version__ as requests_version
from pygments import __version__ as pygments_version
    
            if ext:
            fn += ext