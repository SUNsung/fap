
        
        
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    Options:
  -h  This help text.
  -q  Loggable output - no progress indicator
  -qq No output except for errors
  -d  Download only - do NOT install or unpack archives
  -s  No-act. Perform ordering simulation
  -y  Assume Yes to all queries and do not prompt
  -f  Attempt to correct a system with broken dependencies in place
  -m  Attempt to continue if archives are unlocatable
  -u  Show a list of upgraded packages as well
  -b  Build the source package after fetching it
  -V  Show verbose version numbers
  -c=? Read this configuration file
  -o=? Set an arbitrary configuration option, eg -o dir::cache=/tmp
See the apt-get(8), sources.list(5) and apt.conf(5) manual
pages for more information and options.
                       This APT has Super Cow Powers.
'''
apt_get_operations = ['update', 'upgrade', 'install', 'remove', 'autoremove',
                      'purge', 'source', 'build-dep', 'dist-upgrade',
                      'dselect-upgrade', 'clean', 'autoclean', 'check',
                      'changelog', 'download']
    
            def reset(path):
            os.mkdir('d')
            with tarfile.TarFile(path, 'w') as archive:
                for file in ('a', 'b', 'c', 'd/e'):
                    with open(file, 'w') as f:
                        f.write('*')
    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
        def test_copy(self):
        copy = self.case_insensitive_dict.copy()
        assert copy is not self.case_insensitive_dict
        assert copy == self.case_insensitive_dict
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        def prepare(self):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for transmission and returns it.'''
        p = PreparedRequest()
        p.prepare(
            method=self.method,
            url=self.url,
            headers=self.headers,
            files=self.files,
            data=self.data,
            json=self.json,
            params=self.params,
            auth=self.auth,
            cookies=self.cookies,
            hooks=self.hooks,
        )
        return p
    
            # Resolve redirects if allowed.
        history = [resp for resp in gen] if allow_redirects else []
    
        def test_preserve_last_key_case(self):
        cid = CaseInsensitiveDict({
            'Accept': 'application/json',
            'user-Agent': 'requests',
        })
        cid.update({'ACCEPT': 'application/json'})
        cid['USER-AGENT'] = 'requests'
        keyset = frozenset(['ACCEPT', 'USER-AGENT'])
        assert frozenset(i[0] for i in cid.items()) == keyset
        assert frozenset(cid.keys()) == keyset
        assert frozenset(cid) == keyset
    
    # The master toctree document.
master_doc = 'index'
    
    
Credentials
-----------
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-dns-digitalocean', u'certbot-dns-digitalocean Documentation',
     [author], 1)
]
    
    
def linear_dense(x, n_unit, name=None, reuse=None):
    '''线性全连接层
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_unit]
    
        公式
        `o = H(x, W)T(x, W) + x(1 - T(x, W))`
    其中
        H, T = dense
    '''
    n_input = int(x.get_shape()[-1])
    with tf.variable_scope(name or 'highway_dense'):
        W, b = get_wb([n_input, n_input])
    
    References:
    [paper] Bidirectional Attention Flow for Machine Comprehension (https://arxiv.org/abs/1611.01603)
    [github/DuReader] https://github.com/baidu/DuReader/blob/master/tensorflow/layers/match_layer.py
    [github/BiDAF(PyTorch)] https://github.com/jojonki/BiDAF/blob/master/layers/bidaf.py
'''
    
    
def get_w(shape,
          w_initializer=truncated_normal,
          w_regularizer=l2_regularizer,
          name=None):
    name = name or 'W'
    W = tf.get_variable(name, shape, dtype=tf_float, initializer=w_initializer,
                        regularizer=w_regularizer)
    return W
    
      Returns:
    The filename with the common suffix removed.
  '''
  for suffix in itertools.chain(
      ('%s.%s' % (test_suffix.lstrip('_'), ext)
       for test_suffix, ext in itertools.product(_test_suffixes, GetNonHeaderExtensions())),
      ('%s.%s' % (suffix, ext)
       for suffix, ext in itertools.product(['inl', 'imp', 'internal'], GetHeaderExtensions()))):
    if (filename.endswith(suffix) and len(filename) > len(suffix) and
        filename[-len(suffix) - 1] in ('-', '_')):
      return filename[:-len(suffix) - 1]
  return os.path.splitext(filename)[0]