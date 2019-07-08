
        
            # validate function_name if present
    function_name = module.params['function_name']
    if function_name:
        if not re.search(r'^[\w\-:]+$', function_name):
            module.fail_json(
                msg='Function name {0} is invalid. Names must contain only alphanumeric characters and hyphens.'.format(function_name)
            )
        if len(function_name) > 64:
            module.fail_json(msg='Function name '{0}' exceeds 64 character limit'.format(function_name))
    
        if not module.check_mode and (additions > 0 or deletions > 0):
        task = gateway.save_services_configuration()
        vca.block_until_completed(task)
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.airbrake.io/deploys.txt'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
    RETURN = '''# '''
    
    notes:
    - Requires the LogEntries agent which can be installed following the instructions at logentries.com
'''
EXAMPLES = '''
# Track nginx logs
- logentries:
    path: /var/log/nginx/access.log
    state: present
    name: nginx-access-log
    
        namespace = dict(ca='http://www.ca.com/spectrum/restful/schema/response')
    error = root.find('ca:error', namespace).text
    
        def __init__(self):
        ca_certs = os.path.join(current_path, 'cacert.pem')
        openssl_context = SSLContext(
            logger, ca_certs=ca_certs,
            cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                           '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
        )
        host_manager = HostManagerBase()
        connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                         debug=True)
        self.check_ip = CheckIp(logger, config, connect_creator)
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
    

    
        def test_default_decoder(self):
        from acme.fields import RFC3339Field
        self.assertEqual(
            self.decoded, RFC3339Field.default_decoder(self.encoded))
    
    .. code-block:: ini
   :name: credentials.ini
   :caption: Example credentials file:
    
        Test that invoked textview has text from source.
    '''
    @classmethod
    def setUpClass(cls):
        requires('gui')
        cls.root = Tk()
        cls.root.withdraw()
        cls.dialog = About(cls.root, 'About IDLE', _utest=True)
    
        def compare_files(self, file1, file2):
        with open(file1) as fp:
            lines1 = fp.readlines()
        with open(file2) as fp:
            lines2 = fp.readlines()
        self.assertEqual(lines1, lines2)
    
        def test_fileobj(self):
        with self.open(BytesIO(self.DATA), 'r') as f:
            self.assertEqual(f.read(), self.TEXT)
        with self.open(BytesIO(self.DATA), 'rb') as f:
            self.assertEqual(f.read(), self.TEXT)
        text = self.TEXT.decode('ascii')
        with self.open(BytesIO(self.DATA), 'rt') as f:
            self.assertEqual(f.read(), text)
    
    <slide><title>Another demo slide</title>
<point>It is important</point>
<point>To have more than</point>
<point>one slide</point>
</slide>
</slideshow>
'''
    
    con.commit()
    
    >>> import custom2
>>> c1 = custom2.Custom('jim', 'fulton', 42)
>>> c1.first
'jim'
>>> c1.last
'fulton'
>>> c1.number
42
>>> c1.name()
'jim fulton'
>>> c1.first = 'will'
>>> c1.name()
'will fulton'
>>> c1.last = 'tell'
>>> c1.name()
'will tell'
>>> del c1.first
>>> c1.name()
Traceback (most recent call last):
...
AttributeError: first
>>> c1.first
Traceback (most recent call last):
...
AttributeError: first
>>> c1.first = 'drew'
>>> c1.first
'drew'
>>> del c1.number
Traceback (most recent call last):
...
TypeError: can't delete numeric/char attribute
>>> c1.number=2
>>> c1.number
2
>>> c1.first = 42
>>> c1.name()
'42 tell'
>>> c2 = custom2.Custom()
>>> c2.name()
' '
>>> c2.first
''
>>> c2.last
''
>>> del c2.first
>>> c2.first
Traceback (most recent call last):
...
AttributeError: first
>>> c2.first
Traceback (most recent call last):
...
AttributeError: first
>>> c2.name()
Traceback (most recent call last):
  File '<stdin>', line 1, in ?
AttributeError: first
>>> c2.number
0
>>> n3 = custom2.Custom('jim', 'fulton', 'waaa')
Traceback (most recent call last):
  File '<stdin>', line 1, in ?
TypeError: an integer is required (got type str)
>>> del c1
>>> del c2
    
    import os
import sys
import codecs
import re