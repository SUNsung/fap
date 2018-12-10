
        
            elif METHOD == 'LIST':
        domain = compat_urllib_parse_urlparse(test['url']).netloc
        if not domain:
            print('\nFail: {0}'.format(test['name']))
            continue
        domain = '.'.join(domain.split('.')[-2:])
    
    password = key + 16 * [0]
new_key = aes_encrypt(password, key_expansion(password)) * (32 // 16)
r = openssl_encode('aes-256-ctr', new_key, iv)
print('aes_decrypt_text 32')
print(repr(r))

    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    
def get_base_name(base):
    if base is InfoExtractor:
        return 'LazyLoadExtractor'
    elif base is SearchInfoExtractor:
        return 'LazyLoadSearchExtractor'
    else:
        return base.__name__
    
    
if __name__ == '__main__':
    main()

    
        if not releases:
        break
    
        flags = [opt.get_opt_string() for opt in opts]
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
from youtube_dl.version import __version__
version = __version__
# The full version, including alpha/beta/rc tags.
release = version
    
        @property
    def body(self):
        body = self._orig.body
        if isinstance(body, str):
            # Happens with JSON/form request data parsed from the command line.
            body = body.encode('utf8')
        return body or b''

    
    
def write_stream_with_colors_win_py3(stream, outfile, flush):
    '''Like `write`, but colorized chunks are written as text
    directly to `outfile` to ensure it gets processed by colorama.
    Applies only to Windows with Python 3 and colorized terminal output.
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
            def attempts(unique_on_attempt=0):
            # noinspection PyUnresolvedReferences,PyUnusedLocal
            def exists(filename):
                if exists.attempt == unique_on_attempt:
                    return False
                exists.attempt += 1
                return True
    
    from httpie import ExitStatus
from httpie.core import main
    
    import pytest
    
    
class RangeMaxValueValidator(MaxValueValidator):
    def compare(self, a, b):
        return a.upper is None or a.upper > b
    message = _('Ensure that this range is completely less than or equal to %(limit_value)s.')
    
    
def l1_l2(l1=0.01, l2=0.01):
    return L1L2(l1=l1, l2=l2)
    
    
def test_cifar():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = cifar10.load_data()
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('fine')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('coarse')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
    
        # Arguments
        y: class vector to be converted into a matrix
            (integers from 0 to num_classes).
        num_classes: total number of classes.
        dtype: The data type expected by the input, as a string
            (`float32`, `float64`, `int32`...)
    
            self.kernel_regularizer = regularizers.get(kernel_regularizer)
        self.recurrent_regularizer = regularizers.get(recurrent_regularizer)
        self.bias_regularizer = regularizers.get(bias_regularizer)
        self.activity_regularizer = regularizers.get(activity_regularizer)
    
        for epoch in range(initial_epoch, epochs):
        # Reset stateful metrics
        for m in model.stateful_metric_functions:
            m.reset_states()
        callbacks.on_epoch_begin(epoch)
        epoch_logs = {}
        if steps_per_epoch is not None:
            for step_index in range(steps_per_epoch):
                batch_logs = {}
                batch_logs['batch'] = step_index
                batch_logs['size'] = 1
                callbacks.on_batch_begin(step_index, batch_logs)
                outs = fit_function(fit_inputs)
    
    # LSTM
lstm_output_size = 70
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
from ansible.module_utils.aws.waf import list_web_acls, get_web_acl
    
        snaked_launch_configs = []
    for launch_config in launch_configs['LaunchConfigurations']:
        snaked_launch_configs.append(camel_dict_to_snake_dict(launch_config))
    
        def describe_services(self, cluster, services):
        fn_args = dict()
        if cluster and cluster is not None:
            fn_args['cluster'] = cluster
        fn_args['services'] = services
        try:
            response = self.describe_services_with_backoff(**fn_args)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Couldn't describe ECS services')
        running_services = [self.extract_service_from(service) for service in response.get('services', [])]
        services_not_running = response.get('failures', [])
        return running_services, services_not_running
    
        except botocore.exceptions.ClientError:
        pass
    
    
DOCUMENTATION = '''
---
module: rds_subnet_group
version_added: '1.5'
short_description: manage RDS database subnet groups
description:
     - Creates, modifies, and deletes RDS database subnet groups. This module has a dependency on python-boto >= 2.5.
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
      - Database subnet group description. Only set when a new group is added.
  subnets:
    description:
      - List of subnet IDs that make up the database subnet group.
author: 'Scott Anderson (@tastychutney)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    EXAMPLES = '''
# Note: These examples do not set authentication details, see the AWS Guide for details.
    
    
def commit_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/commit/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'commit ' + text, refuri=ref, **options)
    return [node], []
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
        def start_requests(self):
        url = self.benchurl
        if self.latency is not None:
            url += '?latency={0}'.format(self.latency)
    
            editor = self.settings['EDITOR']
        try:
            spidercls = self.crawler_process.spider_loader.load(args[0])
        except KeyError:
            return self._err('Spider not found: %s' % args[0])
    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
        platforms = 'any',
    zip_safe = True,
    include_package_data = True,
    
    # I don't know how to call the player directly so I just put it here
# just in case anyone touchs it -- Beining@Aug.24.2016
#download = site.download_by_url
#download_playlist = site.download_by_url
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
        if re.match(re_str, url):
        html = get_content(url)
        title = match1(html, r'<title>(.+)丨(.+)</title>')  #title
        
        # player loaded via internal iframe
        frame_url = re.search(r'<iframe src=\'(.+?)\'', html).group(1)
        logging.debug('dilidili_download: %s' % frame_url)
        
        #https://player.005.tv:60000/?vid=a8760f03fd:a04808d307&v=yun&sign=a68f8110cacd892bc5b094c8e5348432
        html = get_content(frame_url, headers=headers, decoded=False).decode('utf-8')
        
        match = re.search(r'(.+?)var video =(.+?);', html)
        vid = match1(html, r'var vid='(.+)'')
        hd2 = match1(html, r'var hd2='(.+)'')
        typ = match1(html, r'var typ='(.+)'')
        sign = match1(html, r'var sign='(.+)'')
        tmsign = match1(html, r'tmsign=([A-Za-z0-9]+)')
        ulk =  match1(html, r'var ulk='(.+)'')
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge = merge, headers = headers)
    
        def backwards(self, orm):
        # Removing unique constraint on 'EventProcessingIssue', fields
        # ['raw_event', 'processing_issue']
        db.delete_unique('sentry_eventprocessingissue', ['raw_event_id', 'processing_issue_id'])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'ApiGrant.scope_list'
        db.add_column(
            'sentry_apigrant',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'Distribution'
        db.create_table(
            'sentry_distribution', (
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
                    'release', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Release']
                    )
                ), ('name', self.gf('django.db.models.fields.CharField')(max_length=64)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['Distribution'])
    
    *Where is the pattern used practically?
In graphics editors a shape can be basic or complex. An example of a
simple shape is a line, where a complex shape is a rectangle which is
made of four line objects. Since shapes have many operations in common
such as rendering the shape to screen, and since shapes follow a
part-whole hierarchy, composite pattern can be used to enable the
program to deal with all shapes uniformly.
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._static_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    
class MoveFileCommand(object):
    def __init__(self, src, dest):
        self.src = src
        self.dest = dest
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    
def memento(obj, deep=False):
    state = deepcopy(obj.__dict__) if deep else copy(obj.__dict__)
    
    *TL;DR80
Delays the eval of an expr until its value is needed and avoids repeated evals.
'''
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)