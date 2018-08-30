
        
        
class Person(object):
    
        else:
        sys.stdout.write('.')
    sys.stdout.flush()
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    import sys
import os
import textwrap
    
        out = bug_text + dev_text
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(readme)
    
        def test_parse_xspf(self):
        _TEST_CASES = [
            (
                'foo_xspf',
                'https://example.org/src/foo_xspf.xspf',
                [{
                    'id': 'foo_xspf',
                    'title': 'Pandemonium',
                    'description': 'Visit http://bigbrother404.bandcamp.com',
                    'duration': 202.416,
                    'formats': [{
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.org/src/cd1/track%201.mp3',
                    }],
                }, {
                    'id': 'foo_xspf',
                    'title': 'Final Cartridge (Nichico Twelve Remix)',
                    'description': 'Visit http://bigbrother404.bandcamp.com',
                    'duration': 255.857,
                    'formats': [{
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.org/%E3%83%88%E3%83%A9%E3%83%83%E3%82%AF%E3%80%80%EF%BC%92.mp3',
                    }],
                }, {
                    'id': 'foo_xspf',
                    'title': 'Rebuilding Nightingale',
                    'description': 'Visit http://bigbrother404.bandcamp.com',
                    'duration': 287.915,
                    'formats': [{
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.org/src/track3.mp3',
                    }, {
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.com/track3.mp3',
                    }]
                }]
            ),
        ]
    
        proc.sendline(u'ehco test')
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'git help')
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
        assert match(command)
    
    
output = '''sshfs: OsxfuseRequirement unsatisfied!
    
    
class ReadTimeout(Timeout):
    '''The server did not send any data in the allotted amount of time.'''
    
    
@pytest.mark.parametrize('var,scheme', _proxy_combos)
def test_use_proxy_from_environment(httpbin, var, scheme):
    url = '{0}://httpbin.org'.format(scheme)
    fake_proxy = Server()  # do nothing with the requests; just close the socket
    with fake_proxy as (host, port):
        proxy_url = 'socks5://{0}:{1}'.format(host, port)
        kwargs = {var: proxy_url}
        with override_environ(**kwargs):
            # fake proxy's lack of response will cause a ConnectionError
            with pytest.raises(requests.exceptions.ConnectionError):
                requests.get(url)
    
    
class TestLookupDict:
    
    import threading
import socket
import time
    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
            This should not be called from user code, and is only exposed for use
        when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary, list of tuples, bytes, or file-like
        object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
            def generate():
            # Special case for urllib3.
            if hasattr(self.raw, 'stream'):
                try:
                    for chunk in self.raw.stream(chunk_size, decode_content=True):
                        yield chunk
                except ProtocolError as e:
                    raise ChunkedEncodingError(e)
                except DecodeError as e:
                    raise ContentDecodingError(e)
                except ReadTimeoutError as e:
                    raise ConnectionError(e)
            else:
                # Standard file-like object.
                while True:
                    chunk = self.raw.read(chunk_size)
                    if not chunk:
                        break
                    yield chunk
    
            for authtype in self.digest_auth_algo:
            url = httpbin('digest-auth', 'auth', 'user', 'pass', authtype)
            auth = HTTPDigestAuth('user', 'pass')
            r = requests.get(url)
            assert r.cookies['fake'] == 'fake_value'
    
    # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
    
class QPSSpider(Spider):
    
    del sys

    
    
class Command(ScrapyCommand):
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
        # Load the records from the pickle data stream.
    file.seek(0)
    memos = DBUnpickler(file, conn).load()
    
    import os
import smtplib
# For guessing MIME type based on file name extension
import mimetypes
    
    # Now the header items can be accessed as a dictionary, and any non-ASCII will
# be converted to unicode:
print('To:', msg['to'])
print('From:', msg['from'])
print('Subject:', msg['subject'])
    
    # A simple generator function
def baz():
    for i in range(10):
        yield i*i