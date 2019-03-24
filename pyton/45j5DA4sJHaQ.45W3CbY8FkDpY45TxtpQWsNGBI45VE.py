
        
            if state == 'present':
        if not all((replication_id, cluster_id)):
            module.fail_json(msg='The state 'present' requires options: 'replication_id' and 'cluster_id'')
        response, changed = create(module, connection, replication_id, cluster_id, name)
    elif state == 'absent':
        response, changed = delete(module, connection, name)
    elif state == 'copy':
        if not all((target, bucket)):
            module.fail_json(msg='The state 'copy' requires options: 'target' and 'bucket'.')
        response, changed = copy(module, connection, name, target, bucket)
    
            # If feature is already in good state, just exit
        if (re.search('Disabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'absent') or \
                (re.search('Enabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'present'):
            self.module.exit_json(changed=False)
    
    
DOCUMENTATION = '''
---
module: monit
short_description: Manage the state of a program monitored via Monit
description:
     - Manage the state of a program monitored via I(Monit)
version_added: '1.2'
options:
  name:
    description:
      - The name of the I(monit) program/process to manage
    required: true
  state:
    description:
      - The state of service
    required: true
    choices: [ 'present', 'started', 'stopped', 'restarted', 'monitored', 'unmonitored', 'reloaded' ]
  timeout:
    description:
      - If there are pending actions for the service monitored by monit, then Ansible will check
        for up to this many seconds to verify the requested action has been performed.
        Ansible will sleep for five seconds between each check.
    default: 300
    version_added: '2.1'
author: 'Darryl Stoflet (@dstoflet)'
'''
    
        def add_options(self, parser):
        '''
        Populate option parse with options available for this command
        '''
        group = OptionGroup(parser, 'Global Options')
        group.add_option('--logfile', metavar='FILE',
            help='log file. if omitted stderr will be used')
        group.add_option('-L', '--loglevel', metavar='LEVEL', default=None,
            help='log level (default: %s)' % self.settings['LOG_LEVEL'])
        group.add_option('--nolog', action='store_true',
            help='disable logging completely')
        group.add_option('--profile', metavar='FILE', default=None,
            help='write python cProfile stats to FILE')
        group.add_option('--pidfile', metavar='FILE',
            help='write process ID to FILE')
        group.add_option('-s', '--set', action='append', default=[], metavar='NAME=VALUE',
            help='set/override setting (may be repeated)')
        group.add_option('--pdb', action='store_true', help='enable pdb on failure')
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def process_spider_arguments(self, opts):
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
        filename = args[0]
        if not os.path.exists(filename):
            raise UsageError('File not found: %s\n' % filename)
        try:
            module = _import_file(filename)
        except (ImportError, ValueError) as e:
            raise UsageError('Unable to load %r: %s\n' % (filename, e))
        spclasses = list(iter_spider_classes(module))
        if not spclasses:
            raise UsageError('No spider found in file: %s\n' % filename)
        spidercls = spclasses.pop()
    
    
def test_array32():
    check_array(5, (1 << 16))
    
    
def check(src, should, use_list=0):
    assert unpackb(src, use_list=use_list) == should
    
        MARGIN_RATIOS = UNIT_RATIOS.copy()
    MARGIN_RATIOS.update({
        'none': ('pt', 0),
    })
    
    from pandas.io.msgpack.exceptions import *  # noqa
from pandas.io.msgpack._version import version  # noqa
    
        result = s[lambda x: [True, False, True, True]]
    tm.assert_series_equal(result, s.iloc[[0, 2, 3]])
    
    
def dedent(content):
    '''
    Remove leading indent from a block of text.
    Used when generating descriptions from docstrings.
    
    from django.http.multipartparser import parse_header
from django.utils.encoding import python_2_unicode_compatible
    
            assert serializer['text'].value == 'x' * 1000
        assert serializer['text'].errors == ['Ensure this field has no more than 100 characters.']
        assert serializer['text'].name == 'text'
        assert serializer['amount'].value is 123
        assert serializer['amount'].errors is None
        assert serializer['amount'].name == 'amount'
    
            parser.add_argument(
            '-r',
            '--reset',
            action='store_true',
            dest='reset_token',
            default=False,
            help='Reset existing User token and create a new one',
        )
    
    
def get_docs_view(
        title=None, description=None, schema_url=None, public=True,
        patterns=None, generator_class=SchemaGenerator,
        authentication_classes=api_settings.DEFAULT_AUTHENTICATION_CLASSES,
        permission_classes=api_settings.DEFAULT_PERMISSION_CLASSES,
        renderer_classes=None):
    
            Eg. {'name': [{'message': 'This field is required.', 'code': 'required'}]}
        '''
        return _get_full_details(self.detail)
    
    
class GenericAPIView(views.APIView):
    '''
    Base class for all other generic views.
    '''
    # You'll need to either set these attributes,
    # or override `get_queryset()`/`get_serializer_class()`.
    # If you are overriding a view method, it is important that you call
    # `get_queryset()` instead of accessing the `queryset` property directly,
    # as `queryset` will get evaluated only once, and those results are cached
    # for all subsequent requests.
    queryset = None
    serializer_class = None
    
    		:param str cfg_type:
			Type of the loaded configuration files (e.g. ``colorscheme``, 
			``theme``).
		:param list levels:
			Configuration names resembling levels in hierarchy, sorted by 
			priority. Configuration file names with higher priority should go 
			last.
		:param set ignore_levels:
			If only files listed in this variable are present then configuration 
			file is considered not loaded: at least one file on the level not 
			listed in this variable must be present.
		'''
		config = {}
		loaded = 0
		exceptions = []
		for i, cfg_path in enumerate(levels):
			try:
				lvl_config = self.load_config(cfg_path, cfg_type)
			except IOError as e:
				if sys.version_info < (3,):
					tb = sys.exc_info()[2]
					exceptions.append((e, tb))
				else:
					exceptions.append(e)
			else:
				if i not in ignore_levels:
					loaded += 1
				mergedicts(config, lvl_config)
		if not loaded:
			for exception in exceptions:
				if type(exception) is tuple:
					e = exception[0]
				else:
					e = exception
				self.exception('Failed to load %s: {0}' % cfg_type, e, exception=exception)
			raise e
		return config
    
    
def uses(pl, args):
	component = args.component
	if not component:
		raise ValueError('Must specify component')
	shell = args.shell
	template = 'POWERLINE_NO_{shell}_{component}'
	for sh in (shell, 'shell') if shell else ('shell'):
		varname = template.format(shell=sh.upper(), component=component.upper())
		if os.environ.get(varname):
			sys.exit(1)
	config = get_main_config(args)
	if component in config.get('ext', {}).get('shell', {}).get('components', ('tmux', 'prompt')):
		sys.exit(0)
	else:
		sys.exit(1)

    
    
class PowerlinePromptOut(PowerlinePrompt):
	powerline_prompt_type = 'out'
	powerline_is_prompt = False
    
    
def get_tmux_version(pl):
	version_string = get_tmux_output(pl, '-V')
	_, version_string = version_string.split(' ')
	version_string = version_string.strip()
	if version_string == 'master':
		return TmuxVersionInfo(float('inf'), 0, version_string)
	major, minor = version_string.split('.')
	suffix = DIGITS.subn('', minor)[0] or None
	minor = NON_DIGITS.subn('', minor)[0]
	return TmuxVersionInfo(int(major), int(minor), suffix)

    
    	:param conn:
		Connection returned by :py:func:`get_i3_connection`.
	:param str event:
		Event to subscribe to, e.g. ``'workspace'``.
	:param func callback:
		Function to run on event.
	'''
	try:
		import i3ipc
	except ImportError:
		import i3
		conn.Subscription(callback, event)
		return
	else:
		pass
    
    	def get_local_themes(self, local_themes):
		return dict(((type, {'config': self.load_theme_config(name)}) for type, name in local_themes.items()))