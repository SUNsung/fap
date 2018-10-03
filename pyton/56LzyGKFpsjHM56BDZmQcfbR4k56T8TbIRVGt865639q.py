
        
        versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    from youtube_dl.compat import (
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import format_bytes
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        def test_decrypt_text(self):
        password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x17\x15\x93\xab\x8d\x80V\xcdV\xe0\t\xcdo\xc2\xa5\xd8ksM\r\xe27N\xae'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 16))
        self.assertEqual(decrypted, self.secret_msg)
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def put(self, enabled=True):
        '''Creates or updates the rule in AWS'''
        request = {
            'Name': self.name,
            'State': 'ENABLED' if enabled else 'DISABLED',
        }
        if self.schedule_expression:
            request['ScheduleExpression'] = self.schedule_expression
        if self.event_pattern:
            request['EventPattern'] = self.event_pattern
        if self.description:
            request['Description'] = self.description
        if self.role_arn:
            request['RoleArn'] = self.role_arn
        try:
            response = self.client.put_rule(**request)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not create/update rule %s' % self.name)
        self.changed = True
        return response
    
        module = AnsibleAWSModule(
        argument_spec=argument_spec,
        required_if=[
            ['state', 'absent', ['image_id']],
        ]
    )
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True,
                           required_if=[
                               ('routing', 'dynamic', ['bgp_asn'])
                           ]
                           )
    
    '''
    
    