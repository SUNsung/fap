
        
        
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    error_msg = None
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
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
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
        def add_user(self, user):  # ...
    def remove_user(self, user):  # ... 
    
    
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
        def remove_from_tail(self):
        ...
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
    Revision ID: 12d55656cbca
Revises: 55179c7f25c7
Create Date: 2015-12-14 13:37:17.374852
    
    '''
    
    
def downgrade():
    op.drop_column('table_columns', 'expression')

    
    
def downgrade():
  with op.batch_alter_table('tables') as batch_op:
    batch_op.drop_constraint('user_id', type_='foreignkey')
    batch_op.drop_column('user_id')

    
    
def downgrade():
    op.drop_column('tables', 'offset')
    op.drop_column('datasources', 'offset')

    
    Revision ID: 33d996bcc382
Revises: 41f6a59a61f2
Create Date: 2016-09-07 23:50:59.366779
    
    
def upgrade():
    op.add_column('dashboards', sa.Column('json_metadata', sa.Text(), nullable=True))
    
    '''
    
    Local worker thread:
- reads work ids from the 'Work Ids' queue and looks up the corresponding
  WorkItem from the 'Work Items' dict: if the work item has been cancelled then
  it is simply removed from the dict, otherwise it is repackaged as a
  _CallItem and put in the 'Call Q'. New _CallItems are put in the 'Call Q'
  until 'Call Q' is full. NOTE: the size of the 'Call Q' is kept small because
  calls placed in the 'Call Q' can no longer be cancelled with Future.cancel().
- reads _ResultItems from 'Result Q', updates the future stored in the
  'Work Items' dict and deletes the dict entry
    
    # If true, the index is split into individual pages for each letter.
#html_split_index = False
    
    def sequential():
    return list(map(is_prime, PRIMES))
    
      with MockArbitraryBuffer( 'javascript' ):
    with MockEventNotification( UnknownExtraConfResponse ):
    
        for completion in completions:
      word = utils.ToUnicode(
          ConvertCompletionDataToVimData( completion )[ 'word' ] )
      if reject_exact_match and word == completed_word:
        continue
      if word.startswith( completed_word ):
        return True
    return False
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    TIMEOUT_SECONDS = 0.1