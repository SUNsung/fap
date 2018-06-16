
        
        cc_library(
    name = 'syntaxnet_link_feature_extractor',
    srcs = ['syntaxnet_link_feature_extractor.cc'],
    hdrs = ['syntaxnet_link_feature_extractor.h'],
    deps = [
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:embedding_feature_extractor',
        '//syntaxnet:parser_transitions',
        '//syntaxnet:task_context',
    ],
)
    
      with gfile.FastGFile(FLAGS.spec_file, 'w') as f:
    f.write(str(master_spec).encode('utf-8'))
    
    cc_library(
    name = 'compute_session_pool',
    srcs = ['compute_session_pool.cc'],
    hdrs = ['compute_session_pool.h'],
    deps = [
        ':component_registry',
        ':compute_session',
        ':compute_session_impl',
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
    ],
)
    
        corpus = _create_fake_corpus()
    corpus = tf.constant(corpus, shape=[len(corpus)])
    handle = dragnn_ops.get_session(
        container='test',
        master_spec=master_spec.SerializeToString(),
        grid_point='')
    handle = dragnn_ops.attach_data_reader(handle, corpus)
    handle = dragnn_ops.init_component_data(
        handle, beam_size=1, component='test')
    batch_size = dragnn_ops.batch_size(handle, component='test')
    master_state = component.MasterState(handle, batch_size)
    
      def __init__(self):
    self.spec = spec_pb2.MasterSpec()
    self.hyperparams = spec_pb2.GridPoint()
    self.lookup_component = {'mock': MockComponent()}
    self.build_runtime_graph = False
    
    flags.DEFINE_string('master_spec', None, 'Path to task context with '
                    'inputs and parameters for feature extractors.')
flags.DEFINE_string('params_path', None, 'Path to trained model parameters.')
flags.DEFINE_string('export_path', '', 'Output path for exported servo model.')
flags.DEFINE_bool('export_moving_averages', False,
                  'Whether to export the moving average parameters.')
flags.DEFINE_bool('build_runtime_graph', False,
                  'Whether to build a graph for use by the runtime.')
    
        # The directory may already exist when running locally multiple times.
    if not os.path.exists(lexicon_output_path):
      os.mkdir(lexicon_output_path)
    
    
def test_unicode_form_item(httpbin):
    r = http('--form', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['form'] == {'test': UNICODE}
    
    
class ConverterPlugin(object):
    
        '''
    .format(OUT_RESP_BODY)
)
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_bad_max_age(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': 'max-age=not-an-int'})
        self.assertFalse(self.validator.hsts('test.com'))
    
    
class RedirectTest(unittest.TestCase):
    '''Test the redirect_by_default method.'''
    @classmethod
    def _call(cls):
        from certbot.display.enhancements import redirect_by_default
        return redirect_by_default()
    
    import mock
    
    
@zope.interface.implementer(interfaces.IInstaller)
@zope.interface.provider(interfaces.IPluginFactory)
class Installer(common.Plugin):
    '''Example Installer.'''
    
        def seek(self, pos, whence=0):
        '''Seek to specified position into the chunk.
        Default position is 0 (start of chunk).
        If the file is not seekable, this will result in an error.
        '''
    
        def seek(self, offset, whence=0):
        '''Change position.'''
        if whence == 1:
            self._file.seek(self._pos)
        self._file.seek(offset, whence)
        self._pos = self._file.tell()
    
    4. Subclass SimpleXMLRPCServer:
    
        def lno_rel2abs(self, fname, lineno):
        return (self.frame.f_code.co_firstlineno + lineno - 1
            if (lineno and self.canonic(fname) == self.canonic(__file__))
            else lineno)
    
        with open(fn, 'rb') as f:
        pl = plistlib.load(f)
    release = pl['ProductVersion']
    versioninfo = ('', '', '')
    machine = os.uname().machine
    if machine in ('ppc', 'Power Macintosh'):
        # Canonical name
        machine = 'PowerPC'