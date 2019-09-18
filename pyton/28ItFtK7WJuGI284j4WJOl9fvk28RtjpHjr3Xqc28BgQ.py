
        
                video_info = self._download_json(
            'http://feeds.cbsn.cbsnews.com/rundown/story', display_id, query={
                'device': 'desktop',
                'dvr_slug': display_id,
            })
    
            webpage = self._download_webpage(
            'https://www.bitchute.com/video/%s' % video_id, video_id, headers={
                'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.57 Safari/537.36',
            })
    
        def _real_initialize(self):
        self._login()
    
    
class CBSBaseIE(ThePlatformFeedIE):
    def _parse_smil_subtitles(self, smil, namespace=None, subtitles_lang='en'):
        subtitles = {}
        for k, ext in [('sMPTE-TTCCURL', 'tt'), ('ClosedCaptionURL', 'ttml'), ('webVTTCaptionURL', 'vtt')]:
            cc_e = find_xpath_attr(smil, self._xpath_ns('.//param', namespace), 'name', k)
            if cc_e is not None:
                cc_url = cc_e.get('value')
                if cc_url:
                    subtitles.setdefault(subtitles_lang, []).append({
                        'ext': ext,
                        'url': cc_url,
                    })
        return subtitles
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
from youtube_dl.utils import shell_quote
    
    import codecs
import subprocess
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
            @app.route('/_get_current_user')
        def get_current_user():
            return jsonify(username=g.user.username,
                           email=g.user.email,
                           id=g.user.id)
    
        #: The canonical way to decorate class-based views is to decorate the
    #: return value of as_view().  However since this moves parts of the
    #: logic from the class declaration to the place where it's hooked
    #: into the routing system.
    #:
    #: You can place one or more decorators in this list and whenever the
    #: view function is created the result is automatically decorated.
    #:
    #: .. versionadded:: 0.8
    decorators = ()
    
    
@pytest.mark.parametrize(
    'value,path,result',
    (
        ('test', cwd, 'test'),
        ('test.py', cwd, 'test'),
        ('a/test', os.path.join(cwd, 'a'), 'test'),
        ('test/__init__.py', cwd, 'test'),
        ('test/__init__', cwd, 'test'),
        # nested package
        (
            os.path.join(test_path, 'cliapp', 'inner1', '__init__'),
            test_path,
            'cliapp.inner1',
        ),
        (
            os.path.join(test_path, 'cliapp', 'inner1', 'inner2'),
            test_path,
            'cliapp.inner1.inner2',
        ),
        # dotted name
        ('test.a.b', cwd, 'test.a.b'),
        (os.path.join(test_path, 'cliapp.app'), test_path, 'cliapp.app'),
        # not a Python file, will be caught during import
        (
            os.path.join(test_path, 'cliapp', 'message.txt'),
            test_path,
            'cliapp.message.txt',
        ),
    ),
)
def test_prepare_import(request, value, path, result):
    '''Expect the correct path to be set and the correct import and app names
    to be returned.
    
    
def test_main_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('main_app.py')
    app.write('import flask\n\napp = flask.Flask('__main__')')
    purge_module('main_app')
    
        def get_by_name(self, name):
        '''
        Generic get by name implementation.
    
    DOCUMENTATION = '''
---
module: netcup_dns
notes: []
version_added: 2.7.0
short_description: manage Netcup DNS records
description:
  - 'Manages DNS records via the Netcup API, see the docs U(https://ccp.netcup.net/run/webservice/servers/endpoint.php)'
options:
  api_key:
    description:
      - API key for authentification, must be obtained via the netcup CCP (U(https://ccp.netcup.net))
    required: True
  api_password:
    description:
      - API password for authentification, must be obtained via the netcup CCP (https://ccp.netcup.net)
    required: True
  customer_id:
    description:
      - Netcup customer id
    required: True
  domain:
    description:
      - Domainname the records should be added / removed
    required: True
  record:
    description:
      - Record to add or delete, supports wildcard (*). Default is C(@) (e.g. the zone name)
    default: '@'
    aliases: [ name ]
  type:
    description:
      - Record type
    choices: ['A', 'AAAA', 'MX', 'CNAME', 'CAA', 'SRV', 'TXT', 'TLSA', 'NS', 'DS']
    required: True
  value:
    description:
      - Record value
    required: true
  solo:
    type: bool
    default: False
    description:
      - Whether the record should be the only one for that record type and record name. Only use with C(state=present)
      - This will delete all other records with the same record name and type.
  priority:
    description:
      - Record priority. Required for C(type=MX)
    required: False
  state:
    description:
      - Whether the record should exist or not
    required: False
    default: present
    choices: [ 'present', 'absent' ]
requirements:
  - 'nc-dnsapi >= 0.1.3'
author: 'Nicolai Buchwitz (@nbuchwitz)'
    
    MATRIX_IMP_ERR = None
try:
    from matrix_client.client import MatrixClient
except ImportError:
    MATRIX_IMP_ERR = traceback.format_exc()
    matrix_found = False
else:
    matrix_found = True
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        rc, sebool = semanage.semanage_bool_query(handle, boolkey)
    if rc < 0:
        semanage.semanage_handle_destroy(handle)
        module.fail_json(msg='Failed to query boolean in persistent policy')
    
        def test_logging_off(self):
        set_module_args({
            'logging': 'off',
            '_ansible_check_mode': True
        })
    
                try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
    current_path = os.path.dirname(os.path.abspath(__file__))
    
    
@section Exceptions
    
            What can follow that specific nested ref to atom?  Exactly ')'
        as you can see by looking at the derivation of this specific
        input.  Contrast this with the FOLLOW(atom)={'+',')',';','.'}.
    
        def consume(self):
        raise NotImplementedError
    
    
            if MSG_BODY_MESSAGE_TARGET in ddb_new_image.get('data', {}):
            forwarding_target = ddb_new_image['data'][MSG_BODY_MESSAGE_TARGET]
            target_name = forwarding_target.split(':')[-1]
            if forwarding_target.startswith('kinesis:'):
                ddb_new_image['data'][MSG_BODY_MESSAGE_TARGET] = 's3:/test_chain_result'
                kinesis_record['Data'] = json.dumps(ddb_new_image['data'])
                forward_event_to_target_stream(kinesis_record, target_name)
            elif forwarding_target.startswith('s3:'):
                s3_client = aws_stack.connect_to_service('s3')
                test_data = to_bytes(json.dumps({'test_data': ddb_new_image['data']['test_data']}))
                s3_client.upload_fileobj(BytesIO(test_data), TEST_BUCKET_NAME, target_name)
        else:
            raw_event_messages.append(kinesis_record)
    
            def forward_request(self, method, path, data, headers):
            sleep_time = int(path.replace('/', ''))
            time.sleep(sleep_time)
            response = Response()
            response.status_code = 200
            response._content = ('%s' % sleep_time) * file_length
            return response
    
    TEST_BUCKET_NAME_WITH_NOTIFICATIONS = 'test_bucket_notif_1'
TEST_QUEUE_NAME_FOR_S3 = 'test_queue'
TEST_TOPIC_NAME = 'test_topic_name_for_sqs'
TEST_S3_TOPIC_NAME = 'test_topic_name_for_s3_to_sns_to_sqs'
TEST_QUEUE_NAME_FOR_SNS = 'test_queue_for_sns'
    
        def test_delivery_stream_tags(self):
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME)
        self.assertEquals(TEST_TAGS, result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, exclusive_start_tag_key='MyTag')
        self.assertEquals([TEST_TAG_2], result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, limit=1)
        self.assertEquals([TEST_TAG_1], result['Tags'])
        self.assertEquals(True, result['HasMore'])

    
    
def cloudwatched(ns):
    ''' @cloudwatched(...) decorator for annotating methods to be monitored via CloudWatch '''
    def wrapping(func):
        def wrapped(*args, **kwargs):
            time_before = now_utc()
            try:
                result = func(*args, **kwargs)
                publish_result(ns, time_before, result, kwargs)
            except Exception as e:
                publish_error(ns, time_before, e, kwargs)
                raise e
            finally:
                # TODO
                # time_after = now_utc()
                pass
            return result
        return wrapped
    return wrapping
