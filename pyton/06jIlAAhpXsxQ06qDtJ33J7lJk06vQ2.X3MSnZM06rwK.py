
        
          def testClassifierGraph(self):
    FLAGS.rnn_num_layers = 2
    model = graphs.VatxtModel()
    train_op, _, _ = model.classifier_training()
    # Pretrained vars: embedding + LSTM layers
    self.assertEqual(
        len(model.pretrained_variables), 1 + 2 * FLAGS.rnn_num_layers)
    with self.test_session() as sess:
      sess.run(tf.global_variables_initializer())
      tf.train.start_queue_runners(sess)
      sess.run(train_op)
    
    flags = tf.app.flags
FLAGS = flags.FLAGS
    
    
def put(url, data=None, **kwargs):
    r'''Sends a PUT request.
    
    
def check_compatibility(urllib3_version, chardet_version):
    urllib3_version = urllib3_version.split('.')
    assert urllib3_version != ['dev']  # Verify urllib3 isn't installed from git.
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
            :param method: method for the new :class:`Request` object.
        :param url: URL for the new :class:`Request` object.
        :param params: (optional) Dictionary or bytes to be sent in the query
            string for the :class:`Request`.
        :param data: (optional) Dictionary, bytes, or file-like object to send
            in the body of the :class:`Request`.
        :param json: (optional) json to send in the body of the
            :class:`Request`.
        :param headers: (optional) Dictionary of HTTP Headers to send with the
            :class:`Request`.
        :param cookies: (optional) Dict or CookieJar object to send with the
            :class:`Request`.
        :param files: (optional) Dictionary of ``'filename': file-like-objects``
            for multipart encoding upload.
        :param auth: (optional) Auth tuple or callable to enable
            Basic/Digest/Custom HTTP Auth.
        :param timeout: (optional) How long to wait for the server to send
            data before giving up, as a float, or a :ref:`(connect timeout,
            read timeout) <timeouts>` tuple.
        :type timeout: float or tuple
        :param allow_redirects: (optional) Set to True by default.
        :type allow_redirects: bool
        :param proxies: (optional) Dictionary mapping protocol or protocol and
            hostname to the URL of the proxy.
        :param stream: (optional) whether to immediately download the response
            content. Defaults to ``False``.
        :param verify: (optional) Either a boolean, in which case it controls whether we verify
            the server's TLS certificate, or a string, in which case it must be a path
            to a CA bundle to use. Defaults to ``True``.
        :param cert: (optional) if String, path to ssl client cert file (.pem).
            If Tuple, ('cert', 'key') pair.
        :rtype: requests.Response
        '''
        # Create the Request.
        req = Request(
            method=method.upper(),
            url=url,
            headers=headers,
            files=files,
            data=data or {},
            json=json,
            params=params or {},
            auth=auth,
            cookies=cookies,
            hooks=hooks,
        )
        prep = self.prepare_request(req)
    
        with server as (host, port):
        url = 'http://{0}:{1}/'.format(host, port)
        r = requests.get(url, auth=auth)
        # Verify server didn't authenticate us.
        assert r.status_code == 401
        assert r.history[0].status_code == 401
        close_server.set()
    
        (x_train, y_train), _, (sample_weight, _, _) = _get_test_data()
    
            def __call__(self, hidden_dims):
            return build_fn_clf(hidden_dims)
    
            # Returns
            When steps is `None`, returns the number of samples to be
            processed based on the size of the first dimension of the
            first input numpy array. When steps is not `None` and
            `batch_size` is `None`, returns `None`.
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_he_normal(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(2. / fan_in)
    _runner(initializers.he_normal(), tensor_shape,
            target_mean=0., target_std=None, target_max=2 * scale)
    
    
@keras_test
def test_convert_weights():
    def get_model(shape, data_format):
        model = Sequential()
        model.add(Conv2D(filters=2,
                         kernel_size=(4, 3),
                         input_shape=shape,
                         data_format=data_format))
        model.add(Flatten())
        model.add(Dense(5))
        return model
    
    
def SetUpSystemPaths():
  sys.path.insert( 0, os.path.join( DIR_OF_YCMD ) )
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
    Executor.submit() called:
- creates a uniquely numbered _WorkItem and adds it to the 'Work Items' dict
- adds the id of the _WorkItem to the 'Work Ids' queue
    
    from concurrent.futures import _base
    
    def download_urls_sequential(urls, timeout=60):
    url_to_content = {}
    for url in urls:
        try:
            url_to_content[url] = load_url(url, timeout=timeout)
        except:
            pass
    return url_to_content
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      return [ config_entry ]
    
    # The default options which are only relevant to the client, not the server and
# thus are not part of default_options.json, but are required for a working
# YouCompleteMe object.
DEFAULT_CLIENT_OPTIONS = {
  'log_level': 'info',
  'keep_logfiles': 0,
  'extra_conf_vim_data': [],
  'show_diagnostics_ui': 1,
  'echo_current_diagnostic': 1,
  'enable_diagnostic_signs': 1,
  'enable_diagnostic_highlighting': 0,
  'always_populate_location_list': 0,
}
    
    import r2.lib.helpers
from r2.config.paths import (
    get_r2_path,
    get_built_statics_path,
    get_raw_statics_path,
)
from r2.config.routing import make_map
from r2.lib.app_globals import Globals
from r2.lib.configparse import ConfigValue
    
    
class APIv1LoginController(RedditController):
    
        @validate(VAdmin(),
              award = VAwardByCodename('awardcn'),
              recipient = nop('recipient'),
              desc = nop('desc'),
              url = nop('url'),
              hours = nop('hours'))
    def GET_give(self, award, recipient, desc, url, hours):
        if award is None:
            abort(404, 'page not found')
    
    from r2.controllers.api_docs import api_doc, api_section
from r2.controllers.oauth2 import allow_oauth2_access