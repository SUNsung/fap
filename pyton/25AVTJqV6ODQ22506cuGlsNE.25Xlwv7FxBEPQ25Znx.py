
        
            styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
    # Syntax sugar.
_ver = sys.version_info
    
    
class MockResponse(object):
    '''Wraps a `httplib.HTTPMessage` to mimic a `urllib.addinfourl`.
    
            return request_content
    
        if state == 'present':
        if not all((replication_id, cluster_id)):
            module.fail_json(msg='The state 'present' requires options: 'replication_id' and 'cluster_id'')
        response, changed = create(module, connection, replication_id, cluster_id, name)
    elif state == 'absent':
        response, changed = delete(module, connection, name)
    elif state == 'copy':
        if not all((target, bucket)):
            module.fail_json(msg='The state 'copy' requires options: 'target' and 'bucket'.')
        response, changed = copy(module, connection, name, target, bucket)
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    state: absent
    name: ansible monitoring policy
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.six.moves.urllib.parse import urlencode
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
    
class QPSSpider(Spider):
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
    from w3lib.url import is_url
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
            Same as Twisted's private _sslverify.ClientTLSOptions,
        except that VerificationError, CertificateError and ValueError
        exceptions are caught, so that the connection is not closed, only
        logging warnings.
        '''
    
        def process_request(self, request, spider):
        if request.meta.get('dont_merge_cookies', False):
            return
    
    
def test_match():
    cases = [
        (None, b'\xc0'),
        (False, b'\xc2'),
        (True, b'\xc3'),
        (0, b'\x00'),
        (127, b'\x7f'),
        (128, b'\xcc\x80'),
        (256, b'\xcd\x01\x00'),
        (-1, b'\xff'),
        (-33, b'\xd0\xdf'),
        (-129, b'\xd1\xff\x7f'),
        ({1: 1}, b'\x81\x01\x01'),
        (1.0, b'\xcb\x3f\xf0\x00\x00\x00\x00\x00\x00'),
        ((), b'\x90'),
        (tuple(range(15)), (b'\x9f\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09'
                            b'\x0a\x0b\x0c\x0d\x0e')),
        (tuple(range(16)), (b'\xdc\x00\x10\x00\x01\x02\x03\x04\x05\x06\x07'
                            b'\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f')),
        ({}, b'\x80'),
        ({x: x for x in range(15)},
         (b'\x8f\x00\x00\x01\x01\x02\x02\x03\x03\x04\x04\x05\x05\x06\x06\x07'
          b'\x07\x08\x08\t\t\n\n\x0b\x0b\x0c\x0c\r\r\x0e\x0e')),
        ({x: x for x in range(16)},
         (b'\xde\x00\x10\x00\x00\x01\x01\x02\x02\x03\x03\x04\x04\x05\x05\x06'
          b'\x06\x07\x07\x08\x08\t\t\n\n\x0b\x0b\x0c\x0c\r\r\x0e\x0e'
          b'\x0f\x0f')),
    ]
    
    
def test_getitem_callable():
    # GH 12533
    s = pd.Series(4, index=list('ABCD'))
    result = s[lambda x: 'A']
    assert result == s.loc['A']
    
    
ABCGeneric = _ABCGeneric('ABCGeneric', tuple(), {})

    
    
Your class ``TestDtype`` will inherit all the tests defined on
``BaseDtypeTests``. pytest's fixture discover will supply your ``dtype``
wherever the test requires it. You're free to implement additional tests.
    
        @classmethod
    def construct_from_string(cls, string):
        if string == cls.name:
            return cls()
        else:
            raise TypeError('Cannot construct a '{}' from '
                            ''{}''.format(cls, string))