
        
            :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
    
def test_egg_installed_paths(install_egg, modules_tmpdir,
                             modules_tmpdir_prefix):
    modules_tmpdir.mkdir('site_egg').join('__init__.py').write(
        'import flask\n\napp = flask.Flask(__name__)'
    )
    install_egg('site_egg')
    try:
        import site_egg
        assert site_egg.app.instance_path == \
            str(modules_tmpdir.join('var/').join('site_egg-instance'))
    finally:
        if 'site_egg' in sys.modules:
            del sys.modules['site_egg']
    
        rv = app.test_client().get('/', errors_stream=out)
    assert rv.status_code == 500
    assert b'Internal Server Error' in rv.data
    assert not out.getvalue()

    
    
def test_standard_context(app, client):
    @app.route('/')
    def index():
        flask.g.foo = 23
        flask.session['test'] = 'aha'
        return flask.render_template_string('''
            {{ request.args.foo }}
            {{ g.foo }}
            {{ config.DEBUG }}
            {{ session.test }}
        ''')
    
        self._hidden_layer_sizes = self._attrs['hidden_layer_sizes']
    self._factored_hidden_dim = self._attrs['factored_hidden_dim']
    self._compute_logits = not self._attrs['omit_logits']
    self._dropout_per_sequence = self._attrs['dropout_per_sequence']
    
      def get_variable(self, name):
    return tf.get_variable(name)
    
        foo_component/bar_variable/baz_suffix
    foo_component/bar_variable/baz_suffix/ExponentialMovingAverage
    
      def testAddParamsHooks(self):
    component = MockComponent()
    rank2_name = 'rank2'
    rank3_name = 'rank3'
    
    
def main(unused_argv):
    
      # Once all sentences are segmented, the processed data can be used in the
  # parsers.
  return processed
    
    flags.DEFINE_string('tf_master', '',
                    'TensorFlow execution engine to connect to.')
flags.DEFINE_string('resource_path', '', 'Path to constructed resources.')
flags.DEFINE_string('tensorboard_dir', '',
                    'Directory for TensorBoard logs output.')
flags.DEFINE_string('checkpoint_filename', '',
                    'Filename to save the best checkpoint to.')
    
      # Construct the ComponentSpec for segmentation.
  segmenter = spec_builder.ComponentSpecBuilder('segmenter')
  segmenter.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork', hidden_layer_sizes='128')
  segmenter.set_transition_system(name='binary-segment-transitions')
  segmenter.add_token_link(
      source=lookahead, fml='input.focus stack.focus',
      embedding_dim=64)
  segmenter.fill_from_resources(FLAGS.resource_path, FLAGS.tf_master)
    
    
@keras_test
def test_layer_trainability_switch():
    # with constructor argument, in Sequential
    model = Sequential()
    model.add(Dense(2, trainable=False, input_dim=1))
    assert model.trainable_weights == []
    
        # To prevent a slowdown,
    # we find beforehand the arrays that need conversion.
    feed = (model._feed_inputs +
            model._feed_targets +
            model._feed_sample_weights)
    indices_for_conversion_to_dense = []
    for i in range(len(feed)):
        if issparse(ins[i]) and not K.is_sparse(feed[i]):
            indices_for_conversion_to_dense.append(i)
    
        # Arguments:
        models (tuple): encoder and decoder models
        data (tuple): test data and label
        batch_size (int): prediction batch size
        model_name (string): which model is using this function
    '''
    
    outputs = Conv2DTranspose(filters=1,
                          kernel_size=kernel_size,
                          activation='sigmoid',
                          padding='same',
                          name='decoder_output')(x)
    
    import numpy as np
import matplotlib.pyplot as plt
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Activation, Dropout
from keras.layers.noise import AlphaDropout
from keras.preprocessing.text import Tokenizer
    
            try:
            # use repr so that we can distinguish between -0.0 and 0.0
            expected = repr(truediv(a, b))
        except OverflowError:
            expected = 'overflow'
        except ZeroDivisionError:
            expected = 'zerodivision'
    
        def test_make_frame(self):
        self.dialog.row = 0
        self.dialog.top = self.root
        frame, label = self.dialog.make_frame()
        self.assertEqual(label, '')
        self.assertIsInstance(frame, Frame)
    
        >>> from decimal import Decimal as D
    >>> variance([D('27.5'), D('30.25'), D('30.25'), D('34.5'), D('41.75')])
    Decimal('31.01875')
    
            d = deque('abc', maxlen=5)
        self.assertEqual(d * -5, deque())
        self.assertEqual(d * 0, deque())
        self.assertEqual(d * 1, deque('abc'))
        self.assertEqual(d * 2, deque('bcabc'))
        self.assertEqual(d * 30, deque('bcabc'))
    
    int WINAPI WinMain(
    HINSTANCE hInstance,      // handle to current instance
    HINSTANCE hPrevInstance,  // handle to previous instance
    LPSTR lpCmdLine,          // pointer to command line
    int nCmdShow              // show state of window
    )
{
    extern int Py_FrozenMain(int, char **);
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return Py_FrozenMain(__argc, __argv);
}
'''
    
            This server does NOT support system.methodSignature.'''
    
        def recolorize(self):
        self.after_id = None
        if not self.delegate:
            if DEBUG: print('no delegate')
            return
        if not self.allow_colorizing:
            if DEBUG: print('auto colorizing is off')
            return
        if self.colorizing:
            if DEBUG: print('already colorizing')
            return
        try:
            self.stop_colorizing = False
            self.colorizing = True
            if DEBUG: print('colorizing...')
            t0 = time.perf_counter()
            self.recolorize_main()
            t1 = time.perf_counter()
            if DEBUG: print('%.3f seconds' % (t1-t0))
        finally:
            self.colorizing = False
        if self.allow_colorizing and self.tag_nextrange('TODO', '1.0'):
            if DEBUG: print('reschedule colorizing')
            self.after_id = self.after(1, self.recolorize)
        if self.close_when_done:
            top = self.close_when_done
            self.close_when_done = None
            top.destroy()
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        @gen_test
    def test_get_timeout_preempted(self):
        q = queues.Queue()
        get = q.get(timeout=timedelta(seconds=0.01))
        q.put(0)
        yield gen.sleep(0.02)
        self.assertEqual(0, (yield get))
    
        def test_repr(self):
        c = locks.Condition()
        self.assertIn('Condition', repr(c))
        self.assertNotIn('waiters', repr(c))
        c.wait()
        self.assertIn('waiters', repr(c))