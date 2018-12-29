# Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def process_options(self, args, opts):
        try:
            self.settings.setdict(arglist_to_dict(opts.set),
                                  priority='cmdline')
        except ValueError:
            raise UsageError('Invalid -s value, use -s NAME=VALUE', print_help=False)
    
        requires_project = True
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
        def print_results(self, opts):
        colour = not opts.nocolour
    
    
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform == 'linux' or sys.platform == 'linux2':
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
    
            if response.status == 503:
            # out of quota
            if 'gws' not in server_type and 'Google Frontend' not in server_type and 'GFE' not in server_type:
                xlog.warn('503 but server type:%s', server_type)
                return False
            else:
                return True
    
            if config.PROXY_ENABLE:
            if config.PROXY_USER:
                self.proxy = '%s://%s:%s@%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_USER, config.PROXY_PASSWD, config.PROXY_HOST, config.PROXY_PORT)
            else:
                self.proxy = '%s://%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_HOST, config.PROXY_PORT)
        else:
            self.proxy = None
    
        global pteredor_is_running
    pteredor_is_running = True
    server_list = prober.eval_servers()
    pteredor_is_running = False
    
    The runtime provides these Token implementations:
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        if '_text' in dictified['video'][0]['file'][0]:  #link exist
        video_dict['links'] = [i['file'][0]['_text'].strip() for i in dictified['video']]
    
    from ..common import *
import urllib.parse
    
            ckplayer_download(another_url, output_dir, merge, info_only, is_xml = True, title = title, headers = headers)
    
    def get_url_of_largest(info, api_key, size):
    if info['media'] == 'photo':
        sizes = size_suffixes
        if size in sizes:
            sizes = sizes[sizes.index(size):]
        for suffix in sizes:
            if 'url_' + suffix in info:
                return info['url_' + suffix].replace('\\', '')
        return None
    else:
        return get_orig_video_source(api_key, info['id'], info['secret'])
    
        move = Action('move')
    person = Person('Jack', move)
    person.do_action().amount('5m').stop()
    
    '''
Implementation of the state pattern
    
    # Execute them
for template in templates:
    template()
    
        def clone(self, **attrs):
        '''Clone a prototype and update inner attributes dictionary'''
        # Python in Practice, Mark Summerfield
        obj = self.__class__()
        obj.__dict__.update(attrs)
        return obj
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        @abc.abstractproperty
    def is_eager_to_contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')