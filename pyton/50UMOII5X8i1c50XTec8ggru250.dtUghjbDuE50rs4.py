
        
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    client = boto3_conn(module, conn_type='client', resource='waf', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    
def remove_rules_from_web_acl(client, module, web_acl_id):
    acl = get_web_acl(client, module, web_acl_id)
    deletions = [format_for_update(rule, 'DELETE') for rule in acl['Rules']]
    try:
        params = {'WebACLId': acl['WebACLId'], 'DefaultAction': acl['DefaultAction'], 'Updates': deletions}
        run_func_with_change_token_backoff(client, module, params, client.update_web_acl)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not remove rule')
    
    '''
    
        region, ec2_url, aws_connect_params = get_aws_connection_info(module, boto3=True)
    
        try:
        asgs_paginator = conn.get_paginator('describe_auto_scaling_groups')
        asgs = asgs_paginator.paginate().build_full_result()
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
    # Snapshot of volume mounted on device_name attached to instance_id
- ec2_snapshot:
    instance_id: i-12345678
    device_name: /dev/sdb1
    description: snapshot of /data from DB123 taken 2013/11/28 12:18:32
    
        if state == 'present' and not eigw_id:
        changed, result['gateway_id'] = create_eigw(module, connection, vpc_id)
    elif state == 'absent' and eigw_id:
        changed = delete_eigw(module, connection, eigw_id)
    
            final_state = camel_dict_to_snake_dict(get_vpc(module, connection, vpc_id))
        final_state['tags'] = boto3_tag_list_to_ansible_dict(final_state.get('tags', []))
        final_state['id'] = final_state.pop('vpc_id')
    
        def delete_repository_policy(self, registry_id, name):
        if not self.check_mode:
            policy = self.ecr.delete_repository_policy(
                repositoryName=name, **build_kwargs(registry_id))
            self.changed = True
            return policy
        else:
            policy = self.get_repository_policy(registry_id, name)
            if policy:
                self.skipped = True
                return policy
            return None
    
    
def create(module, connection, replication_id, cluster_id, name):
    ''' Create an Elasticache backup. '''
    try:
        response = connection.create_snapshot(ReplicationGroupId=replication_id,
                                              CacheClusterId=cluster_id,
                                              SnapshotName=name)
        changed = True
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Code'] == 'SnapshotAlreadyExistsFault':
            response = {}
            changed = False
        else:
            module.fail_json(msg='Unable to create the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    
DOCUMENTATION = '''
---
module: elasticache_subnet_group
version_added: '2.0'
short_description: manage Elasticache subnet groups
description:
     - Creates, modifies, and deletes Elasticache subnet groups. This module has a dependency on python-boto >= 2.5.
options:
  state:
    description:
      - Specifies whether the subnet should be present or absent.
    required: true
    default: present
    choices: [ 'present' , 'absent' ]
  name:
    description:
      - Database subnet group identifier.
    required: true
  description:
    description:
      - Elasticache subnet group description. Only set when a new group is added.
  subnets:
    description:
      - List of subnet IDs that make up the Elasticache subnet group.
author: 'Tim Mahoney (@timmahoney)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        return results
    
        if tags:
        create_success, create_msg = (
            tags_action(
                client, stream_name, tags, action='create',
                check_mode=check_mode
            )
        )
        if create_success:
            changed = True
        return create_success, changed, create_msg
    
    
from xlog import getLogger
xlog = getLogger('gae_proxy')
xlog.set_buffer(1000)
    
        def __init__(self, logger):
        self.logger = logger
    
        deadline = URLFETCH_TIMEOUT
    validate_certificate = bool(int(kwargs.get('validate', 0)))
    accept_encoding = headers.get('Accept-Encoding', '')
    errors = []
    for i in xrange(int(kwargs.get('fetchmax', URLFETCH_MAX))):
        try:
            response = urlfetch.fetch(url, payload, fetchmethod, headers, allow_truncated=False, follow_redirects=False, deadline=deadline, validate_certificate=validate_certificate)
            break
        except apiproxy_errors.OverQuotaError as e:
            time.sleep(5)
        except urlfetch.DeadlineExceededError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DeadlineExceededError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.DownloadError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DownloadError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.ResponseTooLargeError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            response = e.response
            logging.error('ResponseTooLargeError(deadline=%s, url=%r) response(%r)', deadline, url, response)
            m = re.search(r'=\s*(\d+)-', headers.get('Range') or headers.get('range') or '')
            if m is None:
                headers['Range'] = 'bytes=0-%d' % int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE))
            else:
                headers.pop('Range', '')
                headers.pop('range', '')
                start = int(m.group(1))
                headers['Range'] = 'bytes=%s-%d' % (start, start+int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE)))
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.SSLCertificateError as e:
            errors.append('%r, should validate=0 ?' % e)
            logging.error('%r, deadline=%s', e, deadline)
        except Exception as e:
            errors.append(str(e))
            if i == 0 and method == 'GET':
                deadline = URLFETCH_TIMEOUT * 2
    else:
        start_response('500 Internal Server Error', [('Content-Type', 'text/html')])
        error_string = '<br />\n'.join(errors)
        if not error_string:
            logurl = 'https://appengine.google.com/logs?&app_id=%s' % os.environ['APPLICATION_ID']
            error_string = 'Internal Server Error. <p/>try <a href='javascript:window.location.reload(true);'>refresh</a> or goto <a href='%s' target='_blank'>appengine.google.com</a> for details' % logurl
        yield message_html('502 Urlfetch Error', 'Python Urlfetch Error: %r' % method,  error_string)
        raise StopIteration
    
    
    def setTokenStream(self, input):
        '''Set the token stream and reset the parser'''
        
        self.input = None
        self.reset()
        self.input = input
    
        def __init__(self, json_name, value):
        self.value = value
        super(Fixed, self).__init__(
            json_name=json_name, default=value, omitempty=False)
    
        def setUp(self):
        self.privkey = KEY
        self.pubkey = self.privkey.public_key()
        self.nonce = jose.b64encode(b'Nonce')
        self.url = 'hi'
        self.kid = 'baaaaa'
    
    csr = OpenSSL.crypto.load_certificate_request(
    OpenSSL.crypto.FILETYPE_ASN1, pkg_resources.resource_string(
        'acme', os.path.join('testdata', 'csr.der')))
try:
    acme.request_issuance(jose.util.ComparableX509(csr), (authzr,))
except messages.Error as error:
    print ('This script is doomed to fail as no authorization '
           'challenges are ever solved. Error from server: {0}'.format(error))

    
        :returns: file path and internal Augeas path
    :rtype: `tuple` of `str`
    
    AUTOHSTS_STEPS = [60, 300, 900, 3600, 21600, 43200, 86400]
'''AutoHSTS increase steps: 1min, 5min, 15min, 1h, 6h, 12h, 24h'''
    
            for addr in vhost.addrs:
            for local_addr in self.addrs:
                if (local_addr.get_addr() == addr.get_addr() and
                        local_addr != addr and
                        local_addr.get_addr() not in already_found):
    
    from certbot.display import util as display_util
    
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
    
        def download_by_vid(self, vid, **kwargs):
        self.url = None
        self.vid = vid
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
    __all__ = ['dilidili_download']
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
    
def fantasy_download_by_id_channelId(id = 0, channelId = 0, output_dir = '.', merge = True, info_only = False,
                                     **kwargs):
    api_url = 'http://www.fantasy.tv/tv/playDetails.action?' \
              'myChannelId=1&id={id}&channelId={channelId}&t={t}'.format(id = id,
                                                                         channelId = channelId,
                                                                         t = str(random.random())
                                                                         )
    html = get_content(api_url)
    html = json.loads(html)
    
    tmpl_api_call_video_info = (
    'https://api.flickr.com/services/rest?'
    '&format=json&nojsoncallback=1'
    '&method=flickr.video.getStreamInfo'
    '&api_key=%s'
    '&photo_id=%s'
    '&secret=%s'
)
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise