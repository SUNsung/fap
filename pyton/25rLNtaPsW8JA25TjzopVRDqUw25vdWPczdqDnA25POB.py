
        
        from django.db import connections
from django.db.backends.base.base import NO_DB_ALIAS
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
                if self.wait_to_close_event:
                self.wait_to_close_event.wait(self.WAIT_EVENT_TIMEOUT)
        finally:
            self.ready_event.set() # just in case of exception
            self._close_server_sock_ignore_errors()
            self.stop_event.set()
    
        # Check chardet for compatibility.
    major, minor, patch = chardet_version.split('.')[:3]
    major, minor, patch = int(major), int(minor), int(patch)
    # chardet >= 3.0.2, < 3.1.0
    assert major == 3
    assert minor < 1
    assert patch >= 2
    
            :rtype: requests.Response
        '''
    
    
def morsel_to_cookie(morsel):
    '''Convert a Morsel object into a Cookie containing the one k/v pair.'''
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
        def test_requests_history_is_saved(self, httpbin):
        r = requests.get(httpbin('redirect/5'))
        total = r.history[-1].history
        i = 0
        for item in r.history:
            assert item.history == total[0:i]
            i += 1
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
        try:
        json_data = get_coub_data(html)
        title, video_url, audio_url = get_title_and_urls(json_data)
        video_file_name, video_file_path = get_file_path(merge, output_dir, title, video_url)
        audio_file_name, audio_file_path = get_file_path(merge, output_dir, title, audio_url)
        download_url(audio_url, merge, output_dir, title, info_only)
        download_url(video_url, merge, output_dir, title, info_only)
        if not info_only:
            try:
                fix_coub_video_file(video_file_path)
                audio_duration = float(ffmpeg.ffprobe_get_media_duration(audio_file_path))
                video_duration = float(ffmpeg.ffprobe_get_media_duration(video_file_path))
                loop_file_path = get_loop_file_path(title, output_dir)
                single_file_path = audio_file_path
                if audio_duration > video_duration:
                    write_loop_file(int(audio_duration / video_duration), loop_file_path, video_file_name)
                else:
                    single_file_path = audio_file_path
                    write_loop_file(int(video_duration / audio_duration), loop_file_path, audio_file_name)
    
    def rebuilt_url(url):
    path = urllib.parse.urlparse(url).path
    aid = path.split('/')[-1].split('_')[0]
    return 'http://www.dailymotion.com/embed/video/{}?autoplay=1'.format(aid)
    
    __all__ = ['ehow_download']
    
        if int(html['status']) != 100000:
        raise Exception('API error!')
    
    pattern_url_photoset = r'https?://www\.flickr\.com/photos/.+/(?:(?:sets)|(?:albums))?/([^/]+)'
pattern_url_photostream = r'https?://www\.flickr\.com/photos/([^/]+)(?:/|(?:/page))?$'
pattern_url_single_photo = r'https?://www\.flickr\.com/photos/[^/]+/(\d+)'
pattern_url_gallery = r'https?://www\.flickr\.com/photos/[^/]+/galleries/(\d+)'
pattern_url_group = r'https?://www\.flickr\.com/groups/([^/]+)'
pattern_url_favorite = r'https?://www\.flickr\.com/photos/([^/]+)/favorites'
    
        _class_method_choices = {'param_value_1': _class_method_1, 'param_value_2': _class_method_2}
    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
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
    
    '''
*What is this pattern about?
This pattern aims to encapsulate each algorithm and allow them to be
interchangeable. Separating algorithms allows the client to scale
with larger and more complex algorithms, since the client and the
strategies are kept independent of each other.
    
    ### OUTPUT ###
# generic_visit A
# visit_B B
# visit_B C

    
    # Create a random animal
def random_animal():
    '''Let's be dynamic!'''
    return random.choice([Dog, Cat])()
    
    The first example achieves this by using an abstract base
class for a building, where the initializer (__init__ method) specifies the
steps needed, and the concrete subclasses implement these steps.
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    
class Standby(Inservice):
    def __init__(self, HierachicalStateMachine):
        self._hsm = HierachicalStateMachine