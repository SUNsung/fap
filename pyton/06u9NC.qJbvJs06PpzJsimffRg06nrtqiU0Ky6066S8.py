
        
        index_title = 0
index_desc = 1
index_auth = 2
index_https = 3
index_cors = 4
index_link = 5
num_segments = 5
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
        def test_save_failure(self):
        self.client.installer = mock.MagicMock()
        self.client.installer.save.side_effect = errors.PluginError
        self._test_error()
        self.client.installer.recovery_routine.assert_called_once_with()
        self.client.installer.save.assert_called_once_with(mock.ANY)
    
       dnssec-keygen -a HMAC-SHA512 -b 512 -n HOST keyname.
    
        def _cleanup(self, _domain, validation_name, validation):
        self._get_rfc2136_client().del_txt_record(validation_name, validation)
    
            # Same story for the scores:
        #   - scores are (A, H, W) format from conv output
        #   - transpose to (H, W, A)
        #   - reshape to (H * W * A, 1) where rows are ordered by (H, W, A)
        #     to match the order of anchors and bbox_deltas
        scores = scores.transpose((1, 2, 0)).reshape((-1, 1))
    
        def test_gpu_handles_even_length_arrays(self):
        X = np.random.rand(64).astype(np.float32)
        Y_exp = np.copy(X)
        Y_exp[0::2] = 0.0
        Y_act = self._run_zero_even_op_gpu(X)
        np.testing.assert_allclose(Y_act, Y_exp)
    
    
def set_up_matplotlib():
    '''Set matplotlib up.'''
    import matplotlib
    # Use a non-interactive backend
    matplotlib.use('Agg')
    
    import cv2
import logging
import os
import uuid
    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
        def lcut(self, *args, **kwargs):
        return list(self.cut(*args, **kwargs))
    
    print('-'*40)
print(' 搜索模式')
print('-'*40)
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
    tags = jieba.analyse.extract_tags(content, topK=topK, withWeight=withWeight)
    
    
  def JustDocString_test( self ):
    self._Check( 'not_an_int', {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DOC STRING',
      'equal'    : 1,
      'dup'      : 1,
      'empty'    : 1,
      'user_data': 'not_an_int',
    } )
    
    
@YouCompleteMeInstance( { 'g:ycm_extra_conf_vim_data': [ 'undefined_value' ] } )
def SendCommandRequest_ExtraConfData_UndefinedValue_test( ycm ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'GoTo' ], 'belowright', False, 1, 1 )
      assert_that(
        # Positional arguments passed to SendCommandRequest.
        send_request.call_args[ 0 ],
        contains(
          contains( 'GoTo' ),
          'belowright',
          'same-buffer',
          has_entries( {
            'options': has_entries( {
              'tab_size': 2,
              'insert_spaces': True,
            } )
          } )
        )
      )
    
    from ycm.client.base_request import BaseRequest
    
            Returns:
            False if the Future was cancelled, True otherwise.
    
    
def test_references_remain_unresolved(validator):
    rules_set_registry.extend(
        (('boolean', {'type': 'boolean'}), ('booleans', {'valuesrules': 'boolean'}))
    )
    validator.schema = {'foo': 'booleans'}
    assert 'booleans' == validator.schema['foo']
    assert 'boolean' == rules_set_registry._storage['booleans']['valuesrules']
    
    
def test_empty_schema():
    validator = Validator()
    with pytest.raises(SchemaError, match=errors.SCHEMA_ERROR_MISSING):
        validator({}, schema=None)
    
        for i in range(min_length):
        a, b = x[i], y[i]
    
        Parameters
    ----------
    complete_options : bool
        always complete the options, even when the user hasn't typed a first dash (Default value = False)
    match_incomplete : func
        a function with two parameters choice and incomplete. Must return True
        if incomplete is a correct match for choice, False otherwise.
    '''
    global _initialized
    if not _initialized:
        _patch()
        completion_configuration.complete_options = complete_options
        if match_incomplete is not None:
            completion_configuration.match_incomplete = match_incomplete
        _initialized = True
    
        Parameters
    ----------
    shell : Shell
        The shell type targeted. It will be guessed with get_auto_shell() if the value is None (Default value = None)
    prog_name : str
        The program name on the command line. It will be automatically computed if the value is None
        (Default value = None)
    env_name : str
        The environment variable name used to control the completion. It will be automatically computed if the value is
        None (Default value = None)
    path : str
        The installation path of the code to be evaluated by the shell. The standard installation path is used if the
        value is None (Default value = None)
    append : bool
        Whether to append the content to the file or to override it. The default behavior depends on the shell type
        (Default value = None)
    extra_env : dict
        A set of environment variables and their values to be added to the generated code (Default value = None)
    '''
    prog_name = prog_name or click.get_current_context().find_root().info_name
    shell = shell or get_auto_shell()
    if append is None and path is not None:
        append = True
    if append is not None:
        mode = 'a' if append else 'w'
    else:
        mode = None
    
    from . import DistlibException
from .compat import (HTTPBasicAuthHandler, Request, HTTPPasswordMgr,
                     urlparse, build_opener, string_types)
from .util import cached_property, zip_dir, ServerProxy