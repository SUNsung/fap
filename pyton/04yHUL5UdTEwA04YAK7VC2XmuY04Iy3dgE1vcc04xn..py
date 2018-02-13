
def get_meta(data):
    meta = {'hostvars': {}}
    for node in data:
        meta['hostvars'][node['Name']] = node['Tags']
    return meta
    
    
def get_api_key():
    '''
    rtype: str
    '''
    key = os.environ.get('SHIPPABLE_KEY', None)
    
        'bracketed_hostport': re.compile(
        r'''^
            \[(.+)\]                    # [host identifier]
            :([0-9]+)                   # :port number
            $
        ''', re.X
    ),
    
    from ansible.compat.tests import mock, unittest
from ansible.module_utils.gcp import check_min_pkg_version, GCPUtils, GCPInvalidURLError