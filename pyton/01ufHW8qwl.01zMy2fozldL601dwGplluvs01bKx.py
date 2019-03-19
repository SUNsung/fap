
        
            def exists(self, session_key):
        return bool(session_key) and (self.cache_key_prefix + session_key) in self._cache
    
    
class SessionManager(BaseSessionManager):
    use_in_migrations = True
    
    EXAMPLES = '''
# Note: These examples do not set authentication details or the AWS region,
# see the AWS Guide for details.
    
        if state == 'absent':
        if not module.params.get('name'):
            module.fail_json(
                msg=''name' parameter is required to delete a firewall policy.')
        try:
            (changed, firewall_policy) = remove_firewall_policy(module, oneandone_conn)
        except Exception as e:
            module.fail_json(msg=str(e))
    
    
def ensure(module, client):
    zone_name = module.params['zone_name']
    state = module.params['state']
    
    
DOCUMENTATION = '''
---
module: bigpanda
author: 'Hagai Kariti (@hkariti)'
short_description: Notify BigPanda about deployments
version_added: '1.8'
description:
   - Notify BigPanda when deployments start and end (successfully or not). Returns a deployment object containing all the parameters for future module calls.
options:
  component:
    description:
      - 'The name of the component being deployed. Ex: billing'
    required: true
    aliases: ['name']
  version:
    description:
      - The deployment version.
    required: true
  token:
    description:
      - API token.
    required: true
  state:
    description:
      - State of the deployment.
    required: true
    choices: ['started', 'finished', 'failed']
  hosts:
    description:
      - Name of affected host name. Can be a list.
    required: false
    default: machine's hostname
    aliases: ['host']
  env:
    description:
      - The environment name, typically 'production', 'staging', etc.
    required: false
  owner:
    description:
      - The person responsible for the deployment.
    required: false
  description:
    description:
      - Free text description of the deployment.
    required: false
  url:
    description:
      - Base URL of the API server.
    required: False
    default: https://api.bigpanda.io
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
        model_address = model.find('./*[@id='0x12d7f']').text
    
            return new_key

    
        def insert_data(self, data):
        key = self.hash_function(data)
    
    def sum32(a,b):
	return (a + b) % 2**32
    
    
def b_expo(a, b):
    res = 0
    while b > 0:
        if b&1:
            res += a
    
    
    def download_by_id(self, vid = '', title = None, output_dir='.', merge=True, info_only=False,**kwargs):
        '''self, str->None
        
        Keyword arguments:
        self: self
        vid: The video ID for BokeCC cloud, something like
        FE3BB999594978049C33DC5901307461
        
        Calls the prepare() to download the video.
        
        If no title is provided, this method shall try to find a proper title
        with the information providin within the
        returned content of the API.'''
    
    __all__ = ['cbs_download']
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    netease_embed_patterns = [ '(http://\w+\.163\.com/movie/[^\'']+)' ]
    
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
    
        if not network_mode.startswith(source_type+':'):
        return
    
                    if not volume_exists:
                    log.info(
                        'Creating volume '{0}' with {1} driver'.format(
                            volume.full_name, volume.driver or 'default'
                        )
                    )
                    volume.create()
                else:
                    check_remote_volume_config(volume.inspect(legacy=volume.legacy), volume)
        except NotFound:
            raise ConfigurationError(
                'Volume %s specifies nonexistent driver %s' % (volume.name, volume.driver)
            )
    
        return data
    
    
def update_run_sh_version(version):
    path = os.path.join(REPO_ROOT, 'script', 'run', 'run.sh')
    with open(path, 'r') as f:
        contents = f.read()
    contents = re.sub(r'VERSION='[0-9a-z.-]+'', 'VERSION='{}''.format(version), contents)
    with open(path, 'w') as f:
        f.write(contents)
    
            container_info = client.inspect_container(container)
        if 'Node' in container_info:
            return container_info['Node']['Name']
    finally:
        client.remove_container(container, force=True)
    
            assert net.ensure() is None

    
        def test_generic_connection_error(self, mock_logging):
        with pytest.raises(errors.ConnectionError):
            with patch_find_executable(['/bin/docker', None]):
                with handle_connection_errors(mock.Mock()):
                    raise ConnectionError()