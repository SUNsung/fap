
        
                admin_command = '''osascript -e 'do shell script '%s' with administrator privileges' ''' % exec_command
        cmd = admin_command.encode('utf-8')
        xlog.info('try auto import CA command:%s', cmd)
        os.system(cmd)
    
    
    def skipOffTokenChannels(self, i):
        '''
        Given a starting index, return the index of the first on-channel
        token.
        '''
    
        if not opts and not args:
        # Display help.
        print(_help)
        # Enter GUI mode.
        #from .gui import gui_main
        #gui_main()
    else:
        conf = {}
        for opt, arg in opts:
            if opt in ('-h', '--help'):
                # Display help.
                print(_help)
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
        else:
        titles = re.findall(r''name':'([^']*)'', html)
        real_urls = [re.sub('\\\\/', '/', i) for i in re.findall(r''rawUrl':'([^']*)'', html)]
    
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
    
        def update_url(self, received):
        args = self.common_args.copy()
        play_type = 'seek' if received else 'play'
        received = received if received else -1
        args['ls'] = play_type
        args['start'] = received + 1
        args['lt'] = self.get_date_str()
        if self.enc_mode:
            ssl_ts, sign = self.get_sign(self.media_url)
            extra_args = dict(h=sign, r=ssl_ts, p=self.__class__.ENCRYPT_MOD_VER)
            args.update(extra_args)
        return '{}?{}'.format(self.media_url, parse.urlencode(args))
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    # If false, no index is generated.
#
# html_use_index = True
    
        def __init__(self, token, default_room):
        '''Initialize the service.'''
        from ciscosparkapi import CiscoSparkAPI
        self._default_room = default_room
        self._token = token
        self._spark = CiscoSparkAPI(access_token=self._token)
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the Command Line notification service.'''
    command = config[CONF_COMMAND]
    
    import homeassistant.util.dt as dt_util
from homeassistant.components.notify import (
    ATTR_TITLE, ATTR_TITLE_DEFAULT, PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_FILENAME
import homeassistant.helpers.config_validation as cv
    
            try:
            # Open socket
            sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            sock.settimeout(10)
            sock.connect((self._host, self._port))
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the Pushetta notification service.'''
    api_key = config[CONF_API_KEY]
    channel_name = config[CONF_CHANNEL_NAME]
    send_test_msg = config[CONF_SEND_TEST_MSG]
    
        return None
    
    from homeassistant.components.notify import (
    ATTR_TITLE, ATTR_TITLE_DEFAULT, PLATFORM_SCHEMA, BaseNotificationService)
    
            db.start_transaction()
    
        def _forwards(self, orm):
        'Write your forwards methods here.'
        dupe_envs = orm.Environment.objects.values_list('name', 'organization_id')\
                                           .annotate(ecount=models.Count('id'))\
                                           .filter(ecount__gt=1)
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'ReleaseHeadCommit'
        db.create_table(
            'sentry_releaseheadcommit', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'organization_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        db_index=True
                    )
                ), (
                    'repository_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'release', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Release']
                    )
                ), (
                    'commit', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Commit']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['ReleaseHeadCommit'])