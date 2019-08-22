
        
        in_decoder[:, 0, target_token_index['\t']] = 1
    
    for i, (input_text, target_text) in enumerate(zip(input_texts, target_texts)):
    for t, char in enumerate(input_text):
        encoder_input_data[i, t, input_token_index[char]] = 1.
    for t, char in enumerate(target_text):
        # decoder_target_data is ahead of decoder_input_data by one timestep
        decoder_input_data[i, t, target_token_index[char]] = 1.
        if t > 0:
            # decoder_target_data will be ahead by one timestep
            # and will not include the start character.
            decoder_target_data[i, t - 1, target_token_index[char]] = 1.
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense
from keras.layers import Embedding
from keras.layers import GlobalAveragePooling1D
from keras.datasets import imdb
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_lecun_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    std = np.sqrt(1. / fan_in)
    _runner(initializers.lecun_uniform(), tensor_shape,
            target_mean=0., target_std=std)
    
    
@skip_generators
def test_multiprocessing_fit_error():
    arr_data = np.random.randint(0, 256, (50, 2))
    arr_labels = np.random.randint(0, 2, 50)
    batch_size = 10
    n_samples = 50
    good_batches = 3
    
        @classmethod
    def from_config(cls, config, custom_objects=None):
        if 'name' in config:
            name = config['name']
            build_input_shape = config.get('build_input_shape')
            layer_configs = config['layers']
        else:  # legacy config file
            name = build_input_shape = None
            layer_configs = config
        model = cls(name=name)
        for conf in layer_configs:
            layer = layer_module.deserialize(conf,
                                             custom_objects=custom_objects)
            model.add(layer)
        if not model.inputs and build_input_shape:
            model.build(build_input_shape)
        return model

    
            if self.data_format == 'channels_first':
            return (input_shape[0], self.filters, rows, cols)
        elif self.data_format == 'channels_last':
            return (input_shape[0], rows, cols, self.filters)
    
        def test_inline_primary(self):
        person = Person.objects.create(firstname='Imelda')
        item = OutfitItem.objects.create(name='Shoes')
        # Imelda likes shoes, but can't carry her own bags.
        data = {
            'shoppingweakness_set-TOTAL_FORMS': 1,
            'shoppingweakness_set-INITIAL_FORMS': 0,
            'shoppingweakness_set-MAX_NUM_FORMS': 0,
            '_save': 'Save',
            'person': person.id,
            'max_weight': 0,
            'shoppingweakness_set-0-item': item.id,
        }
        response = self.client.post(reverse('admin:admin_inlines_fashionista_add'), data)
        self.assertEqual(response.status_code, 302)
        self.assertEqual(len(Fashionista.objects.filter(person__firstname='Imelda')), 1)
    
            class CheckSetupView(SetAttributeMixin, SimpleView):
            def dispatch(self, request, *args, **kwargs):
                assert hasattr(self, 'attr')
                return super().dispatch(request, *args, **kwargs)
    
        def test_related_aggregates_m2m_and_fk(self):
        q = Q(friends__book__publisher__name='Apress') & ~Q(friends__name='test3')
        agg = Sum('friends__book__pages', filter=q)
        self.assertEqual(Author.objects.filter(name='test').aggregate(pages=agg)['pages'], 528)
    
        def test_version_loose_tuple(self):
        expect = ('1.2.3b1.dev0', 1, 2, 3)
        ops = FakePostGISOperations(expect[0])
        actual = ops.postgis_version_tuple()
        self.assertEqual(expect, actual)
    
        def test_name_auto_generation(self):
        index = self.index_class(fields=['field'])
        index.set_name_with_model(CharFieldModel)
        self.assertRegex(index.name, r'postgres_te_field_[0-9a-f]{6}_%s' % self.index_class.suffix)
    
              # Getting the 'description' field for the feature.
          desc = feature['description']
    
        @property
    def field_types(self):
        '''
        Return a list of the types of fields in this Layer.  For example,
        return the list [OFTInteger, OFTReal, OFTString] for an OGR layer that
        has an integer, a floating-point, and string fields.
        '''
        return [OGRFieldTypes[capi.get_field_type(capi.get_field_defn(self._ldefn, i))]
                for i in range(self.num_fields)]
    
        def __getitem__(self, index):
        try:
            return GDALBand(self.source, index + 1)
        except GDALException:
            raise GDALException('Unable to get band index %d' % index)

    
                # For out of memory drivers, check filename argument
            if driver.name != 'MEM' and 'name' not in ds_input:
                raise GDALException('Specify name for creation of raster with driver '{}'.'.format(driver.name))
    
    # Warnings
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
    
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
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    import pytest
    
        See https://github.com/psf/requests/issues/3772.
    '''
    text_200_chal = (b'HTTP/1.1 200 OK\r\n'
                     b'Content-Length: 0\r\n'
                     b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                     b', opaque='372825293d1c26955496c80ed6426e9e', '
                     b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
        return request('put', url, data=data, **kwargs)
    
    ln = fp.readline()
while ln:
    l = ln.rstrip('\r\n')
    result = delim.join(cutfunc(ln.rstrip('\r\n'), cutall, hmm))
    if PY2:
        result = result.encode(default_encoding)
    print(result)
    ln = fp.readline()
    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
    
def add_force_split(word):
    global Force_Split_Words
    Force_Split_Words.add(word)
    
    
if sys.platform.startswith('java'):
    char_state_tab_P, start_P, trans_P, emit_P = load_model()
else:
    from .char_state_tab import P as char_state_tab_P
    from .prob_start import P as start_P
    from .prob_trans import P as trans_P
    from .prob_emit import P as emit_P
    
    
def viterbi(obs, states, start_p, trans_p, emit_p):
    V = [{}]  # tabular
    mem_path = [{}]
    all_states = trans_p.keys()
    for y in states.get(obs[0], all_states):  # init
        V[0][y] = start_p[y] + emit_p[y].get(obs[0], MIN_FLOAT)
        mem_path[0][y] = ''
    for t in xrange(1, len(obs)):
        V.append({})
        mem_path.append({})
        #prev_states = get_top_states(V[t-1])
        prev_states = [
            x for x in mem_path[t - 1].keys() if len(trans_p[x]) > 0]
    
    

    
    import jieba
jieba.enable_parallel(4)
import jieba.analyse
from optparse import OptionParser
    
    url = sys.argv[1]
content = open(url,'rb').read()
t1 = time.time()
words = '/ '.join(jieba.cut(content))
    
                    self._rewrite_error_path(child_error, offset + 1)
    
    
sample_schema = {
    'a_string': {'type': 'string', 'minlength': 2, 'maxlength': 10},
    'a_binary': {'type': 'binary', 'minlength': 2, 'maxlength': 10},
    'a_nullable_integer': {'type': 'integer', 'nullable': True},
    'an_integer': {'type': 'integer', 'min': 1, 'max': 100},
    'a_restricted_integer': {'type': 'integer', 'allowed': [-1, 0, 1]},
    'a_boolean': {'type': 'boolean', 'meta': 'can haz two distinct states'},
    'a_datetime': {'type': 'datetime', 'meta': {'format': '%a, %d. %b %Y'}},
    'a_float': {'type': 'float', 'min': 1, 'max': 100},
    'a_number': {'type': 'number', 'min': 1, 'max': 100},
    'a_set': {'type': 'set'},
    'one_or_more_strings': {'type': ['string', 'list'], 'schema': {'type': 'string'}},
    'a_regex_email': {
        'type': 'string',
        'regex': r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$',
    },
    'a_readonly_string': {'type': 'string', 'readonly': True},
    'a_restricted_string': {'type': 'string', 'allowed': ['agent', 'client', 'vendor']},
    'an_array': {'type': 'list', 'allowed': ['agent', 'client', 'vendor']},
    'an_array_from_set': {
        'type': 'list',
        'allowed': set(['agent', 'client', 'vendor']),
    },
    'a_list_of_dicts': {
        'type': 'list',
        'schema': {
            'type': 'dict',
            'schema': {
                'sku': {'type': 'string'},
                'price': {'type': 'integer', 'required': True},
            },
        },
    },
    'a_list_of_values': {
        'type': 'list',
        'items': [{'type': 'string'}, {'type': 'integer'}],
    },
    'a_list_of_integers': {'type': 'list', 'schema': {'type': 'integer'}},
    'a_dict': {
        'type': 'dict',
        'schema': {
            'address': {'type': 'string'},
            'city': {'type': 'string', 'required': True},
        },
    },
    'a_dict_with_valuesrules': {'type': 'dict', 'valuesrules': {'type': 'integer'}},
    'a_list_length': {
        'type': 'list',
        'schema': {'type': 'integer'},
        'minlength': 2,
        'maxlength': 5,
    },
    'a_nullable_field_without_type': {'nullable': True},
    'a_not_nullable_field_without_type': {},
}
    
    
def test_docstring(validator):
    assert validator.__doc__
    
    
def test_normalization_with_rules_set():
    # https://github.com/pyeve/cerberus/issues/283
    rules_set_registry.add('foo', {'default': 42})
    assert_normalized({}, {'bar': 42}, {'bar': 'foo'})
    rules_set_registry.add('foo', {'default_setter': lambda _: 42})
    assert_normalized({}, {'bar': 42}, {'bar': 'foo'})
    rules_set_registry.add('foo', {'type': 'integer', 'nullable': True})
    assert_success({'bar': None}, {'bar': 'foo'})
    
        @property
    def root_document(self):
        ''' The :attr:`~cerberus.Validator.document` attribute of the
            first level ancestor of a child validator. '''
        return self._config.get('root_document', self.document)
    
    def _colorize(text):
    return \
        re.sub(
            r'`(.*?)`',
            colored.bg('dark_gray') \
                + colored.fg('white') \
                + ' ' + r'\1' + ' ' \
                + colored.attr('reset'),
            re.sub(
                r'\*\*(.*?)\*\*',
                colored.attr('bold') \
                    + colored.fg('white') \
                    + r'\1' \
                    + colored.attr('reset'),
                text))
    
        def _get_page(self, topic, request_options=None):
        '''
        Content of the `topic` dir is the list of the pages in the dir
        '''
    
        button = (
        '<!-- Place this tag where you want the button to render. -->'
        '<a aria-label='Star %(full_name)s on GitHub''
        ' data-count-aria-label='# stargazers on GitHub''
        ' data-count-api='/repos/%(full_name)s#stargazers_count''
        ' data-count-href='/%(full_name)s/stargazers''
        ' data-icon='octicon-star''
        ' href='https://github.com/%(full_name)s''
        '  class='github-button'>%(short_name)s</a>'
    ) % locals()
    return button