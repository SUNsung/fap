
        
        import re
import sys
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
        def test_basic_response(self):
        '''the basic response server returns an empty http response'''
        with Server.basic_response_server() as (host, port):
            r = requests.get('http://{0}:{1}'.format(host, port))
            assert r.status_code == 200
            assert r.text == u''
            assert r.headers['Content-Length'] == '0'
    
            if isinstance(timeout, tuple):
            try:
                connect, read = timeout
                timeout = TimeoutSauce(connect=connect, read=read)
            except ValueError as e:
                # this may raise a string formatting error.
                err = ('Invalid timeout {0}. Pass a (connect, read) '
                       'timeout tuple, or a single float to set '
                       'both timeouts to the same value'.format(timeout))
                raise ValueError(err)
        elif isinstance(timeout, TimeoutSauce):
            pass
        else:
            timeout = TimeoutSauce(connect=timeout, read=timeout)
    
        @pytest.mark.parametrize(
        'timeout', (
            (0.1, None),
            Urllib3Timeout(connect=0.1, read=None)
        ))
    def test_connect_timeout(self, timeout):
        try:
            requests.get(TARPIT, timeout=timeout)
            pytest.fail('The connect() request should time out.')
        except ConnectTimeout as e:
            assert isinstance(e, ConnectionError)
            assert isinstance(e, Timeout)
    
        def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
            assert status_line == b'GET /path/to/thing/ HTTP/1.1'
        for frag in (b'view', b'edit', b'token', b'hunter2'):
            assert frag not in headers
            assert frag not in body
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
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
    
        def setTokenSource(self, tokenSource):
        '''Reset this token stream by setting its token source.'''
        
        self.tokenSource = tokenSource
        self.tokens = []
        self.p = -1
        self.channel = DEFAULT_CHANNEL
    
    
from constants import *
from dfa import *
from exceptions import *
from recognizers import *
from streams import *
from tokens import *

    
    EOF = -1
    
        To avoid English-only error messages and to generally make things
    as flexible as possible, these exceptions are not created with strings,
    but rather the information necessary to generate an error.  Then
    the various reporting methods in Parser and Lexer can be overridden
    to generate a localized error message.  For example, MismatchedToken
    exceptions are built with the expected token type.
    So, don't expect getMessage() to return anything.
    
    # Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
#html_theme_options = {}
    
    
def EndsWithPython_Good( path ):
  ok_( _EndsWithPython( path ),
       'Path {0} does not end with a Python name.'.format( path ) )
    
        exception = RuntimeError( 'Check client handles exception' )
    with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseException( exception ) ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, None, exception ) )
    
    
def SendCommandRequest( arguments, completer, extra_data = None ):
  request = CommandRequest( arguments, completer, extra_data )
  # This is a blocking call.
  request.Start()
  request.RunPostCommandActionsIfNeeded()
  return request.Response()
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
        c = Controller(blackboard)
    contributions = c.run_loop()
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
    from __future__ import print_function
    
    
### OUTPUT ###
# <NumObj: -1>
# <NumObj: 0>
# <NumObj: 1>
# <NumObj: 2>
# -- committed
# <NumObj: 3>
# <NumObj: 4>
# <NumObj: 5>
# -- rolled back
# <NumObj: 2>
# -- now doing stuff ...
# -> doing stuff failed!
# Traceback (most recent call last):
# File 'memento.py', line 97, in <module>
#     num_obj.do_stuff()
#   File 'memento.py', line 52, in transaction
#     raise e
#   File 'memento.py', line 49, in transaction
#     return self.method(obj, *args, **kwargs)
#   File 'memento.py', line 70, in do_stuff
#     self.increment()     # <- will fail and rollback
#   File 'memento.py', line 65, in increment
#     self.value += 1
# TypeError: Can't convert 'int' object to str implicitly
# <NumObj: 2>

    
        def __init__(self, radio):
        self.radio = radio
        self.stations = ['1250', '1380', '1510']
        self.pos = 0
        self.name = 'AM'