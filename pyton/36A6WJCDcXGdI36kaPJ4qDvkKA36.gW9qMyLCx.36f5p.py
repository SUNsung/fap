
        
        (c) 2016, Aaron Christianson
http://github.com/ninjaaron/fast-entry_points
'''
from setuptools.command import easy_install
import re
TEMPLATE = '''\
# -*- coding: utf-8 -*-
# EASY-INSTALL-ENTRY-SCRIPT: '{3}','{4}','{5}'
__requires__ = '{3}'
import re
import sys
    
    
@pytest.fixture(autouse=True)
def no_cache(monkeypatch):
    monkeypatch.setattr('thefuck.utils.cache.disabled', True)
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
    
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
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
        for node in doctree.traverse(settingslist_node):
        settings_list = nodes.bullet_list()
        settings_list.extend([make_setting_element(d, app, fromdocname)
                              for d in sorted(env.scrapy_all_settings,
                                              key=itemgetter('setting_name'))
                              if fromdocname != d['docname']])
        node.replace_self(settings_list)
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
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
    
            spider_loader = self.crawler_process.spider_loader
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
    The status of the built html response will be, by default
- 200 in case of success
- 404 in case specified file was not found in the server (ftp code 550)
    
        def test_module(self):
        # Check that pydocfodder module can be described
        from test import pydocfodder
        doc = pydoc.render_doc(pydocfodder)
        self.assertIn('pydocfodder', doc)
    
        # Some tests need more than one block of uncompressed data. Since one block
    # is at least 100,000 bytes, we gather some data dynamically and compress it.
    # Note that this assumes that compression works correctly, so we cannot
    # simply use the bigger test data for all tests.
    test_size = 0
    BIG_TEXT = bytearray(128*1024)
    for fname in glob.glob(os.path.join(os.path.dirname(__file__), '*.py')):
        with open(fname, 'rb') as fh:
            test_size += fh.readinto(memoryview(BIG_TEXT)[test_size:])
        if test_size > 128*1024:
            break
    BIG_DATA = bz2.compress(BIG_TEXT, compresslevel=1)
    
        def persistent_load(self, pid):
        # This method is invoked whenever a persistent ID is encountered.
        # Here, pid is the tuple returned by DBPickler.
        cursor = self.connection.cursor()
        type_tag, key_id = pid
        if type_tag == 'MemoRecord':
            # Fetch the referenced record from the database and return it.
            cursor.execute('SELECT * FROM memos WHERE key=?', (str(key_id),))
            key, task = cursor.fetchone()
            return MemoRecord(key, task)
        else:
            # Always raises an error if you cannot return the correct object.
            # Otherwise, the unpickler will think None is the object referenced
            # by the persistent ID.
            raise pickle.UnpicklingError('unsupported persistent object')
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
    def adapt_point(point):
    return ('%f;%f' % (point.x, point.y)).encode('ascii')
    
      if 'word' in vim_data:
    completion_data[ 'insertion_text' ] = vim_data[ 'word' ]
  if 'abbr' in vim_data:
    completion_data[ 'menu_text' ] = vim_data[ 'abbr' ]
  if 'menu' in vim_data:
    completion_data[ 'extra_menu_info' ] = vim_data[ 'menu' ]
  if 'kind' in vim_data:
    completion_data[ 'kind' ] = [ vim_data[ 'kind' ] ]
  if 'info' in vim_data:
    completion_data[ 'detailed_info' ] = vim_data[ 'info' ]
    
    
def CommaSeparatedFiletypes_test():