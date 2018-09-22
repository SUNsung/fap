
        
        
@pytest.fixture(autouse=True)
def usage_tracker_io(usage_tracker):
    io = StringIO()
    usage_tracker.return_value \
                 .open.return_value \
                 .__enter__.return_value = io
    return io
    
    
init_bashrc = u'''echo '
export SHELL=/bin/bash
export PS1='$ '
echo > $HISTFILE
eval $(thefuck --alias {})
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.bashrc'''
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
        def find_condition_in_rules(self, condition_set_id):
        rules_in_use = []
        try:
            all_rules = list_rules_with_backoff(self.client)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Could not list rules')
        for rule in all_rules:
            try:
                rule_details = get_rule_with_backoff(self.client, rule['RuleId'])
            except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
                self.module.fail_json_aws(e, msg='Could not get rule details')
            if condition_set_id in [predicate['DataId'] for predicate in rule_details['Predicates']]:
                rules_in_use.append(rule_details['Name'])
        return rules_in_use
    
    import traceback
from ansible.module_utils._text import to_native
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO3, camel_dict_to_snake_dict, boto3_conn, ec2_argument_spec, get_aws_connection_info
    
    # Delete pipeline
- data_pipeline:
    name: test-dp
    region: us-west-2
    state: absent
    
            if len(interfaces) == 1:
            return interfaces[0]
    
            for attr in ('alarm_actions', 'insufficient_data_actions', 'ok_actions'):
            action = module.params.get(attr) or []
            # Boto and/or ansible may provide same elements in lists but in different order.
            # Compare on sets since they do not need any order.
            if set(getattr(alarm, attr)) != set(action):
                changed = True
                setattr(alarm, attr, module.params.get(attr))
    
        connection = boto3_conn(module,
                            resource='ec2', conn_type='client',
                            region=region, endpoint=ec2_url, **aws_connect_params)
    
    '''
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
        if '_text' in dictified['video'][0]['size'][0]:  #size exists for 1 piece
        video_dict['size'] = sum([int(i['size'][0]['_text']) for i in dictified['video']])
    
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
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
            stdout, _, result = stdout.strip().rpartition('\n')
        if not result:
            self.output.put((None, None, None, None))
            return True
    
    This module provides regular expression matching operations similar to
those found in Perl.  It supports both 8-bit and Unicode strings; both
the pattern and the strings being processed can contain null bytes and
characters outside the US ASCII range.
    
        code.append(SUCCESS)
    
    
# Split a path in root and extension.
# The extension is everything starting at the last dot in the last
# pathname component; the root is everything before that.
# It is always true that root + ext == p.
    
    
def splitext(p):
    if isinstance(p, bytes):
        return genericpath._splitext(p, b':', altsep, b'.')
    else:
        return genericpath._splitext(p, sep, altsep, extsep)
splitext.__doc__ = genericpath._splitext.__doc__
    
        @classmethod
    def cwd(cls):
        '''Return a new path pointing to the current working directory
        (as returned by os.getcwd()).
        '''
        return cls(os.getcwd())
    
      # Remove old YCM libs if present so that YCM can start.
  old_libs = (
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_core.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_client_support.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*clang*.*') ) )
  for lib in old_libs:
    os.remove( lib )
    
      if left_string == right_string:
    return min( left_string_length, right_string_length )
    
    
def _HandlePollResponse( response, diagnostics_handler ):
  if isinstance( response, list ):
    for notification in response:
      if 'message' in notification:
        PostVimMessage( notification[ 'message' ],
                        warning = False,
                        truncate = True )
      elif 'diagnostics' in notification:
        diagnostics_handler.UpdateWithNewDiagnosticsForFile(
          notification[ 'filepath' ],
          notification[ 'diagnostics' ] )
  elif response is False:
    # Don't keep polling for this file
    return False
  # else any truthy response means 'nothing to see here; poll again in a
  # while'
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
      def _Check( self, completion_id, completion_data, expected_vim_data ):
    vim_data = completion_request._ConvertCompletionDataToVimData(
        completion_id,
        completion_data )
    
    
@YouCompleteMeInstance()
# Select the second item of the list which is the ycmd stderr logfile.
@patch( 'ycm.vimsupport.SelectFromList', return_value = 1 )
@patch( 'ycm.vimsupport.OpenFilename', new_callable = ExtendedMock )
def YouCompleteMe_ToggleLogs_WithoutParameters_SelectLogfileNotAlreadyOpen_test(
  ycm, open_filename, *args ):
    
    
class Action(object):
    def __init__(self, name):
        self.name = name
    
        # commands are just pushed into the command stack
    command_stack.append(MoveFileCommand('foo.txt', 'bar.txt'))
    command_stack.append(MoveFileCommand('bar.txt', 'baz.txt'))
    
    
class DB:
    def __init__(self):
        self._tm = None
    
            return transaction
    
    
class StrategyExample:
    def __init__(self, func=None):
        self.name = 'Strategy Example 0'
        if func is not None:
            self.execute = types.MethodType(func, self)
    
    In Java and other languages, the Abstract Factory Pattern serves to provide an interface for
creating related/dependent objects without need to specify their
actual class.
    
        def build_size(self):
        self.size = 'Small'
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        '''Graph search emulation in python, from source
    http://www.python.org/doc/essays/graphs/'''