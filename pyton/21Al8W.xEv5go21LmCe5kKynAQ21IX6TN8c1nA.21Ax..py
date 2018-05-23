
        
        from itsdangerous import BadSignature, URLSafeTimedSerializer
from werkzeug.datastructures import CallbackDict
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
    _gc_lock = threading.Lock()
    
        flask.got_request_exception.connect(record, app)
    try:
        assert app.test_client().get('/').status_code == 500
        assert len(recorded) == 1
        assert isinstance(recorded[0], ZeroDivisionError)
    finally:
        flask.got_request_exception.disconnect(record, app)
    
      def __init__(self):
    self.spec = spec_pb2.MasterSpec()
    self.hyperparams = spec_pb2.GridPoint()
    self.lookup_component = {
        'previous': MockComponent(self, spec_pb2.ComponentSpec())
    }
    
      # All arguments must share the same type.
  dtype = arcs.dtype.base_dtype
  check.Same([dtype, roots.dtype.base_dtype], 'dtype mismatch')
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      # Then, copy all the asset files.
  for component_spec in master_spec.component:
    for resource_spec in component_spec.resource:
      tf.logging.info('Copying assets for resource %s/%s.' %
                      (component_spec.name, resource_spec.name))
      for part in resource_spec.part:
        original_file = shortened_to_original[part.file_pattern]
        new_file = os.path.join(asset_dir, part.file_pattern)
        tf.logging.info('Asset %s was renamed to %s.' % (original_file,
                                                         new_file))
        if tf.gfile.Exists(new_file):
          tf.logging.info('%s already exists, skipping copy.' % (new_file))
        else:
          new_dir = os.path.dirname(new_file)
          tf.gfile.MakeDirs(new_dir)
          tf.logging.info('Copying %s to %s' % (original_file, new_dir))
          tf.gfile.Copy(original_file, new_file, overwrite=True)
  tf.logging.info('Asset export complete.')
    
      def testSplitTagger(self):
    self.RunFullTrainingAndInference('split-tagger',
                                     'split_tagger_master_spec.textproto')
    
        default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
        def from_spider(self, spider, results):
        requests = []
        for method in self.tested_methods_from_spidercls(type(spider)):
            bound_method = spider.__getattribute__(method)
            requests.append(self.from_method(bound_method, results))
    
        def __init__(self, *args, **kwargs):
        super(ReturnsContract, self).__init__(*args, **kwargs)
    
        title = match1(html, r'&title=([^&]+)')
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
    def mixcloud_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url, faker=True)
    title = r1(r'<meta property='og:title' content='([^']*)'', html)
    preview_url = r1(r'm-preview=\'([^\']+)\'', html)
    preview = r1(r'previews(.*)\.mp3$', preview_url)
    
    from html.parser import HTMLParser
    
            # construct available streams
        if orig_img: self.streams['original'] = {'url': orig_img}
        if twit_img: self.streams['small'] = {'url': twit_img}
    
    site_info = 'Showroom'
download = showroom_download
download_playlist = playlist_not_supported('showroom')

    
    The get_colordb() function will try to examine the file to figure out what the
format of the file is.  If it can't figure out the file format, or it has
trouble reading the file, None is returned.  You can pass get_colordb() an
optional filetype argument.
    
    # String regex that string annotations for ClassVar or InitVar must match.
# Allows 'identifier.identifier[' or 'identifier['.
# https://bugs.python.org/issue33453 for details.
_MODULE_IDENTIFIER_RE = re.compile(r'^(?:\s*(\w+)\s*\.)?\s*(\w+)')
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown = True
            self._work_queue.put(None)
        if wait:
            for t in self._threads:
                t.join()
    shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
    class ThreadPoolExecutor(_base.Executor):
    def __init__(self, max_workers):
        '''Initializes a new ThreadPoolExecutor instance.
    
    if __name__ == '__main__':
    main()

    
            f = Future()
        f.add_done_callback(fn)
        f.set_result(5)
        self.assertEqual(5, callback_result[0])
    
      parsed_args, nosetests_args = parser.parse_known_args()
    
        def __init__(self, name):
        self.name = name
    
        def run(self, msg):
        print('{} got {}'.format(self.name, msg))
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
    
class CatalogClass(object):
    
    from __future__ import print_function
    
        def prepareReporting(self):
        rvalue = self._db.insert()
        if rvalue == -1:
            self._tc.setProblem(1)
            self._reporter.prepare()