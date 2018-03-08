
        
        
import argparse
import collections
import os
import sys
    
    
response = get_json_from_api(broker_url + '/domains', username, password)
    
    
def secure_hash(filename, hash_func=sha1):
    ''' Return a secure hash hex digest of local file, None if file is not present or a directory. '''
    
            if response.status_code != 200:
            raise Exception(response.content)
    
    # noinspection PyCompatibility
import argparse
import json
import os
import requests
    
    try:
    import json
except ImportError:
    import simplejson as json
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_expire(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': 'max-age=3600'})
        self.assertFalse(self.validator.hsts('test.com'))
    
    # Custom sidebar templates, maps document names to template names.
#html_sidebars = {}
    
    # The encoding of source files.
#source_encoding = 'utf-8-sig'
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
    EOF = -1