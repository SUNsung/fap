
        
        # Allow direct execution
import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
        def test_cmdline_umlauts(self):
        p = subprocess.Popen(
            [sys.executable, 'youtube_dl/__main__.py', encodeArgument('ä'), '--version'],
            cwd=rootDir, stdout=_DEV_NULL, stderr=subprocess.PIPE)
        _, stderr = p.communicate()
        self.assertFalse(stderr)
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
                elif opt in ('-V', '--version'):
                # Display version.
                log.println('you-get:', log.BOLD)
                log.println('    version:  {}'.format(__version__))
                if head is not None:
                    log.println('    branch:   {}\n    commit:   {}'.format(*head))
                else:
                    log.println('    branch:   {}\n    commit:   {}'.format('(stable)', '(tag v{})'.format(__version__)))
    
    __all__ = ['baomihua_download', 'baomihua_download_by_id']
    
    class BokeCC(VideoExtractor):
    name = 'BokeCC'
    
    import re
    
        title = match1(html, r'<title>([^<]{1,9999})</title>')
    
    
def icourses_playlist_new(url, page=None):
    # 2 helpers using same interface in the js code
    def to_chap(course_id, chap_id, mod):
        ep = 'http://www.icourses.cn/jpk/viewCharacterDetail2.action?courseId={}&characId={}&mod={}'
        req = post_content(ep.format(course_id, chap_id, mod), post_data={})
        return req
    
    for face_location in face_locations:
    
            if file.filename == '':
            return redirect(request.url)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
        def test_fd_command_line_interface_cnn_model(self):
        target_string = 'obama.jpg'
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')
    
    
def caesar_decode(n=0, text=''):
  return caesar_encode(-n, text)
    
    '''As a simple example of Python Fire, a Widget serves no clear purpose.'''
    
    '''Tests for the widget module.'''
    
      Args:
    fn: The function to be used for parsing arguments.
    *arguments: The arguments for which to use the parse fn. If none are listed,
      then this will set the default parse function.
  Returns:
    The decorated function, which now has metadata telling Fire how to perform.
  '''
  def _Decorator(func):
    parse_fns = GetParseFns(func)
    if not arguments:
      parse_fns['default'] = fn
    else:
      for argument in arguments:
        parse_fns['named'][argument] = fn
    _SetMetadata(func, FIRE_PARSE_FNS, parse_fns)
    return func
    
    import mock
    
      def test_one_line_simple_whitespace(self):
    docstring = '''
      A simple one line docstring.
    '''
    docstring_info = docstrings.parse(docstring)
    expected_docstring_info = DocstringInfo(
        summary='A simple one line docstring.',
    )
    self.assertEqual(docstring_info, expected_docstring_info)
    
      def testTabCompletionWithDict(self):
    actions = {'multiply': lambda a, b: a * b}
    completion_script = fire.Fire(
        actions, command=['--', '--completion'], name='actCLI')
    self.assertIn('actCLI', completion_script)
    self.assertIn('multiply', completion_script)
    
      This method generates `branch_factor` branches for each sequence in the beam,
  where each branch extends the event sequence by `num_steps` steps (via calls
  to `generate_step_fn`). The resulting beam is returned.
    
      def testSleeper_SleepUntil(self):
    # Burn in.
    for _ in range(10):
      concurrency.Sleeper().sleep(.01)
    
    
def extract_state(batched_states, i):
  '''Extracts a single state from a batch of states.
    
      def test_Unbatch(self):
    unbatched_states = state_util.unbatch(self._batched_states, batch_size=2)
    
      Returns:
    A merged tf.HParams object with the hyperparameters from both `hparams_1`
    and `hparams_2`.
  '''
  hparams_map = hparams_1.values()
  hparams_map.update(hparams_2.values())
  return tf.contrib.training.HParams(**hparams_map)
    
        for text in TEXTS:
        doc = nlp(text)
        relations = extract_currency_relations(doc)
        for r1, r2 in relations:
            print('{:<10}\t{}\t{}'.format(r1.text, r2.ent_type_, r2.text))
    
    import plac
from spacy.lang.en import English
from spacy.tokens import Doc, Span
from spacy import displacy
from pathlib import Path
    
        doc = nlp(text)
    print('Pipeline', nlp.pipe_names)  # pipeline contains component name
    print('Tokens', [t.text for t in doc])  # company names from the list are merged
    print('Doc has_tech_org', doc._.has_tech_org)  # Doc contains tech orgs
    print('Token 0 is_tech_org', doc[0]._.is_tech_org)  # 'Alphabet Inc.' is a tech org
    print('Token 1 is_tech_org', doc[1]._.is_tech_org)  # 'is' is not
    print('Entities', [(e.text, e.label_) for e in doc.ents])  # all orgs are entities
    
        print('Building Tensorboard Projector metadata for ({}) vectors: {}'.format(vector_count, out_meta_file))
    
    
def test():
    with virtualenv(VENV_DIR):
        with lcd(path.dirname(__file__)):
            local('py.test -x spacy/tests')

    
    
def get_model_links(compat):
    links = {}
    data_path = get_data_path()
    if data_path:
        models = [p for p in data_path.iterdir() if is_model_path(p)]
        for model in models:
            meta_path = Path(model) / 'meta.json'
            if not meta_path.exists():
                continue
            meta = read_json(meta_path)
            link = model.parts[-1]
            name = meta['lang'] + '_' + meta['name']
            links[link] = {'name': name, 'version': meta['version'],
                           'compat': is_compat(compat, name, meta['version'])}
    return links