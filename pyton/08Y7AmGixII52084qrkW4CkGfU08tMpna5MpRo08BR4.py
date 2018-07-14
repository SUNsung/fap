
        
        cc_test(
    name = 'syntaxnet_link_feature_extractor_test',
    srcs = ['syntaxnet_link_feature_extractor_test.cc'],
    deps = [
        ':syntaxnet_link_feature_extractor',
        '//dragnn/core/test:generic',
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:task_context',
        '//syntaxnet:test_main',
    ],
)
    
    flags.DEFINE_string('spec_file', 'parser_spec.textproto',
                    'Filename to save the spec to.')
    
    cc_test(
    name = 'resource_container_test',
    srcs = ['resource_container_test.cc'],
    deps = [
        ':resource_container',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
    ],
)
    
    # Don't use this library directly; instead use 'dragnn/python:mst_ops'.
tf_gen_op_wrapper_py(
    name = 'mst_ops',
    visibility = ['//dragnn/python:__pkg__'],
    deps = [':mst_ops_op_lib'],
)
    
    tf_proto_library_py(
    name = 'export_pb2',
    srcs = ['export.proto'],
)

    
      def testNormalFixedFeaturesAreDifferentiable(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'IdentityNetwork'
        }
        fixed_feature {
          name: 'fixed' embedding_dim: 32 size: 1
          pretrained_embedding_matrix { part {} }
          vocab { part {} }
        }
        component_builder {
          registered_name: 'bulk_component.BulkFeatureExtractorComponentBuilder'
        }
        ''', component_spec)
    comp = bulk_component.BulkFeatureExtractorComponentBuilder(
        self.master, component_spec)
    
        with tf.variable_scope(self.name):
      # Raises ValueError if not found.
      return network_units.NetworkUnitInterface.Create(network_type, self)
    
        with self.test_session() as sess:
      cost, correct, total, gold_labels = (
          sess.run([cost, correct, total, gold_labels]))
    
        dragnn_model_saver_lib.export_to_graph(
        master_spec,
        params_path,
        export_path,
        saver_graph,
        export_moving_averages=False,
        build_runtime_graph=False)
    
        Returns:
      handle: handle to a new ComputeSession returned by the AttachReader op.
      input_batch: InputBatch placeholder.
    '''
    with tf.name_scope('ComputeSession'):
      input_batch = tf.placeholder(
          dtype=tf.string, shape=[None], name='InputBatch')
    
    import tensorflow as tf
    
        By default this will get the strings from the blns.txt file
    
        quiet
      Supress output other than linting errors, such as information about
      which files have been processed and excluded.
    
    def is_prime(n):
    if n % 2 == 0:
        return False
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running at: http://127.0.0.1:1234\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data.update( {
      'completer_target': self._completer_target,
      'command_arguments': self._arguments
    } )
    self._response = self.PostDataToHandler( request_data,
                                             'run_completer_command' )
    
        @classmethod
    def _restore_configuration(cls, saved):
        # type: (Tuple[type, Dict[str, Any]]) -> None
        base = cls.configurable_base()
        base.__impl_class = saved[0]
        base.__impl_kwargs = saved[1]
    
        def test_plain_error(self):
        e = HTTPError(403)
        self.assertEqual(str(e), 'HTTP 403: Forbidden')
        self.assertEqual(repr(e), 'HTTP 403: Forbidden')
    
    
class HTTPMessageDelegate(object):
    '''Implement this interface to handle an HTTP request or response.
    
            .. versionchanged:: 5.1
           Added the ability to set options via strings in config files.
    
            class Delegate(HTTPMessageDelegate):
            def headers_received(self, start_line, headers):
                test.code = start_line.code
    
        This solves a nasty problem with Futures and Tasks that have an
    exception set: if nobody asks for the exception, the exception is
    never logged.  This violates the Zen of Python: 'Errors should
    never pass silently.  Unless explicitly silenced.'
    
    
# Convert Awaitables into Futures.
try:
    import asyncio
except ImportError:
    # Py2-compatible version for use with Cython.
    # Copied from PEP 380.
    @coroutine
    def _wrap_awaitable(x):
        if hasattr(x, '__await__'):
            _i = x.__await__()
        else:
            _i = iter(x)
        try:
            _y = next(_i)
        except StopIteration as _e:
            _r = _value_from_stopiteration(_e)
        else:
            while 1:
                try:
                    _s = yield _y
                except GeneratorExit as _e:
                    try:
                        _m = _i.close
                    except AttributeError:
                        pass
                    else:
                        _m()
                    raise _e
                except BaseException as _e:
                    _x = sys.exc_info()
                    try:
                        _m = _i.throw
                    except AttributeError:
                        raise _e
                    else:
                        try:
                            _y = _m(*_x)
                        except StopIteration as _e:
                            _r = _value_from_stopiteration(_e)
                            break
                else:
                    try:
                        if _s is None:
                            _y = next(_i)
                        else:
                            _y = _i.send(_s)
                    except StopIteration as _e:
                        _r = _value_from_stopiteration(_e)
                        break
        raise Return(_r)
else:
    try:
        _wrap_awaitable = asyncio.ensure_future
    except AttributeError:
        # asyncio.ensure_future was introduced in Python 3.4.4, but
        # Debian jessie still ships with 3.4.2 so try the old name.
        _wrap_awaitable = getattr(asyncio, 'async')
    
        def setUp(self):  # pylint: disable=invalid-name
        '''Setup things to be run when tests are started.'''
        self.hass = get_test_home_assistant()
    
        hass.services.register(DOMAIN, SERVICE_MEDIA_NEXT_TRACK,
                           lambda service:
                           keyboard.tap_key(keyboard.media_next_track_key),
                           schema=TAP_KEY_SCHEMA)
    
        pass
