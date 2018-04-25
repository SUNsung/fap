
        
        
class TestCaseInsensitiveDict:
    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('http://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
    
class ProxyError(ConnectionError):
    '''A proxy error occurred.'''
    
        def request(self, method, url,
            params=None, data=None, headers=None, cookies=None, files=None,
            auth=None, timeout=None, allow_redirects=True, proxies=None,
            hooks=None, stream=None, verify=None, cert=None, json=None):
        '''Constructs a :class:`Request <Request>`, prepares it and sends it.
        Returns :class:`Response <Response>` object.
    
        with server as (host, port):
        url = 'http://{0}:{1}/path/to/thing/#view=edit&token=hunter2'.format(host, port)
        r = requests.get(url)
        raw_request = r.content
    
            # Send request and simulate redirect
        resp = s.send(prep_req)
        resp.status_code = 302
        resp.headers['location'] = httpbin('get')
        redirects = s.resolve_redirects(resp, prep_req)
        resp = next(redirects)
    
    from ansible.errors import AnsibleError
from ansible.module_utils._text import to_bytes
    
    ipv4_component = r'''
    (?:
        [01]?[0-9]{{1,2}}|              # 0..199
        2[0-4][0-9]|                    # 200..249
        25[0-5]|                        # 250..255
        {range}                         # or a numeric range
    )
'''.format(range=numeric_range)
    
        def on_open_shell(self):
        try:
            self._exec_cli_command('screen-length 0 temporary')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        def __init__(
        self, grammarDecisionDescription, decisionNumber, stateNumber, input
        ):
        RecognitionException.__init__(self, input)
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_error(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.side_effect = [acme_errors.Error]
        self.assertFalse(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
        def tearDown(self):
        logging.disable(logging.NOTSET)
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
        def test_car_shall_make_very_loud_noise(self):
        noise = self.car.make_noise(10)
        expected_noise = 'vroom!!!!!!!!!!'
        self.assertEqual(noise, expected_noise)
    
        def test_data_value_shall_be_changeable(cls):
        cls.sub.data = 20
        cls.assertEqual(cls.sub._data, 20)
    
        def test_sales_manager_shall_respond_through_proxy_with_delay(cls):
        cls.p.busy = 'Yes'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager is busy\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
    ### OUTPUT ###
# Jack move 5m then stop

    
        class ClassRegistree(BaseRegisteredClass):
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
        def _handle(self, request):
        if 0 < request <= 10:
            print('request {} handled in handler 1'.format(request))
            return True