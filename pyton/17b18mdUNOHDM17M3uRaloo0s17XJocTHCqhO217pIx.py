
        
            def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
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
    
    
@functools.lru_cache()
def get_default_renderer():
    renderer_class = import_string(settings.FORM_RENDERER)
    return renderer_class()
    
        def __eq__(self, other):
        if isinstance(other, Mapping):
            other = CaseInsensitiveDict(other)
        else:
            return NotImplemented
        # Compare insensitively
        return dict(self.lower_items()) == dict(other.lower_items())
    
        def proxy_headers(self, proxy):
        '''Returns a dictionary of the headers to add to any request sent
        through a proxy. This works with urllib3 magic to ensure that they are
        correctly sent to the proxy, rather than in a tunnelled request if
        CONNECT is being used.
    
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
    
    
def morsel_to_cookie(morsel):
    '''Convert a Morsel object into a Cookie containing the one k/v pair.'''
    
    
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
    
                sock.close()
    
        if no_proxy:
        # We need to check whether we match here. We need to see if we match
        # the end of the hostname, both with and without the port.
        no_proxy = (
            host for host in no_proxy.replace(' ', '').split(',') if host
        )
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary, list of tuples, bytes, or file-like
        object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'Home-Assistant', 'Home Assistant Documentation',
     author, 'Home Assistant', 'Open-source home automation platform.',
     'Miscellaneous'),
]
    
    
def display_temp(hass: HomeAssistant, temperature: float, unit: str,
                 precision: float) -> float:
    '''Convert temperature into preferred units/precision for display.'''
    temperature_unit = unit
    ha_unit = hass.config.units.temperature_unit
    
    
@asyncio.coroutine
def test_if_fires_on_hass_start(hass):
    '''Test the firing when HASS starts.'''
    calls = async_mock_service(hass, 'test', 'automation')
    hass.state = CoreState.not_running
    config = {
        automation.DOMAIN: {
            'alias': 'hello',
            'trigger': {
                'platform': 'homeassistant',
                'event': 'start',
            },
            'action': {
                'service': 'test.automation',
            }
        }
    }
    
    
def _expand_to_class_specific_mask_targets(masks, mask_class_labels):
    '''Expand masks from shape (#masks, M ** 2) to (#masks, #classes * M ** 2)
    to encode class specific mask targets.
    '''
    assert masks.shape[0] == mask_class_labels.shape[0]
    M = cfg.MRCNN.RESOLUTION
    
        net = core.Net('dequeue_net')
    net.type = 'dag'
    all_blobs = []
    for gpu_id in range(cfg.NUM_GPUS):
        with core.NameScope('gpu_{}'.format(gpu_id)):
            with core.DeviceScope(muji.OnGPU(gpu_id)):
                for blob_name in blob_names:
                    blob = core.ScopedName(blob_name)
                    all_blobs.append(blob)
                    workspace.CreateBlob(blob)
                    logger.info('Creating blob: {}'.format(blob))
                net.DequeueBlobs(
                    roi_data_loader._blobs_queue_name, blob_names)
    logger.info('Protobuf:\n' + str(net.Proto()))
    
    
if __name__ == '__main__':
    sys.exit(main())

    
    
@pytest.mark.parametrize(
    'invalid_css,remainder', [
        # No colon
        ('hello-world', ''),
        ('border-style: solid; hello-world', 'border-style: solid'),
        ('border-style: solid; hello-world; font-weight: bold',
         'border-style: solid; font-weight: bold'),
        # Unclosed string fail
        # Invalid size
        ('font-size: blah', 'font-size: 1em'),
        ('font-size: 1a2b', 'font-size: 1em'),
        ('font-size: 1e5pt', 'font-size: 1em'),
        ('font-size: 1+6pt', 'font-size: 1em'),
        ('font-size: 1unknownunit', 'font-size: 1em'),
        ('font-size: 10', 'font-size: 1em'),
        ('font-size: 10 pt', 'font-size: 1em'),
    ])
def test_css_parse_invalid(invalid_css, remainder):
    with tm.assert_produces_warning(CSSWarning):
        assert_same_resolution(invalid_css, remainder)
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
       Tornado requires the `~asyncio.AbstractEventLoop.add_reader` family of
   methods, so it is not compatible with the `~asyncio.ProactorEventLoop` on
   Windows. Use the `~asyncio.SelectorEventLoop` instead.
'''
    
        def get_target_delegate(
        self, target: Any, request: httputil.HTTPServerRequest, **target_params: Any
    ) -> Optional[httputil.HTTPMessageDelegate]:
        '''Returns an instance of `~.httputil.HTTPMessageDelegate` for a
        Rule's target. This method is called by `~.find_handler` and can be
        extended to provide additional target types.