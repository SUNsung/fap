
        
        
def get_json_from_api(url, username, password):
    headers = {'Accept': 'application/json; version=1.5'}
    response = open_url(url, headers=headers, url_username=username, url_password=password)
    return json.loads(response.read())['data']
    
        parent = os.path.join(path, os.path.pardir)
    parent = os.path.realpath(parent)
    
    from __future__ import print_function
    
            # load data path for resource usage
        this_dir, this_filename = os.path.split(__file__)
        type_path = 'container_enabled' if getattr(self.options, 'container_enabled', False) else 'default'
        self.DATA_PATH = os.path.join(this_dir, 'data', type_path)
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]
    
    import os
import re
    
            # simple test to validate param value
        if param in self._static_method_choices.keys():
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    
class TC: