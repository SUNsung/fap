
        
            def complete_call(self):
        self.call.state = CallState.COMPLETE
        self.call_center.notify_call_completed(self.call)
    
        def park_vehicle(self, vehicle):
        spot = self._find_available_spot(vehicle)
        if spot is None:
            return None
        else:
            spot.park_vehicle(vehicle)
            return spot
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
    
class UserGraphService(object):
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
    master_doc = 'index'
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinxcontrib.log_cabinet',
    'pallets_sphinx_themes',
    'sphinx_issues',
]
intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'werkzeug': ('http://werkzeug.pocoo.org/docs/', None),
    'click': ('https://click.palletsprojects.com/', None),
    'jinja': ('http://jinja.pocoo.org/docs/', None),
    'itsdangerous': ('https://itsdangerous.palletsprojects.com/', None),
    'sqlalchemy': ('https://docs.sqlalchemy.org/', None),
    'wtforms': ('https://wtforms.readthedocs.io/en/stable/', None),
    'blinker': ('https://pythonhosted.org/blinker/', None),
}
issues_github_path = 'pallets/flask'
    
    import click
from flask import current_app
from flask import g
from flask.cli import with_appcontext
    
        class newcls(oldcls):
        def __getitem__(self, key):
            try:
                return oldcls.__getitem__(self, key)
            except KeyError:
                if key not in request.form:
                    raise
                raise DebugFilesKeyError(request, key)
    
    
    .. versionchanged:: 0.11
       Added support for serializing top-level arrays. This introduces a
       security risk in ancient browsers. See :ref:`json-security` for details.
    
        def check(self, value):
        return isinstance(value, tuple)
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        req_protocol = request.scheme
    req_site = get_current_site(request)
    
    import gzip
import os
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        deserialized = losses.deserialize(serialized)
    assert isinstance(deserialized, MSE_MAE_loss)
    assert deserialized.mse_fraction == 0.3
    
    
def test_regularization_shared_model():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
        while True:
        more_to_read = select.select([sock], [], [], timeout)[0]
        if not more_to_read:
            break
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
                sock1.connect(address)
            sock1.sendall(first_request)
            sock1.close()
    
        def get(self, url, **kwargs):
        r'''Sends a GET request. Returns :class:`Response` object.
    
    # The encoding of source files.
# source_encoding = 'utf-8-sig'
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
    For each class of models we make the model complexity vary through the choice
of relevant model parameters and measure the influence on both computational
performance (latency) and predictive power (MSE or Hamming Loss).
'''
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    plt.figure(figsize=(12, 12))
    
    # #############################################################################
# Generate data (swiss roll dataset)
n_samples = 1500
noise = 0.05
X, _ = make_swiss_roll(n_samples, noise)
# Make it thinner
X[:, 1] *= .5
    
    
class Fixed(jose.Field):
    '''Fixed field.'''
    
    
class Signature(jose.Signature):
    '''ACME-specific Signature. Uses ACME-specific Header for customer fields.'''
    __slots__ = jose.Signature._orig_slots  # pylint: disable=no-member
    
        def setUp(self):
        from certbot_apache.obj import Addr
        from certbot_apache.obj import VirtualHost
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'acme': ('https://acme-python.readthedocs.org/en/latest/', None),
    'certbot': ('https://certbot.eff.org/docs/', None),
    'certbot-apache': (
        'https://letsencrypt-apache.readthedocs.org/en/latest/', None),
    'certbot-nginx': (
        'https://letsencrypt-nginx.readthedocs.org/en/latest/', None),
}

    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = ['sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode']
    
    
class FunctionDictsTest(FuncAttrsTest):
    def test_setting_dict_to_invalid(self):
        self.cannot_set_attr(self.b, '__dict__', None, TypeError)
        from collections import UserDict
        d = UserDict({'known_attr': 7})
        self.cannot_set_attr(self.fi.a.__func__, '__dict__', d, TypeError)
    
            for button, filename, name in button_sources:
            with  self.subTest(name=name):
                button.invoke()
                fn = findfile(filename, subdir='idlelib')
                get = dialog._current_textview.viewframe.textframe.text.get
                with open(fn, encoding='utf-8') as f:
                    self.assertEqual(f.readline().strip(), get('1.0', '1.end'))
                    f.readline()
                    self.assertEqual(f.readline().strip(), get('3.0', '3.end'))
                dialog._current_textview.destroy()
    
    # Add the html version.  This converts the message into a multipart/alternative
# container, with the original text message as the first part and the new html
# message as the second part.
asparagus_cid = make_msgid()
msg.add_alternative('''\
<html>
  <head></head>
  <body>
    <p>Salut!</p>
    <p>Cela ressemble à un excellent
        <a href='http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718'>
            recipie
        </a> déjeuner.
    </p>
    <img src='cid:{asparagus_cid}' />
  </body>
</html>
'''.format(asparagus_cid=asparagus_cid[1:-1]), subtype='html')
# note that we needed to peel the <> off the msgid for use in the html.
    
            print('Ordered results using pool.map() --- will block till complete:')
        for x in pool.map(calculatestar, TASKS):
            print('\t', x)
        print()
    
    #########################
# 1) Using declared types
con = sqlite3.connect(':memory:', detect_types=sqlite3.PARSE_DECLTYPES)
cur = con.cursor()
cur.execute('create table test(p point)')
    
      ifndef = ''
  ifndef_linenum = 0
  define = ''
  endif = ''
  endif_linenum = 0
  for linenum, line in enumerate(raw_lines):
    linesplit = line.split()
    if len(linesplit) >= 2:
      # find the first occurrence of #ifndef and #define, save arg
      if not ifndef and linesplit[0] == '#ifndef':
        # set ifndef to the header guard presented on the #ifndef line.
        ifndef = linesplit[1]
        ifndef_linenum = linenum
      if not define and linesplit[0] == '#define':
        define = linesplit[1]
    # find the last occurrence of #endif, save entire line
    if line.startswith('#endif'):
      endif = line
      endif_linenum = linenum