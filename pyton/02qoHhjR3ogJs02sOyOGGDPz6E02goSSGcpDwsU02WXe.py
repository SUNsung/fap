
        
        
def main():
    print('Making key files...')
    makeKeyFiles('elgamal', 2048)
    print('Key files generation successful')
    
            print('****************** Testing Edit Distance DP Algorithm ******************')
        print()
    
    The problem is  :
Given an ARRAY, to find the longest and increasing sub ARRAY in that given ARRAY and return it.
Example: [10, 22, 9, 33, 21, 50, 41, 60, 80] as input will return [10, 22, 33, 41, 60, 80] as output
'''
from __future__ import print_function
    
            if best_split != 0:
            left_X = X[:best_split]
            left_y = y[:best_split]
            right_X = X[best_split:]
            right_y = y[best_split:]
    
        Those are used for calculating differences between
    predicted values and actual values.
    
    min_length = 8
max_length = 16
password = ''.join(random.choice(chars) for x in range(random.randint(min_length, max_length)))
print('Password: ' + password)
print('[ If you are thinking of using this passsword, You better save it. ]')
    
        assert proc.expect([TIMEOUT, u'usage'])
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
        dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        with gzip.open(paths[2], 'rb') as lbpath:
        y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
    
class L1L2(Regularizer):
    '''Regularizer for L1 and L2 regularization.
    
    
class MSE_MAE_loss:
    '''Loss function with internal state, for testing serialization code.'''
    def __init__(self, mse_fraction):
        self.mse_fraction = mse_fraction
    
        ```python
    # Consider an array of 5 labels out of a set of 3 classes {0, 1, 2}:
    > labels
    array([0, 2, 1, 2, 0])
    # `to_categorical` converts this into a matrix with as many
    # columns as there are classes. The number of rows
    # stays the same.
    > to_categorical(labels)
    array([[ 1.,  0.,  0.],
           [ 0.,  0.,  1.],
           [ 0.,  1.,  0.],
           [ 0.,  0.,  1.],
           [ 1.,  0.,  0.]], dtype=float32)
    ```
    '''
    
        # Output shape
        - if `return_state`: a list of tensors. The first tensor is
            the output. The remaining tensors are the last states,
            each 5D tensor with shape:
            `(samples, timesteps,
              filters, new_rows, new_cols)` if data_format='channels_first'
            or 5D tensor with shape:
            `(samples, timesteps,
              new_rows, new_cols, filters)` if data_format='channels_last'.
            `rows` and `cols` values might have changed due to padding.
        - if `return_sequences`: 5D tensor with shape:
            `(samples, timesteps,
              filters, new_rows, new_cols)` if data_format='channels_first'
            or 5D tensor with shape:
            `(samples, timesteps,
              new_rows, new_cols, filters)` if data_format='channels_last'.
        - else, 4D tensor with shape:
            `(samples, filters, new_rows, new_cols)` if data_format='channels_first'
            or 4D tensor with shape:
            `(samples, new_rows, new_cols, filters)` if data_format='channels_last'.
    
    Introduced in TensorFlow 1.3, the Dataset API is now the
standard method for loading data into TensorFlow models.
A Dataset is a sequence of elements, which are themselves
composed of tf.Tensor components. For more details, see:
https://www.tensorflow.org/programmers_guide/datasets
    
    # train model for 5-digit classification [0..4]
train_model(model,
            (x_train_lt5, y_train_lt5),
            (x_test_lt5, y_test_lt5), num_classes)
    
    - Klambauer, G., Unterthiner, T., Mayr, A., & Hochreiter, S. (2017).
  Self-Normalizing Neural Networks. arXiv preprint arXiv:1706.02515.
  https://arxiv.org/abs/1706.02515
'''
from __future__ import print_function
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
        def _sync_state(self, enabled=True):
        '''Syncs local rule state with AWS'''
        remote_state = self._remote_state()
        if enabled and remote_state != 'ENABLED':
            self.rule.enable()
        elif not enabled and remote_state != 'DISABLED':
            self.rule.disable()
    
            if state == 'absent':
            if exists:
                conn.delete_cache_subnet_group(group_name)
                changed = True
        else:
            if not exists:
                new_group = conn.create_cache_subnet_group(group_name, cache_subnet_group_description=group_description, subnet_ids=group_subnets)
                changed = True
            else:
                changed_group = conn.modify_cache_subnet_group(group_name, cache_subnet_group_description=group_description, subnet_ids=group_subnets)
                changed = True
    
        module.exit_json(**results)
    
    EXAMPLES = '''
- heroku_collaborator:
    api_key: YOUR_API_KEY
    user: max.mustermann@example.com
    apps: heroku-example-app
    state: present
    
            if wait:
            wait_for_resource_creation_completion(
                oneandone_conn,
                OneAndOneResources.firewall_policy,
                firewall_policy['id'],
                wait_timeout,
                wait_interval)
    
            if module.check_mode:
            mp_id = get_monitoring_policy(oneandone_conn, monitoring_policy_id)
            if (monitoring_policy_processes and mp_id):
                return True
            return False
    
    #example for a DNAT
- hosts: localhost
  connection: local
  tasks:
   - vca_nat:
       instance_id: 'b15ff1e5-1024-4f55-889f-ea0209726282'
       vdc_name: 'benz_ansible'
       state: 'present'
       nat_rules:
         - rule_type: DNAT
           original_ip: 203.0.113.23
           original_port: 22
           translated_ip: 192.0.2.42
           translated_port: 22
    
        def manage(self):
        rc, out = self._exec(['list'])
        if rc != 0:
            self.module.fail_json(msg='Unable to list icinga2 features. '
                                      'Ensure icinga2 is installed and present in binary path.')
    
    EXAMPLES = '''
- stackdriver:
    key: AAAAAA
    event: deploy
    deployed_to: production
    deployed_by: leeroyjenkins
    repository: MyWebApp
    revision_id: abcd123
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def short_desc(self):
        return 'Fetch a URL using the Scrapy downloader'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
        def close(self):
        '''Close the execution engine gracefully.
    
        def _format_cookie(self, cookie):
        # build cookie string
        cookie_str = '%s=%s' % (cookie['name'], cookie['value'])
    
                if fail or self.network_stat != 'OK':
                # Fail or unknown
                if time_now - self.last_check_time < 3:
                    return
            else:
                if time_now - self.last_check_time < 10:
                    return
    
    log_file = os.path.join(data_path, 'ipv6_tunnel.log')
    
    - ANTLRStringStream: Reads from a string objects. The input should be a unicode
  object, or ANTLR3 will have trouble decoding non-ascii data.
- ANTLRFileStream: Opens a file and read the contents, with optional character
  decoding.
- ANTLRInputStream: Reads the date from a file-like object, with optional
  character decoding.
    
    EOF = -1
    
    
    def mark(self):
        state = (self.p, self.line, self.charPositionInLine)
        try:
            self._markers[self.markDepth] = state
        except IndexError:
            self._markers.append(state)
        self.markDepth += 1
        
        self.lastMarker = self.markDepth
        
        return self.lastMarker
    
    

    
            for i in self.tree.iterfind('video/quality'):
            quality = i.attrib ['value']
            url = i[0].attrib['playurl']
            self.stream_types.append({'id': quality,
                                      'video_profile': i.attrib ['desp']})
            self.streams[quality] = {'url': url,
                                     'video_profile': i.attrib ['desp']}
            self.streams_sorted = [dict([('id', stream_type['id'])] + list(self.streams[stream_type['id']].items())) for stream_type in self.__class__.stream_types if stream_type['id'] in self.streams]
    
        def __init__(self):
        super().__init__()
        self.api_data = None
    
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
    
            else:
            # gallery image
            content = get_content(self.url)
            image = json.loads(match1(content, r'image\s*:\s*({.*}),'))
            ext = image['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (image['hash'], ext)],
                    'size': image['size'],
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (image['hash'], '.jpg')],
                    'container': 'jpg'
                }
            }
            self.title = image['title'] or image['hash']
    
            pdf = match1(content, r'name='filename'\s*value='([^']+\.pdf)'')
        if pdf: pdf = 'http://res.infoq.com/downloads/pdfdownloads/%s' % pdf
    
    backends = []
    
            # Adding model 'TagKey'
        db.create_table(u'tagstore_tagkey', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('key', self.gf('django.db.models.fields.CharField')(max_length=32)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('status', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
        ))
        db.send_create_signal('tagstore', ['TagKey'])
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True))
    
        class Meta:
        app_label = 'tagstore'
        unique_together = (('project_id', 'event_id', 'key', 'value'), )
        index_together = (
            ('project_id', 'key', 'value'),
            ('group_id', 'key', 'value'),
        )
    
        GroupResolution.objects.filter(id__in=[r.id for r in resolution_list]).update(
        release=release,
        type=GroupResolution.Type.in_release,
        status=GroupResolution.Status.resolved,
    )
    
        This **does not** guarantee that the correct value is written into the cache
    though it will correct itself in the next update window.
    '''
    cutoff_dt = timezone.now() - timedelta(seconds=cutoff)
    # TODO(dcramer): this doesnt handle deleted options (which shouldn't be allowed)
    for option in Option.objects.filter(last_updated__gte=cutoff_dt).iterator():
        try:
            opt = default_manager.lookup_key(option.key)
            default_manager.store.set_cache(opt, option.value)
        except UnknownOption as e:
            logger.exception(six.text_type(e))

    
    
@instrumented_task(
    name='sentry.tasks.process_buffer.process_pending',
    queue='buffers.process_pending',
)
def process_pending(partition=None):
    '''
    Process pending buffers.
    '''
    from sentry import buffer
    from sentry.app import locks
    
            for job in job_list:
            logger.debug('Sending scheduled job %s with payload %r', job.name, job.payload)
            app.send_task(job.name, kwargs=job.payload)
            job.delete()
