
        
            if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
        def before_request(self, f):
        '''Like :meth:`Flask.before_request` but for a blueprint.  This function
        is only executed before each request that is handled by a function of
        that blueprint.
        '''
        self.record_once(lambda s: s.app.before_request_funcs
            .setdefault(self.name, []).append(f))
        return f
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
    
class FlaskCliRunner(CliRunner):
    '''A :class:`~click.testing.CliRunner` for testing a Flask app's
    CLI commands. Typically created using
    :meth:`~flask.Flask.test_cli_runner`. See :ref:`testing-cli`.
    '''
    def __init__(self, app, **kwargs):
        self.app = app
        super(FlaskCliRunner, self).__init__(**kwargs)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        def __init__(self):
        self.tokenizer = self.postokenizer = jieba.posseg.dt
        self.stop_words = self.STOP_WORDS.copy()
        self.pos_filt = frozenset(('ns', 'n', 'vn', 'v'))
        self.span = 5
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    jieba.enable_parallel()
    
    
def get_serializer(serializer):
    ''' Return requested serializer '''
    if serializer == 'json':
        return JSONSerializer
    if serializer == 'pickle':
        return PickleSerializer
    if serializer == 'yaml' and yaml is not None:
        return YAMLSerializer
    if serializer == 'yaml' and yaml is None:
        logger.warning('You must have PyYAML installed to use YAML as the serializer.'
                       'Switching to JSON as the serializer.')
    return JSONSerializer
    
        @property
    def frames_count(self):
        ''' Return current frames count '''
        retval = len(self.data)
        logger.trace(retval)
        return retval
    
            self.add_frame_separator()
        self.set_mainframe_single_tab_style()
        parent.add(self, text=self.tabname.title())
        logger.debug('Initialized %s', self.__class__.__name__,)
    
            self.input_spec = InputSpec(ndim=ndim)
    
        def debug_monitor(self, update_secs=2):
        ''' Debug tool for monitoring queues '''
        thread = threading.Thread(target=self.debug_queue_sizes,
                                  args=(update_secs, ))
        thread.daemon = True
        thread.start()