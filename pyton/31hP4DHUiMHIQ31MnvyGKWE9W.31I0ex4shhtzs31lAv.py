
        
            def get_page(self, number):
        '''
        Return a valid page, even if the page argument isn't a number or isn't
        in range.
        '''
        try:
            number = self.validate_number(number)
        except PageNotAnInteger:
            number = 1
        except EmptyPage:
            number = self.num_pages
        return self.page(number)
    
        class Media:
        js = ('my_awesome_inline_scripts.js',)
    
        def get_group_permissions(self, obj=None):
        '''
        Return a list of permission strings that this user has through their
        groups. Query all available auth backends. If an object is passed in,
        return only permissions matching this object.
        '''
        return _user_get_permissions(self, obj, 'group')
    
    
class PermissionTests(TestCase):
    def test_str(self):
        p = Permission.objects.get(codename='view_customemailfield')
        self.assertEqual(str(p), 'auth_tests | custom email field | Can view custom email field')

    
        def test_plain_annotate(self):
        agg = Sum('book__pages', filter=Q(book__rating__gt=3))
        qs = Author.objects.annotate(pages=agg).order_by('pk')
        self.assertSequenceEqual([a.pages for a in qs], [447, None, 1047])
    
            This is the most complex implementation of the spatial backends due to
        what is supported on geodetic geometry columns vs. what's available on
        projected geometry columns.  In addition, it has to take into account
        the geography column type.
        '''
        # Getting the distance parameter
        value = dist_val[0]
    
    
def copytree(src, dst):
    shutil.copytree(src, dst, ignore=shutil.ignore_patterns('__pycache__'))
    
            if ds:
            self.ptr = ds
            self.driver = Driver(ds_driver)
        else:
            # Raise an exception if the returned pointer is NULL
            raise GDALException('Invalid data source file '%s'' % ds_input)
    
        def __init__(self, feat, layer):
        '''
        Initialize Feature from a pointer and its Layer object.
        '''
        if not feat:
            raise GDALException('Cannot create OGR Feature, invalid pointer given.')
        self.ptr = feat
        self._layer = layer
    
        @property
    def field_widths(self):
        'Return a list of the maximum field widths for the features.'
        return [capi.get_field_width(capi.get_field_defn(self._ldefn, i))
                for i in range(self.num_fields)]
    
    
def process_docstring(docstring):
    # First, extract code blocks and process them.
    code_blocks = []
    if '```' in docstring:
        tmp = docstring[:]
        while '```' in tmp:
            tmp = tmp[tmp.find('```'):]
            index = tmp[3:].find('```') + 6
            snippet = tmp[:index]
            # Place marker in docstring for later reinjection.
            docstring = docstring.replace(
                snippet, '$CODE_BLOCK_%d' % len(code_blocks))
            snippet_lines = snippet.split('\n')
            # Remove leading spaces.
            num_leading_spaces = snippet_lines[-1].find('`')
            snippet_lines = ([snippet_lines[0]] +
                             [line[num_leading_spaces:]
                             for line in snippet_lines[1:]])
            # Most code snippets have 3 or 4 more leading spaces
            # on inner lines, but not all. Remove them.
            inner_lines = snippet_lines[1:-1]
            leading_spaces = None
            for line in inner_lines:
                if not line or line[0] == '\n':
                    continue
                spaces = count_leading_spaces(line)
                if leading_spaces is None:
                    leading_spaces = spaces
                if spaces < leading_spaces:
                    leading_spaces = spaces
            if leading_spaces:
                snippet_lines = ([snippet_lines[0]] +
                                 [line[leading_spaces:]
                                  for line in snippet_lines[1:-1]] +
                                 [snippet_lines[-1]])
            snippet = '\n'.join(snippet_lines)
            code_blocks.append(snippet)
            tmp = tmp[index:]
    
        features = cnn(image)
    
        ```python
        # First, let's define a RNN Cell, as a layer subclass.
    
        with tempfile.NamedTemporaryFile('wb', delete=True) as f:
        np.savez(f, x_train=x_train, y_train=y_train, x_test=x_test, y_test=y_test)
        monkeypatch.setattr(imdb, 'get_file', lambda *args, **kwargs: f.name)
        yield f.name
    
            # Arguments
            batch: integer, index of batch within the current epoch.
            logs: dict, metric results for this batch.
        '''
        self._call_batch_hook(_TRAIN, 'end', batch, logs=logs)
    
            self.bias = self.add_weight(shape=(self.units * 6,),
                                    name='bias',
                                    initializer=self.bias_initializer,
                                    regularizer=self.bias_regularizer,
                                    constraint=self.bias_constraint)
    
    Input may optionally be reversed, shown to increase performance in many tasks in:
'Learning to Execute'
http://arxiv.org/abs/1410.4615
and
'Sequence to Sequence Learning with Neural Networks'
http://papers.nips.cc/paper/5346-sequence-to-sequence-learning-with-neural-networks.pdf
Theoretically it introduces shorter term dependencies between source and target.
    
    - With default word, sentence, and query vector sizes, the GRU model achieves:
  - 52.1% test accuracy on QA1 in 20 epochs (2 seconds per epoch on CPU)
  - 37.0% test accuracy on QA2 in 20 epochs (16 seconds per epoch on CPU)
In comparison, the Facebook paper achieves 50% and 20% for the LSTM baseline.
    
    ALL_SSL_OPTIONS_HASHES = [
    '2086bca02db48daf93468332543c60ac6acdb6f0b58c7bfdf578a5d47092f82a',
    '4844d36c9a0f587172d9fa10f4f1c9518e3bcfa1947379f155e16a70a728c21a',
    '5a922826719981c0a234b1fbcd495f3213e49d2519e845ea0748ba513044b65b',
    '4066b90268c03c9ba0201068eaa39abbc02acf9558bb45a788b630eb85dadf27',
    'f175e2e7c673bd88d0aff8220735f385f916142c44aa83b09f1df88dd4767a88',
    'cfdd7c18d2025836ea3307399f509cfb1ebf2612c87dd600a65da2a8e2f2797b',
    '80720bd171ccdc2e6b917ded340defae66919e4624962396b992b7218a561791',
    'c0c022ea6b8a51ecc8f1003d0a04af6c3f2bc1c3ce506b3c2dfc1f11ef931082',
]
'''SHA256 hashes of the contents of previous versions of all versions of MOD_SSL_CONF_SRC'''
    
    import certbot.tests.util as test_util
from certbot import account
from certbot import errors
from certbot.compat import os
from certbot.compat import filesystem
from certbot import util
    
    import httplib2
import zope.interface
from googleapiclient import discovery
from googleapiclient import errors as googleapiclient_errors
from oauth2client.service_account import ServiceAccountCredentials
    
    
Named Arguments
---------------
    
            self.mock_client = mock.MagicMock()
        # _get_rfc2136_client | pylint: disable=protected-access
        self.auth._get_rfc2136_client = mock.MagicMock(return_value=self.mock_client)
    
            linking_url = build_linking_url(
            self.integration,
            self.org,
            'slack-id2',
            'my-channel',
            'http://example.slack.com/response_url'
        )
        responses.add(
            method=responses.POST,
            url='http://example.slack.com/response_url',
            body='{'ok': true}',
            status=200,
            content_type='application/json',
        )
    
        @classmethod
    def threshold(cls, severity):
        threshold = cls.SEVERITY_LEVELS[severity]
    
    
class CeleryAliveCheck(StatusCheck):
    def check(self):
        # There is no queue, and celery is not running, so never show error
        if settings.CELERY_ALWAYS_EAGER:
            return []
        last_ping = options.get('sentry:last_worker_ping') or 0
        if last_ping >= time() - 300:
            return []
    
            # Adding index on 'EventTag', fields ['environment_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['environment_id', 'key', 'value'])
    
            # Adding unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', 'environment_id', '_key', '_value']
        db.create_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'environment_id', 'key_id', 'value_id'])
    
            # Adding unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', '_key', '_value']
        db.create_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'key_id', 'value_id'])
    
            # Changing field 'GroupTagKey.project_id'
        db.alter_column(u'tagstore_grouptagkey', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
        class Meta:
        app_label = 'tagstore'
        unique_together = (('project_id', 'event_id', 'key', 'value'), )
        index_together = (
            ('project_id', 'key', 'value'),
            ('group_id', 'key', 'value'),
        )
    
        def __init__(self, suffix='', prefix=None, dir=None):
        if 'RAM_DISK' in os.environ:
            import uuid
    
    Default is to not mirror PyPI, i.e. use the real one, pypi.org. The
``--pypi-mirror`` command line flag overwrites this.
'''
    
        Full documentation is available at http://python-cerberus.org/
    
    
def assert_has_error(_errors, d_path, s_path, error_def, constraint, info=()):
    if not isinstance(d_path, tuple):
        d_path = (d_path,)
    if not isinstance(info, tuple):
        info = (info,)
    
    
def test__error_1():
    v = Validator(schema={'foo': {'type': 'string'}})
    v.document = {'foo': 42}
    v._error('foo', errors.BAD_TYPE, 'string')
    error = v._errors[0]
    assert error.document_path == ('foo',)
    assert error.schema_path == ('foo', 'type')
    assert error.code == 0x24
    assert error.rule == 'type'
    assert error.constraint == 'string'
    assert error.value == 42
    assert error.info == ('string',)
    assert not error.is_group_error
    assert not error.is_logic_error
    
    
def test_271_normalising_tuples():
    # https://github.com/pyeve/cerberus/issues/271
    schema = {
        'my_field': {'type': 'list', 'schema': {'type': ('string', 'number', 'dict')}}
    }
    document = {'my_field': ('foo', 'bar', 42, 'albert', 'kandinsky', {'items': 23})}
    assert_success(document, schema)
    
    
def test_rules_set_with_dict_field():
    document = {'a_dict': {'foo': 1}}
    schema = {'a_dict': {'type': 'dict', 'schema': {'foo': 'rule'}}}
    
    
def test_anyof_allof_schema_validate():
    # make sure schema with 'anyof' and 'allof' constraints are checked
    # correctly
    schema = {
        'doc': {'type': 'dict', 'anyof': [{'schema': [{'param': {'type': 'number'}}]}]}
    }
    assert_schema_error({'doc': 'this is my document'}, schema)
    
        # tests errors.BasicErrorHandler's tree representation
    v_errors = validator.errors
    assert 'parts' in v_errors
    assert 3 in v_errors['parts'][-1]
    assert v_errors['parts'][-1][3][0] == 'no definitions validate'
    scope = v_errors['parts'][-1][3][-1]
    assert 'anyof definition 0' in scope
    assert 'anyof definition 1' in scope
    assert scope['anyof definition 0'] == [{'product name': ['unknown field']}]
    assert scope['anyof definition 1'] == [{'product name': ['unknown field']}]
    assert v_errors['parts'][-1][4] == ['must be of ['dict', 'string'] type']
    
      # Implements linear decay of the learning rate.
  learning_rate = tf.train.polynomial_decay(
      learning_rate,
      global_step,
      num_train_steps,
      end_learning_rate=0.0,
      power=1.0,
      cycle=False)
    
      # We DON'T just concatenate all of the tokens from a document into a long
  # sequence and choose an arbitrary split point because this would make the
  # next sentence prediction task too easy. Instead, we split the input into
  # segments 'A' and 'B' based on the actual 'sentences' provided by the user
  # input.
  instances = []
  current_chunk = []
  current_length = 0
  i = 0
  while i < len(document):
    segment = document[i]
    current_chunk.append(segment)
    current_length += len(segment)
    if i == len(document) - 1 or current_length >= target_seq_length:
      if current_chunk:
        # `a_end` is how many segments from `current_chunk` go into the `A`
        # (first) sentence.
        a_end = 1
        if len(current_chunk) >= 2:
          a_end = rng.randint(1, len(current_chunk) - 1)
    
        name_to_features = {
        'input_ids':
            tf.FixedLenFeature([max_seq_length], tf.int64),
        'input_mask':
            tf.FixedLenFeature([max_seq_length], tf.int64),
        'segment_ids':
            tf.FixedLenFeature([max_seq_length], tf.int64),
        'masked_lm_positions':
            tf.FixedLenFeature([max_predictions_per_seq], tf.int64),
        'masked_lm_ids':
            tf.FixedLenFeature([max_predictions_per_seq], tf.int64),
        'masked_lm_weights':
            tf.FixedLenFeature([max_predictions_per_seq], tf.float32),
        'next_sentence_labels':
            tf.FixedLenFeature([1], tf.int64),
    }
    
    def LoadPlist(filename):
  '''Plists can be read with plistlib.'''
  # creating our own data
  data = None
  
  try:
    p = subprocess.Popen(
        ['/usr/bin/plutil', '-convert', 'xml1', '-o', '-', filename],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out_data, err_data = p.communicate()
  except IOError as e:
    # file could not be found
    print(e)
      
  if(p.returncode == 0):
      data = plistlib.readPlistFromString(out_data)
  
  return data
    
            # Grab quicklook stats: CPU, MEM and SWAP
        if self.input_method == 'local':
            # Get the latest CPU percent value
            stats['cpu'] = cpu_percent.get()
            stats['percpu'] = cpu_percent.get(percpu=True)
            # Use the psutil lib for the memory (virtual and swap)
            stats['mem'] = psutil.virtual_memory().percent
            stats['swap'] = psutil.swap_memory().percent
        elif self.input_method == 'snmp':
            # Not available
            pass
    
        def get(self):
        '''Return the bars.'''
        frac, whole = modf(self.size * self.percent / 100.0)
        ret = curses_bars[8] * int(whole)
        if frac > 0:
            ret += curses_bars[int(frac * 8)]
            whole += 1
        ret += self.__empty_char * int(self.size - whole)
        if self.__with_text:
            ret = '{}{:5.1f}%'.format(ret, self.percent)
        return ret
    
        def get(self):
        '''Return the sparkline.'''
        ret = sparklines(self.percents)[0]
        if self.__with_text:
            percents_without_none = [x for x in self.percents if x is not None]
            if len(percents_without_none) > 0:
                ret = '{}{:5.1f}%'.format(ret, percents_without_none[-1])
        return nativestr(ret)
    
                    # Loop over interfaces
                network_new = netiocounters
    
    Monitor a process by executing a command line. This is the default AMP's behavor
if no AMP script is found.
    
        def export(self, name, columns, points):
        '''Write the points in MQTT.'''
    
        def test_006_all_limits(self):
        '''All limits.'''
        method = 'all/limits'
        print('INFO: [TEST_006] Get all limits')
        print('HTTP RESTful request: %s/%s' % (URL, method))
        req = self.http_get('%s/%s' % (URL, method))
    
        def __get_password(self, description='',
                       confirm=False, clear=False, username='glances'):
        '''Read a password from the command line.
    
            try:
            with open(self.IRQ_FILE) as irq_proc:
                time_since_update = getTimeSinceLastUpdate('irq')
                # Read the header
                self.__header(irq_proc.readline())
                # Read the rest of the lines (one line per IRQ)
                for line in irq_proc.readlines():
                    irq_line = self.__humanname(line)
                    current_irqs = self.__sum(line)
                    irq_rate = int(
                        current_irqs - self.lasts.get(irq_line)
                        if self.lasts.get(irq_line)
                        else 0 // time_since_update)
                    irq_current = {
                        'irq_line': irq_line,
                        'irq_rate': irq_rate,
                        'key': self.get_key(),
                        'time_since_update': time_since_update
                    }
                    self.stats.append(irq_current)
                    self.lasts[irq_line] = current_irqs
        except (OSError, IOError):
            pass
    
    [amp_systemd]
# Systemd
enable=true
regex=\/usr\/lib\/systemd\/systemd
refresh=60
one_line=true
systemctl_cmd=/usr/bin/systemctl --plain
'''
    
        def get(self):
        '''Return the AMPs dict.'''
        return self.__amps_dict