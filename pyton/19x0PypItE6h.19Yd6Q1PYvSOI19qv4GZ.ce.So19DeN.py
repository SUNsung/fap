
        
        
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'git help')
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
misspelled_command = '''\
usage: aws [options] <command> <subcommand> [<subcommand> ...] [parameters]
To see help text, you can run:
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
    \tDid you mean `build`?
'''
    
        def __init__(self):
        self.name = 'hstore'
    
    
@deconstructible
class KeysValidator:
    '''A validator designed for HStore to require/restrict keys.'''
    
        def load(self):
        try:
            data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            data = None
    
        def create_model_instance(self, data):
        '''
        Return a new instance of the session model object, which represents the
        current session state. Intended to be used for saving the session data
        to the database.
        '''
        return self.model(
            session_key=self._get_or_create_session_key(),
            session_data=self.encode(data),
            expire_date=self.get_expiry_date(),
        )
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        if twisted_version < (17, 0, 0):
        from twisted.internet._sslverify import _maybeSetHostNameIndication
        set_tlsext_host_name = _maybeSetHostNameIndication
    else:
        def set_tlsext_host_name(connection, hostNameBytes):
            connection.set_tlsext_host_name(hostNameBytes)
    
    
def get_line_value(r, n):
    rls = r.split('\r\n')
    if len(rls) < n + 1:
        return None
    
                msg = 'missing %s at %s' % (
                tokenName, self.getTokenErrorDisplay(e.token)
                )
    
        # Used for issues that may render the system inoperable or have effects on
    # data integrity (e.g. issues in the processing pipeline.)
    SEVERITY_CRITICAL = 'critical'
    
    
class CeleryAliveCheck(StatusCheck):
    def check(self):
        # There is no queue, and celery is not running, so never show error
        if settings.CELERY_ALWAYS_EAGER:
            return []
        last_ping = options.get('sentry:last_worker_ping') or 0
        if last_ping >= time() - 300:
            return []
    
        This is currenlty only used for ``in_next_release`` resolutions.
    '''
    try:
        release = Release.objects.get_from_cache(
            id=release_id,
        )
    except Release.DoesNotExist:
        return
    
            for platform, project_id in queryset:
            platform = platform.lower()
            if platform not in VALID_PLATFORMS:
                continue
            ProjectPlatform.objects.create_or_update(
                project_id=project_id,
                platform=platform,
                values={
                    'last_seen': now,
                },
            )
        min_project_id += step
    
        STOP_WORDS = set((
        'the', 'of', 'is', 'and', 'to', 'in', 'that', 'we', 'for', 'an', 'are',
        'by', 'be', 'as', 'on', 'with', 'can', 'if', 'from', 'which', 'you', 'it',
        'this', 'then', 'at', 'have', 'all', 'not', 'one', 'has', 'or', 'that'
    ))
    
    
def add_force_split(word):
    global Force_Split_Words
    Force_Split_Words.add(word)
    
    
def get_top_states(t_state_v, K=4):
    return sorted(t_state_v, key=t_state_v.__getitem__, reverse=True)[:K]
    
    USAGE = 'usage:    python extract_tags.py [file name] -k [top k]'
    
    print('transform')
counts = count_vect.fit_transform(docs)
tfidf = TfidfTransformer().fit_transform(counts)
print(tfidf.shape)
    
    import jieba
jieba.enable_parallel(4)
import jieba.analyse
from optparse import OptionParser
    
            print('Success: test_selection_sort\n')
    
    		elif current.rightChild is None:
			if current is self.root:
				self.root = current.rightChild
			elif isLeft:
				parent.lChild = current.rightChild
			else:
				parent.rightChild = current.rightChild