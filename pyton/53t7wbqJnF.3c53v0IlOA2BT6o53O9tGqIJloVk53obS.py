
        
        
class Server(threading.Thread):
    '''Dummy server using for unit testing'''
    WAIT_EVENT_TIMEOUT = 5
    
    
    {        Generic:                   '#000000',        # class: 'g'
        Generic.Deleted:           '#a40000',        # class: 'gd'
        Generic.Emph:              'italic #000000', # class: 'ge'
        Generic.Error:             '#ef2929',        # class: 'gr'
        Generic.Heading:           'bold #000080',   # class: 'gh'
        Generic.Inserted:          '#00A000',        # class: 'gi'
        Generic.Output:            '#888',           # class: 'go'
        Generic.Prompt:            '#745334',        # class: 'gp'
        Generic.Strong:            'bold #000000',   # class: 'gs'
        Generic.Subheading:        'bold #800080',   # class: 'gu'
        Generic.Traceback:         'bold #a40000',   # class: 'gt'
    }

    
            :param request: The :class:`PreparedRequest <PreparedRequest>` being sent.
        :param stream: (optional) Whether to stream the request content.
        :param timeout: (optional) How long to wait for the server to send
            data before giving up, as a float, or a :ref:`(connect timeout,
            read timeout) <timeouts>` tuple.
        :type timeout: float or tuple
        :param verify: (optional) Either a boolean, in which case it controls whether we verify
            the server's TLS certificate, or a string, in which case it must be a path
            to a CA bundle to use
        :param cert: (optional) Any user-provided SSL certificate to be trusted.
        :param proxies: (optional) The proxies dictionary to apply to the request.
        '''
        raise NotImplementedError
    
        def digest_response_handler(sock):
        # Respond to initial GET with a challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content.startswith(b'GET / HTTP/1.1')
        sock.send(text_401)
    
            assert server.handler_results[0] == b''
    
        assert 'Expected exception' in str(exception.value)

    
            # Resolve redirects if allowed.
        history = [resp for resp in gen] if allow_redirects else []
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
# html_use_opensearch = ''
    
                appid = random.choice(self.working_appid_list)
            return str(appid)
        else:
            for _ in xrange(0, 10):
                appid = self.public_appid.get()
                if appid in self.out_of_quota_appids or appid in self.not_exist_appids:
                    continue
                else:
                    return appid
            return None
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform == 'linux' or sys.platform == 'linux2':
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
    
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
    
            if self._state.backtracking > 0:
            sys.stdout.write(' backtracking=%s' % self._state.backtracking)
    
                # is there a channel override for token type?
            try:
                overrideChannel = self.channelOverrideMap[t.type]
                
            except KeyError:
                # no override for this type
                pass
            
            else:
                if overrideChannel == self.channel:
                    t.channel = overrideChannel
                else:
                    discard = True
            
            if not discard:
                t.index = index
                self.tokens.append(t)
                index += 1
    
        def set_new_path(self, new_idf_path):
        if self.path != new_idf_path:
            self.path = new_idf_path
            content = open(new_idf_path, 'rb').read().decode('utf-8')
            self.idf_freq = {}
            for line in content.splitlines():
                word, freq = line.strip().split(' ')
                self.idf_freq[word] = float(freq)
            self.median_idf = sorted(
                self.idf_freq.values())[len(self.idf_freq) // 2]
    
            if not obs_states:
            obs_states = prev_states_expect_next if prev_states_expect_next else all_states
    
    file_name = args[0]
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
        def testSetDictionary(self):
        jieba.set_dictionary('foobar.txt')
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test SetDictionary Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test SetDictionary error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testSetDictionary', file=sys.stderr)
    
    file_name = args[0]
    
    
    
    jieba.enable_parallel(4)
    
    tf.flags.DEFINE_string(
    'gcp_project', None,
    '[Optional] Project name for the Cloud TPU-enabled project. If not '
    'specified, we will attempt to automatically detect the GCE project from '
    'metadata.')
    
      layer_indexes = [int(x) for x in FLAGS.layers.split(',')]
    
    
def convert_to_unicode(text):
  '''Converts `text` to Unicode (if it's not already), assuming utf-8 input.'''
  if six.PY3:
    if isinstance(text, str):
      return text
    elif isinstance(text, bytes):
      return text.decode('utf-8', 'ignore')
    else:
      raise ValueError('Unsupported string type: %s' % (type(text)))
  elif six.PY2:
    if isinstance(text, str):
      return text.decode('utf-8', 'ignore')
    elif isinstance(text, unicode):
      return text
    else:
      raise ValueError('Unsupported string type: %s' % (type(text)))
  else:
    raise ValueError('Not running on Python2 or Python 3?')