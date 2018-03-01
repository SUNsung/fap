
        
            cmd = cmd.split()
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    
@keras_test
def test_atrousconv1d_legacy_interface():
    old_layer = keras.layers.AtrousConvolution1D(5, 3,
                                                 init='normal',
                                                 subsample_length=2,
                                                 border_mode='valid',
                                                 W_regularizer='l1',
                                                 b_regularizer='l2',
                                                 W_constraint='maxnorm',
                                                 b_constraint='unitnorm',
                                                 atrous_rate=2,
                                                 name='conv')
    new_layer = keras.layers.Conv1D(5, 3,
                                    kernel_initializer='normal',
                                    strides=2,
                                    padding='valid',
                                    kernel_regularizer='l1',
                                    bias_regularizer='l2',
                                    kernel_constraint='max_norm',
                                    bias_constraint='unit_norm',
                                    dilation_rate=2,
                                    name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    
def add_ngram(sequences, token_indice, ngram_range=2):
    '''
    Augment the input list of list (sequences) by appending n-grams values.
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    
def assert_args_presence(args, doc, member, name):
    args_not_in_doc = [arg not in doc for arg in args]
    if any(args_not_in_doc):
        raise ValueError(
            '{} {} arguments are not present in documentation '.format(name, list(
                compress(args, args_not_in_doc))), member.__module__)
    words = doc.replace('*', '').split()
    # Check arguments styling
    styles = [arg + ':' not in words for arg in args]
    if any(styles):
        raise ValueError(
            '{} {} are not style properly 'argument': documentation'.format(name, list(
                compress(args, styles))), member.__module__)
    
    This is achieved through the optimization of a loss function
that has 3 components: 'style loss', 'content loss',
and 'total variation loss':
    
        # a more explicit example
    norm_instance = constraints.max_norm(2.0)
    x = np.array([[0, 0, 0], [1.0, 0, 0], [3, 0, 0], [3, 3, 3]]).T
    x_normed_target = np.array([[0, 0, 0], [1.0, 0, 0],
                                [2.0, 0, 0],
                                [2. / np.sqrt(3),
                                 2. / np.sqrt(3),
                                 2. / np.sqrt(3)]]).T
    x_normed_actual = K.eval(norm_instance(K.variable(x)))
    assert_allclose(x_normed_actual, x_normed_target, rtol=1e-05)
    
        # 50% of the time the correct output is the input.
    # The other 50% of the time it's 2 * input % 10
    y = (x * np.random.random_integers(1, 2, x.shape)) % 10
    ys = np.zeros((y.size, 10), dtype='int32')
    for i, target in enumerate(y.flat):
        ys[i, target] = 1
    ys = ys.reshape(y.shape + (10,))
    
        result = f([negative_values])[0]
    true_result = (np.exp(negative_values) - 1) * scale * alpha
    
                # test for output shape:
            output = layer_test(convolutional_recurrent.ConvLSTM2D,
                                kwargs={'data_format': data_format,
                                        'return_sequences': return_sequences,
                                        'filters': filters,
                                        'kernel_size': (num_row, num_col),
                                        'padding': 'valid'},
                                input_shape=inputs.shape)
    
    ] + _py_files('scrapy/contrib') + _py_files('scrapy/contrib_exp')
    
    
class Root(Resource):
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
        # Parse and validate the field names.  Validation serves two purposes,
    # generating informative error messages and preventing template injection attacks.
    if isinstance(field_names, basestring):
        field_names = field_names.replace(',', ' ').split() # names separated by whitespace and/or commas
    field_names = tuple(map(str, field_names))
    for name in (typename,) + field_names:
        if not all(c.isalnum() or c=='_' for c in name):
            raise ValueError('Type names and field names can only contain alphanumeric characters and underscores: %r' % name)
        if _iskeyword(name):
            raise ValueError('Type names and field names cannot be a keyword: %r' % name)
        if name[0].isdigit():
            raise ValueError('Type names and field names cannot start with a number: %r' % name)
    seen_names = set()
    for name in field_names:
        if name.startswith('_'):
            raise ValueError('Field names cannot start with an underscore: %r' % name)
        if name in seen_names:
            raise ValueError('Encountered duplicate field name: %r' % name)
        seen_names.add(name)
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    with HandleServerException():
      self._response = self.PostDataToHandler( request_data,
                                               'semantic_completion_available' )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
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
    
    
def _assert_accept_equals( filter, text_or_obj, expected ):
  if not isinstance( text_or_obj, dict ):
    text_or_obj = { 'text': text_or_obj }
    
    
def ExtractKeywordsFromGroup_KeywordWithoutNextgroup_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'skipempty foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'skipempty', 'foo', 'bar', 'zoo', 'goo' ) )