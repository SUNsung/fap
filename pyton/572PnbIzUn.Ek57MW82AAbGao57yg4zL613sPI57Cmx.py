
        
          Returns:
    The word embeddings matrix
  '''
  embedding_file = os.path.join(word_embeddings_dir, word_embeddings_file)
  vocab_file = os.path.join(
      word_embeddings_dir, os.path.dirname(word_embeddings_file), 'vocab.txt')
    
          # self.path_embeddings is of shape
      # [batch_size, max_path_per_instance, output_dim]
      # We need to multiply it by path counts
      # ([batch_size, max_path_per_instance]).
      # Start by duplicating path_counts along the output_dim axis.
      self.path_freq = tf.tile(tf.expand_dims(self.path_counts, -1),
                               [1, 1, self.path_dim])
    
    data_train_truth, data_valid_truth = split_list_by_inds(truth_data_e,
                                                        train_inds,
                                                        valid_inds)
data_train_spiking, data_valid_spiking = split_list_by_inds(spiking_data_e,
                                                            train_inds,
                                                            valid_inds)
    
      # Visualize this in the morning.
  all_data_nxtc = np.zeros([nchannels_all, ntime * nconditions_all])
  for name, dataset in datasets.items():
    cidx_s = channel_idxs[name][0]
    cidx_f = channel_idxs[name][1]
    for cname in conditions_all[name]:
      cidxs = np.argwhere(all_conditions_list == cname)
      if cidxs.shape[0] > 0:
        cidx = cidxs[0][0]
        all_tidxs = np.arange(0, ntime+1) + cidx*ntime
        all_data_nxtc[cidx_s:cidx_f, all_tidxs[0]:all_tidxs[-1]] = \
            avg_data_all[name][cname].T
    
        tf.logging.info('Loaded %d words.', current_idx)
    tf.logging.info('Finished loading')
    return zip(ids, chars_ids, global_word_ids)
    
      This generates batch_size pointers into the raw IMDB data, and allows
  minibatch iteration along these pointers.
    
    import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
    
from youtube_dl import YoutubeDL
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def test_cmdline_umlauts(self):
        p = subprocess.Popen(
            [sys.executable, 'youtube_dl/__main__.py', encodeArgument('ä'), '--version'],
            cwd=rootDir, stdout=_DEV_NULL, stderr=subprocess.PIPE)
        _, stderr = p.communicate()
        self.assertFalse(stderr)
    
        def logout(self):
        return self._client.get('/auth/logout')
    
        This function can return ``unicode`` strings or ascii-only bytestrings by
    default which coerce into unicode strings automatically.  That behavior by
    default is controlled by the ``JSON_AS_ASCII`` configuration variable
    and can be overridden by the simplejson ``ensure_ascii`` parameter.
    '''
    _dump_arg_defaults(kwargs)
    encoding = kwargs.pop('encoding', None)
    rv = _json.dumps(obj, **kwargs)
    if encoding is not None and isinstance(rv, text_type):
        rv = rv.encode(encoding)
    return rv
    
            # If the session is modified to be empty, remove the cookie.
        # If the session is empty, return without setting the cookie.
        if not session:
            if session.modified:
                response.delete_cookie(
                    app.session_cookie_name,
                    domain=domain,
                    path=path
                )
    
            for chunk in self.msg.iter_body(self.CHUNK_SIZE):
            if not converter and b'\0' in chunk:
                converter = self.conversion.get_converter(self.mime)
                if not converter:
                    raise BinarySuppressedError()
            body.extend(chunk)
    
        if 'win32' in str(sys.platform).lower():
        # Terminal colors for Windows
        install_requires.append('colorama>=0.2.4')
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        '''
    
    
# Are two filenames really pointing to the same file?
def samefile(f1, f2):
    '''Test whether two pathnames reference the same actual file'''
    s1 = os.stat(f1)
    s2 = os.stat(f2)
    return samestat(s1, s2)
    
    # Import the email modules we'll need
from email import policy
from email.parser import BytesParser
    
            TASKS = [(mul, (i, 7)) for i in range(10)] + \
                [(plus, (i, 8)) for i in range(10)]
    
    def calculate(func, args):
    result = func(*args)
    return '%s says that %s%s = %s' % \
        (current_process().name, func.__name__, args, result)
    
        def __getattr__(self, name):
        attr = getattr(self.delegate, name)
        
        if not callable(attr):
            return attr
    
        @staticmethod
    def _static_method_1():
        print('executed method 1!')
    
        def rename(self, src, dest):
        print(u'renaming %s to %s' % (src, dest))
        os.rename(src, dest)
    
    
class State(object):
    
    import types
    
        def generic_visit(self, node, *args, **kwargs):
        print('generic_visit ' + node.__class__.__name__)
    
    https://en.wikipedia.org/wiki/Lazy_evaluation
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
            path.append(start)
        if start == end:
            return path
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_path(node, end, path[:])
                if newpath:
                    return newpath