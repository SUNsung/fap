
        
        from flask import Markup
from flask.json.tag import TaggedJSONSerializer, JSONTag
    
            :param obj: an import name or object
        '''
        if isinstance(obj, string_types):
            obj = import_string(obj)
        for key in dir(obj):
            if key.isupper():
                self[key] = getattr(obj, key)
    
        def __init__(self, request, key):
        form_matches = request.form.getlist(key)
        buf = ['You tried to access the file '%s' in the request.files '
               'dictionary but it does not exist.  The mimetype for the request '
               'is '%s' instead of 'multipart/form-data' which means that no '
               'file contents were transmitted.  To fix this error you should '
               'provide enctype='multipart/form-data' in your form.' %
               (key, request.mimetype)]
        if form_matches:
            buf.append('\n\nThe browser instead transmitted some file names. '
                       'This was submitted: %s' % ', '.join(''%s'' % x
                            for x in form_matches))
        self.msg = ''.join(buf)
    
        If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
        stream = StringIO()
    client.get('/', errors_stream=stream)
    assert 'ERROR in test_logging: test' in stream.getvalue()
    
    
class assert_no_leak(object):
    
                greenlets.append(greenlet(g))
            return 'Hello World!'
    
    
@for_app('tar')
def match(command):
    return ('-C' not in command.script
            and _is_tar_extract(command.script)
            and _tar_file(command.script_parts) is not None)
    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
            # train once so that the states change
        model.train_on_batch(np.ones((num_samples, timesteps)),
                             np.ones((num_samples, units)))
        out2 = model.predict(np.ones((num_samples, timesteps)))
    
    The VAE has a modular design. The encoder, decoder and VAE
are 3 models that share weights. After training the VAE model,
the encoder can be used to  generate latent vectors.
The decoder can be used to generate MNIST digits by sampling the
latent vector from a Gaussian distribution with mean=0 and std=1.
    
    num_classes = np.max(y_train) + 1
print(num_classes, 'classes')
    
    ] + _py_files('scrapy/contrib') + _py_files('scrapy/contrib_exp')
    
        def add_post_hook(self, request, results):
        if hasattr(self, 'post_process'):
            cb = request.callback
    
    
class ScrapesContract(Contract):
    ''' Contract to check presence of fields in scraped items
        @scrapes page_name page_body
    '''
    
            installer.deploy_cert.side_effect = errors.PluginError
        self.assertRaises(errors.PluginError, self.client.deploy_certificate,
                          ['foo.bar'], 'key', 'cert', 'chain', 'fullchain')
        installer.recovery_routine.assert_called_once_with()
    
    import mock
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_missing_location(self, mock_get_request):
        mock_get_request.return_value = create_response(301)
        self.assertFalse(self.validator.redirect('test.com'))
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
    def kuwo_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'www.kuwo.cn/yinyue' in url:
        rid=match1(url,'yinyue/(\d+)')
        kuwo_download_by_rid(rid,output_dir, merge, info_only)
    else:
        kuwo_playlist_download(url,output_dir,merge,info_only)
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]