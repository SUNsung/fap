
        
        
def build_lazy_ie(ie, name):
    valid_url = getattr(ie, '_VALID_URL', None)
    s = ie_template.format(
        name=name,
        bases=', '.join(map(get_base_name, ie.__bases__)),
        valid_url=valid_url,
        module=ie.__module__)
    if ie.suitable.__func__ is not InfoExtractor.suitable.__func__:
        s += '\n' + getsource(ie.suitable)
    if hasattr(ie, '_make_valid_url'):
        # search extractors
        s += make_valid_template.format(valid_url=ie._make_valid_url())
    return s
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('a', 'test', b'Incorrect username.'),
    ('test', 'a', b'Incorrect password.'),
))
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
            current = current.parent
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
    
def test_app_context_provides_current_app(app):
    with app.app_context():
        assert flask.current_app._get_current_object() == app
    assert flask._app_ctx_stack.top is None
    
    
def setup(app):
    app.add_crossref_type(
        directivename = 'setting',
        rolename      = 'setting',
        indextemplate = 'pair: %s; setting',
    )
    app.add_crossref_type(
        directivename = 'signal',
        rolename      = 'signal',
        indextemplate = 'pair: %s; signal',
    )
    app.add_crossref_type(
        directivename = 'command',
        rolename      = 'command',
        indextemplate = 'pair: %s; command',
    )
    app.add_crossref_type(
        directivename = 'reqmeta',
        rolename      = 'reqmeta',
        indextemplate = 'pair: %s; reqmeta',
    )
    app.add_role('source', source_role)
    app.add_role('commit', commit_role)
    app.add_role('issue', issue_role)
    app.add_role('rev', rev_role)
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
        def syntax(self):
        return '[options] <spider_file>'
    
        def test_builtin__qualname__(self):
        import time
    
            self.nocgi_path = os.path.join(self.parent_dir, 'nocgi.py')
        with open(self.nocgi_path, 'w') as fp:
            fp.write(cgi_file1 % self.pythonexe)
        os.chmod(self.nocgi_path, 0o777)
    
        def _generate_symbols(self, grammar_file, target_symbol_py_file):
        proc = subprocess.Popen([sys.executable,
                                 GEN_SYMBOL_FILE,
                                 grammar_file,
                                 target_symbol_py_file], stderr=subprocess.PIPE)
        stderr = proc.communicate()[1]
        return proc.returncode, stderr
    
    
# Return the longest prefix of all list elements.
def commonprefix(m):
    'Given a list of pathnames, returns the longest common leading component'
    if not m: return ''
    # Some people pass in a list of pathname parts to operate in an OS-agnostic
    # fashion; don't try to translate in that case as that's an abuse of the
    # API and they are already doing what they need to be OS-agnostic and so
    # they most likely won't be using an os.PathLike object in the sublists.
    if not isinstance(m[0], (list, tuple)):
        m = tuple(map(os.fspath, m))
    s1 = min(m)
    s2 = max(m)
    for i, c in enumerate(s1):
        if c != s2[i]:
            return s1[:i]
    return s1
    
    
Package = Union[str, ModuleType]
Resource = Union[str, os.PathLike]
    
    from argparse import ArgumentParser
    
    # An imaginary module that would make this work and be safe.
from imaginary import magic_html_parser
    
    # register the generator function baz; use `GeneratorProxy` to make proxies
MyManager.register('baz', baz, proxytype=GeneratorProxy)
    
    #
#
#
    
    
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
    
        # << MANIPULATION >> #
    
            # creates a toplevel window
        self.topwidget = tk.Toplevel(widget)
        if platform.system() == 'Darwin':
            # For Mac OS
            self.topwidget.tk.call('::tk::unsupported::MacWindowStyle',
                                   'style', self.topwidget._w,
                                   'help', 'none')
    
            for side in ('a', 'b'):
            decoder = self.networks['decoder_{}'.format(side)].network
            output = decoder(self.networks['encoder'].network(inputs[0]))
            autoencoder = KerasModel(inputs, output)
            self.add_predictor(side, autoencoder)
        logger.debug('Initialized model')
    
            var_x = input_
        var_x = self.blocks.conv(var_x, encoder_complexity, use_instance_norm=True, **kwargs)
        var_x = self.blocks.conv(var_x, encoder_complexity * 2, use_instance_norm=True, **kwargs)
        var_x = self.blocks.conv(var_x, encoder_complexity * 4, **kwargs)
        var_x = self.blocks.conv(var_x, encoder_complexity * 6, **kwargs)
        var_x = self.blocks.conv(var_x, encoder_complexity * 8, **kwargs)
        var_x = Dense(self.encoder_dim,
                      kernel_initializer=self.kernel_initializer)(Flatten()(var_x))
        var_x = Dense(dense_shape * dense_shape * dense_dim,
                      kernel_initializer=self.kernel_initializer)(var_x)
        var_x = Reshape((dense_shape, dense_shape, dense_dim))(var_x)
        return KerasModel(input_, var_x)
    
            while True:
            if navigation['last_request'] == 0:
                break
            elif navigation['frame_idx'] in (0, navigation['max_frame']):
                break
            elif skip_mode == 'standard':
                break
            elif (skip_mode == 'no faces'
                  and not self.alignments.frame_has_faces(frame)):
                break
            elif (skip_mode == 'multi-faces'
                  and self.alignments.frame_has_multiple_faces(frame)):
                break
            elif (skip_mode == 'has faces'
                  and self.alignments.frame_has_faces(frame)):
                break
            else:
                self.interface.iterate_frame('navigation',
                                             navigation['last_request'])
                frame = frame_list[navigation['frame_idx']]['frame_fullname']
    
        @property
    def aligned_face(self):
        ''' Return aligned detected face '''
        return self.aligned['face']