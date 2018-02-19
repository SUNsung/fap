
        
        # (c) 2015, Marc Abramowitz <marca@surveymonkey.com>
#
# This file is part of Ansible.
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible. If not, see <http://www.gnu.org/licenses/>.
    
    
#
# Backwards compat functions.  Some modules include md5s in their return values
# Continue to support that for now.  As of ansible-1.8, all of those modules
# should also return 'checksum' (sha1 for now)
# Do not use md5 unless it is needed for:
# 1) Optional backwards compatibility
# 2) Compliance with a third party protocol
#
# MD5 will not work on systems which are FIPS-140-2 compliant.
#
    
            if search:
            search_url += '&autocomplete=' + urlquote(search)
    
            # global, resource, entity
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps/my-url-map'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('compute', actual['service'])
    
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
    
            namespace = {'huge': huge, 'mhuge': mhuge}
    
    
class Test_pygettext(unittest.TestCase):
    '''Tests for the pygettext.py tool'''
    
        def _get_whatToShow(self):
        return self.whatToShow
    
                # generate response
            if dispatch_method is not None:
                response = dispatch_method(method, params)
            else:
                response = self._dispatch(method, params)
            # wrap response in a singleton tuple
            response = (response,)
            response = dumps(response, methodresponse=1,
                             allow_none=self.allow_none, encoding=self.encoding)
        except Fault as fault:
            response = dumps(fault, allow_none=self.allow_none,
                             encoding=self.encoding)
        except:
            # report exception back to server
            exc_type, exc_value, exc_tb = sys.exc_info()
            try:
                response = dumps(
                    Fault(1, '%s:%s' % (exc_type, exc_value)),
                    encoding=self.encoding, allow_none=self.allow_none,
                    )
            finally:
                # Break reference cycle
                exc_type = exc_value = exc_tb = None
    
        def _format(self):
        result = 'maxsize=%r' % (self.maxsize, )
        if getattr(self, '_queue', None):
            result += ' queue=%r' % self._queue
        if self._getters:
            result += ' getters[%s]' % len(self._getters)
        if self._putters:
            result += ' putters[%s]' % len(self._putters)
        if self._unfinished_tasks:
            result += ' tasks=%s' % self._unfinished_tasks
        return result
    
            class TestServer(TCPServer):
            @gen.coroutine
            def handle_stream(self, stream, address):
                server.stop()
                yield stream.read_until_close()
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)