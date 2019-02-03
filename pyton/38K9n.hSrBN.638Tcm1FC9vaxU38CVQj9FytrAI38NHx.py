
        
                try:
            matching_groups = conn.describe_cache_subnet_groups(group_name, max_records=100)
            exists = len(matching_groups) > 0
        except BotoServerError as e:
            if e.error_code != 'CacheSubnetGroupNotFoundFault':
                module.fail_json(msg=e.error_message)
    
            # return
        self.exit()
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
                update_roles(schema_facts, cursor, schema,
                         schema_facts[schema_key]['usage_roles'], usage_roles,
                         schema_facts[schema_key]['create_roles'], create_roles)
            changed = True
        if changed:
            schema_facts.update(get_schema_facts(cursor, schema))
        return changed
    
    
DOCUMENTATION = '''
---
module: ipa_dnszone
author: Fran Fitzpatrick (@fxfitz)
short_description: Manage FreeIPA DNS Zones
description:
- Add and delete an IPA DNS Zones using IPA API
options:
  zone_name:
    description:
    - The DNS zone name to which needs to be managed.
    required: true
  state:
    description: State to ensure
    required: false
    default: present
    choices: ['present', 'absent']
extends_documentation_fragment: ipa.documentation
version_added: '2.5'
'''
    
    '''
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
            sfile = sys.modules[spidercls.__module__].__file__
        sfile = sfile.replace('.pyc', '.py')
        self.exitcode = os.system('%s '%s'' % (editor, sfile))

    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def __init__(self, crawler, spider_closed_callback):
        self.crawler = crawler
        self.settings = crawler.settings
        self.signals = crawler.signals
        self.logformatter = crawler.logformatter
        self.slot = None
        self.spider = None
        self.running = False
        self.paused = False
        self.scheduler_cls = load_object(self.settings['SCHEDULER'])
        downloader_cls = load_object(self.settings['DOWNLOADER'])
        self.downloader = downloader_cls(crawler)
        self.scraper = Scraper(crawler)
        self._spider_closed_callback = spider_closed_callback
    
    
def test_1():
    for o in [None, True, False, 0, 1, (1 << 6), (1 << 7) - 1, -1,
              -((1 << 5) - 1), -(1 << 5)]:
        check(1, o)
    
    url = pr['url']
title = pr['title']
body = pr['body']
target_ref = pr['base']['ref']
user_login = pr['user']['login']
base_ref = pr['head']['ref']
pr_repo_desc = '%s/%s' % (user_login, base_ref)
    
        clipboard_types = {'osx': init_osx_clipboard,
                       'gtk': init_gtk_clipboard,
                       'qt': init_qt_clipboard,
                       'xclip': init_xclip_clipboard,
                       'xsel': init_xsel_clipboard,
                       'klipper': init_klipper_clipboard,
                       'windows': init_windows_clipboard,
                       'no': init_no_clipboard}
    
            exp = pd.Index([pd.Timestamp('2011-01-01 09:00', tz=tz),
                        pd.Timestamp('2011-01-01 10:00'),
                        pd.Timestamp('2011-01-01 11:00', tz=tz)],
                       dtype=object)
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00')), exp)
    
            with pd.option_context('display.width', 300):
            for idx, expected in zip([idx1, idx2, idx3, idx4, idx5],
                                     [exp1, exp2, exp3, exp4, exp5]):
                result = repr(pd.Series(idx))
                assert result == expected
    
        def __call__(self, text, **kargs):
        words = jieba.tokenize(text, mode='search')
        token = Token()
        for (w, start_pos, stop_pos) in words:
            if not accepted_chars.match(w) and len(w) <= 1:
                continue
            token.original = token.text = w
            token.pos = start_pos
            token.startchar = start_pos
            token.endchar = stop_pos
            yield token
    
        def __init__(self):
        self.graph = defaultdict(list)
    
        route = [None] * len(obs)
    i = len(obs) - 1
    while i >= 0:
        route[i] = state
        state = mem_path[i][state]
        i -= 1
    return (prob, route)

    
    USAGE = 'usage:    python extract_tags.py [file name] -k [top k]'
    
    n_topic = 10
n_top_words = 25
    
    print(','.join(tags))
    
    print('speed %s bytes/second' % (len(content)/tm_cost))
    
    
    
        # set basic CLI commands
    config.CLI_COMMANDS['infra'] = {
        'description': 'Commands to manage the infrastructure',
        'function': cmd_infra
    }
    config.CLI_COMMANDS['start'] = {
        'description': 'Shorthand to start the infrastructure',
        'function': cmd_infra
    }
    config.CLI_COMMANDS['web'] = {
        'description': 'Commands to manage the Web dashboard',
        'function': cmd_web
    }
    
    # set up logger
LOGGER = logging.getLogger(__name__)
    
    
def test_environment():
    env = aws_stack.Environment.from_json({'prefix': 'foobar1'})
    assert env.prefix == 'foobar1'
    env = aws_stack.Environment.from_string('foobar2')
    assert env.prefix == 'foobar2'
    
        def test_get_container_name(self):
        executor = lambda_executors.EXECUTOR_CONTAINERS_REUSE
        name = executor.get_container_name('arn:aws:lambda:us-east-1:00000000:function:my_function_name')
        self.assertEqual(name, 'localstack_lambda_arn_aws_lambda_us-east-1_00000000_function_my_function_name')