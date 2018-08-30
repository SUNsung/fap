
        
            z_mean, z_log_var = args
    batch = K.shape(z_mean)[0]
    dim = K.int_shape(z_mean)[1]
    # by default, random_normal has mean=0 and std=1.0
    epsilon = K.random_normal(shape=(batch, dim))
    return z_mean + K.exp(0.5 * z_log_var) * epsilon
    
        with gzip.open(paths[2], 'rb') as lbpath:
        y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
    legacy_deconv2d_support = generate_legacy_interface(
    allowed_positional_args=['filters', 'kernel_size'],
    conversions=[('nb_filter', 'filters'),
                 ('subsample', 'strides'),
                 ('border_mode', 'padding'),
                 ('dim_ordering', 'data_format'),
                 ('init', 'kernel_initializer'),
                 ('W_regularizer', 'kernel_regularizer'),
                 ('b_regularizer', 'bias_regularizer'),
                 ('W_constraint', 'kernel_constraint'),
                 ('b_constraint', 'bias_constraint'),
                 ('bias', 'use_bias')],
    value_conversions={'dim_ordering': {'tf': 'channels_last',
                                        'th': 'channels_first',
                                        'default': None}},
    preprocessor=deconv2d_args_preprocessor)
    
        model.compile(loss='hinge', optimizer='adagrad')
    history = model.fit(x_train, y_train, epochs=20, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert (history.history['val_loss'][-1] < 0.9)
    
        result = f([test_values])[0]
    expected = sigmoid(test_values)
    assert_allclose(result, expected, rtol=1e-05)
    
    
if len(sys.argv) == 2 and sys.argv[1] == '--list':
    inv_json = get_guests()
    print(json.dumps(inv_json, sort_keys=True))
elif len(sys.argv) == 3 and sys.argv[1] == '--host':
    print(json.dumps({}))
else:
    print('Need an argument, either --list or --host <host>')

    
    # (c) 2015, Dagobert Michelsen <dam@baltic-online.de>
#
# This file is part of Ansible,
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible.  If not, see <http://www.gnu.org/licenses/>.
    
    # To run this script, first make webdocs in the toplevel of the checkout.  This will generate all
# rst files from their sources.  Then run this script ./docs/bin/find-plugin-refs.py
#
# No output means that there are no longer any bare module and plugin names referenced via :ref:
#
# For my listing of what needs to be changed after running this script, see the comment at the end
# of the file
    
            action_info = {'option_names': [],
                       'options': []}
        # docs['actions'][action] = {}
        # docs['actions'][action]['name'] = action
        action_info['name'] = action
        action_info['desc'] = trim_docstring(getattr(cli, 'execute_%s' % action).__doc__)
    
    # parse args
cli.parse()
    
    
class InventoryCLI(CLI):
    ''' used to display or dump the configured inventory as Ansible sees it '''
    
        ca_vendor = 'GoAgent' #TODO: here should be XX-Net
    ca_certfile = os.path.join(data_path, 'CA.crt')
    ca_keyfile = os.path.join(data_path, 'CAkey.pem')
    ca_thumbprint = ''
    ca_privatekey = None
    ca_subject = None
    ca_certdir = os.path.join(data_path, 'certs')
    ca_digest = 'sha256'
    ca_lock = threading.Lock()
    ca_validity_years = 10
    ca_validity = 24 * 60 * 60 * 365 * ca_validity_years
    cert_validity_years = 2
    cert_validity = 24 * 60 * 60 * 365 * cert_validity_years
    cert_publickey = None
    cert_keyfile = os.path.join(data_path, 'Certkey.pem')
    serial_reduce =  3600 * 24 * 365 * 46
    
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
# end[licensc]
    
    
    def nextToken(self):
        '''
        Return a token from this source; i.e., match a token on the char
        stream.
        '''
        
        while 1:
            self._state.token = None
            self._state.channel = DEFAULT_CHANNEL
            self._state.tokenStartCharIndex = self.input.index()
            self._state.tokenStartCharPositionInLine = self.input.charPositionInLine
            self._state.tokenStartLine = self.input.line
            self._state.text = None
            if self.input.LA(1) == EOF:
                return EOF_TOKEN
    
    
    def release(self, marker=None):
        '''
        You may want to commit to a backtrack but don't want to force the
        stream to keep bookkeeping objects around for a marker that is
        no longer necessary.  This will have the same behavior as
        rewind() except it releases resources without the backward seek.
        This must throw away resources for all markers back to the marker
        argument.  So if you're nested 5 levels of mark(), and then release(2)
        you have to release resources for depths 2..5.
	'''
    
    PY_MAJOR, PY_MINOR, PY_PATCH = sys.version_info[ 0 : 3 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR == 7 and PY_PATCH >= 1 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 4 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.7.1 or >= 3.4; '
            'your version of Python is ' + sys.version )
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
    
  def _ThreadMain( self ):
    while True:
      time.sleep( self._ping_interval_seconds )
    
    
  def UpdateWithNewDiagnostics( self, diags ):
    self._diagnostics = [ _NormalizeDiagnostic( x ) for x in
                            self._ApplyDiagnosticFilter( diags ) ]
    self._ConvertDiagListToDict()
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def MergeMultipleFiletypes_test():
    
    
class FakeResponse( object ):
  '''A fake version of a requests response object, just about suitable for
  mocking a server response. Not usually used directly. See
  MockServerResponse* methods'''
  def __init__( self, response, exception ):
    self._json = response
    self._exception = exception
    self.status_code = requests.codes.ok
    self.text = not exception
    
    
@patch( 'ycm.vimsupport.CurrentFiletypes', return_value = [ 'ycmtest' ] )
def OnCompleteDone_WithActionCallsIt_test( *args ):
  request = CompletionRequest( None )
  request.Done = MagicMock( return_value = True )
  action = MagicMock()
  request._complete_done_hooks[ 'ycmtest' ] = action
  request.OnCompleteDone()
  ok_( action.called )
    
      current_buffer = VimBuffer( '/current',
                              filetype = 'ycmtest',
                              contents = [ 'current' ] * 10,
                              number = 1 )
  no_diags_buffer = VimBuffer( '/no_diags',
                               filetype = 'ycmtest',
                               contents = [ 'no_diags' ] * 10,
                               number = 2 )
  separate_window = VimBuffer( '/separate_window',
                               filetype = 'ycmtest',
                               contents = [ 'separate_window' ] * 10,
                               number = 3 )
  hidden_buffer = VimBuffer( '/hidden',
                             filetype = 'ycmtest',
                             contents = [ 'hidden' ] * 10,
                             number = 4 )
  buffers = [
    current_buffer,
    no_diags_buffer,
    separate_window,
    hidden_buffer
  ]
  windows = [
    current_buffer,
    no_diags_buffer,
    separate_window
  ]
    
        Args:
        max_workers: The maximum number of threads that can be used to
            execute the given calls.
    '''
    self._max_workers = max_workers
    self._work_queue = queue.Queue()
    self._threads = set()
    self._shutdown = False
    self._shutdown_lock = threading.Lock()