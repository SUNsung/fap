
        
        
def check_alphabetical(lines):
    '''
    checks if all entries per section are in alphabetical order based in entry title
    '''
    sections = {}
    section_line_num = {}
    for line_num, line in enumerate(lines):
        if line.startswith(anchor):
            category = line.split(anchor)[1].strip()
            sections[category] = []
            section_line_num[category] = line_num
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        raw_title = [x.strip() for x in line.split('|')[1:-1]][0]
        title_re_match = link_re.match(raw_title)
        if title_re_match:
            sections[category].append(title_re_match.group(1).upper())
    
    names = []
for ie in ordered_cls:
    name = ie.__name__
    src = build_lazy_ie(ie, name)
    module_contents.append(src)
    if ie in _ALL_CLASSES:
        names.append(name)
    
        with io.open(README_FILE, encoding='utf-8') as f:
        readme = f.read()
    
        def test_ie_key(self):
        self.assertEqual(get_info_extractor(YoutubeIE.ie_key()), YoutubeIE)
    
            def fname(templ):
            ydl = YoutubeDL({'outtmpl': templ})
            return ydl.prepare_filename(info)
        self.assertEqual(fname('%(id)s.%(ext)s'), '1234.mp4')
        self.assertEqual(fname('%(id)s-%(width)s.%(ext)s'), '1234-NA.mp4')
        # Replace missing fields with 'NA'
        self.assertEqual(fname('%(uploader_date)s-%(id)s.%(ext)s'), 'NA-1234.mp4')
        self.assertEqual(fname('%(height)d.%(ext)s'), '1080.mp4')
        self.assertEqual(fname('%(height)6d.%(ext)s'), '  1080.mp4')
        self.assertEqual(fname('%(height)-6d.%(ext)s'), '1080  .mp4')
        self.assertEqual(fname('%(height)06d.%(ext)s'), '001080.mp4')
        self.assertEqual(fname('%(height) 06d.%(ext)s'), ' 01080.mp4')
        self.assertEqual(fname('%(height)   06d.%(ext)s'), ' 01080.mp4')
        self.assertEqual(fname('%(height)0 6d.%(ext)s'), ' 01080.mp4')
        self.assertEqual(fname('%(height)0   6d.%(ext)s'), ' 01080.mp4')
        self.assertEqual(fname('%(height)   0   6d.%(ext)s'), ' 01080.mp4')
        self.assertEqual(fname('%%'), '%')
        self.assertEqual(fname('%%%%'), '%%')
        self.assertEqual(fname('%%(height)06d.%(ext)s'), '%(height)06d.mp4')
        self.assertEqual(fname('%(width)06d.%(ext)s'), 'NA.mp4')
        self.assertEqual(fname('%(width)06d.%%(ext)s'), 'NA.%(ext)s')
        self.assertEqual(fname('%%(width)06d.%(ext)s'), '%(width)06d.mp4')
        self.assertEqual(fname('Hello %(title1)s'), 'Hello $PATH')
        self.assertEqual(fname('Hello %(title2)s'), 'Hello %PATH%')
    
        def test_encrypt(self):
        msg = b'message'
        key = list(range(16))
        encrypted = aes_encrypt(bytes_to_intlist(msg), key)
        decrypted = intlist_to_bytes(aes_decrypt(encrypted, key))
        self.assertEqual(decrypted, msg)
    
        def test_youtube_user_matching(self):
        self.assertMatch('http://www.youtube.com/NASAgovVideo/videos', ['youtube:user'])
    
    UNICODE = FILE_CONTENT

    
        def test_GET_explicit_JSON_explicit_headers(self, httpbin):
        r = http('--json', 'GET', httpbin.url + '/headers',
                 'Accept:application/xml',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Accept': 'application/xml'' in r
        assert ''Content-Type': 'application/xml'' in r
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        def __init__(self):
        self.name = 'hstore'
    
    
# -- Options for manual page output ---------------------------------------
    
    class PyTest(TestCommand):
    user_options = [('pytest-args=', 'a', 'Arguments to pass into py.test')]
    
    # urllib3's DependencyWarnings should be silenced.
from urllib3.exceptions import DependencyWarning
warnings.simplefilter('ignore', DependencyWarning)
    
        def prepare(self,
            method=None, url=None, headers=None, files=None, data=None,
            params=None, auth=None, cookies=None, hooks=None, json=None):
        '''Prepares the entire request with the given parameters.'''
    
    
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
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
    
      for match in regex.finditer( line ):
    if match.end() == previous_char_index:
      return True
  # If the whole line is whitespace, that means the user probably finished an
  # identifier on the previous line.
  return line[ : current_column ].isspace()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from ycm.client.completion_request import CompletionRequest
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        # build a new DiagnosticFilter merging all filters
    #  for the provided filetypes
    spec = []
    for filetype in filetypes:
      type_specific = self._all_filters.get( filetype, [] )
      spec.extend( type_specific )
    
        raise RuntimeError( 'Path in 'g:ycm_server_python_interpreter' option '
                        'does not point to a valid Python 2.7 or 3.4+.' )
    
    
def _ExtractKeywordsFromGroup( group ):
  keywords = []
  for line in group.lines:
    keywords.extend( _ExtractKeywordsFromLine( line ) )
  return keywords

    
    
  def All_Fields_test( self ):
    self._Check( 0, {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )