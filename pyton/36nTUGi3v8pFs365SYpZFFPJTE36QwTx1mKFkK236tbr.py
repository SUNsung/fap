
        
                Comment:                   'italic #8f5902', # class: 'c'
        Comment.Preproc:           'noitalic',       # class: 'cp'
    
                return self.server_sock.accept()[0]
        except (select.error, socket.error):
            return None
    
                if self.status_code == 0 or self.raw is None:
                self._content = None
            else:
                self._content = bytes().join(self.iter_content(CONTENT_CHUNK_SIZE)) or bytes()
    
    import pytest
    
                return _r
    
    '''
requests.cookies
~~~~~~~~~~~~~~~~
    
    
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'Requests.tex', u'Requests Documentation',
     u'Kenneth Reitz', 'manual'),
]
    
        @pytest.mark.parametrize(
        'url', (
            'http://192.168.1.1:5000/',
            'http://192.168.1.1/',
            'http://www.requests.com/',
        ))
    def test_bypass_no_proxy_keyword(self, url):
        no_proxy = '192.168.1.1,requests.com'
        assert get_environ_proxies(url, no_proxy=no_proxy) == {}
    
    Py3 = sys.version_info[0] == 3
    
    '''Tests for models.tutorials.rnn.ptb.reader.'''
    
    FOUR_LINES = '\n'.join([
    '1,52.40, 2823,152,2',
    '164, 99.80,176.60,66.20,1',
    '176,2824, 136,3.19,0',
    '2,177.30,66.30, 53.10,1',])
    
    py_test(
    name = 'translate_test',
    size = 'medium',
    srcs = [
        'translate.py',
    ],
    args = [
        '--self_test=True',
    ],
    main = 'translate.py',
    srcs_version = 'PY2AND3',
    deps = [
        ':data_utils',
        ':seq2seq_model',
        '//tensorflow:tensorflow_py',
    ],
)
    
      Args:
    source_path: path to the files with token-ids for the source language.
    target_path: path to the file with token-ids for the target language;
      it must be aligned with the source file: n-th line contains the desired
      output for n-th line from the source_path.
    max_size: maximum number of lines to read, all other will be ignored;
      if 0 or None, data files will be read completely (no limit).
    
    
def get_wmt_enfr_train_set(directory):
  '''Download the WMT en-fr training corpus to directory unless it's there.'''
  train_path = os.path.join(directory, 'giga-fren.release2.fixed')
  if not (gfile.Exists(train_path +'.fr') and gfile.Exists(train_path +'.en')):
    corpus_file = maybe_download(directory, 'training-giga-fren.tar',
                                 _WMT_ENFR_TRAIN_URL)
    print('Extracting tar file %s' % corpus_file)
    with tarfile.open(corpus_file, 'r') as corpus_tar:
      corpus_tar.extractall(directory)
    gunzip_file(train_path + '.fr.gz', train_path + '.fr')
    gunzip_file(train_path + '.en.gz', train_path + '.en')
  return train_path
    
          Args:
      batch_size: Total batch size used to calculate examples/second from
      global time.
      every_n_steps: Log stats every n steps.
      every_n_secs: Log stats every n seconds.
    '''
    if (every_n_steps is None) == (every_n_secs is None):
      raise ValueError('exactly one of every_n_steps'
                       ' and every_n_secs should be provided.')
    self._timer = basic_session_run_hooks.SecondOrStepTimer(
        every_steps=every_n_steps, every_secs=every_n_secs)
    
    
@keras_test
def test_sequential_sample_weights():
    model = create_sequential_model()
    model.compile(loss=loss, optimizer='rmsprop')
    
    
@keras_test
def test_gaussiandropout_legacy_interface():
    old_layer = keras.layers.GaussianDropout(p=0.6, name='drop')
    new_layer_1 = keras.layers.GaussianDropout(rate=0.6, name='drop')
    new_layer_2 = keras.layers.GaussianDropout(0.6, name='drop')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_1.get_config())
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_2.get_config())
    
    
def handle_function(name, member):
    if is_accepted(name, member):
        return
    doc = member.__doc__
    if doc is None and not member_too_small(member):
        raise ValueError('{} function doesn't have any documentation'.format(name),
                         member.__module__, inspect.getmodule(member).__file__)
    args = list(inspect.signature(member).parameters.keys())
    assert_args_presence(args, doc, member, name)
    assert_function_style(name, member, doc, args)
    assert_doc_style(name, member, doc)