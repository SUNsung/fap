
        
            def test_yahoo_https(self):
        # https://github.com/rg3/youtube-dl/issues/2701
        self.assertMatch(
            'https://screen.yahoo.com/smartwatches-latest-wearable-gadgets-163745379-cbs.html',
            ['Yahoo'])
    
    IGNORED_FILES = [
    'setup.py',  # http://bugs.python.org/issue13943
    'conf.py',
    'buildserver.py',
]
    
            page = self._download_json(
            'http://vxml.56.com/json/%s/' % text_id, text_id, 'Downloading video info')
    
    
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
        def test_select_if(self):
        query = '''
            SELECT IF(CARDINALITY(my_array) >= 3, my_array[3], NULL)
            FROM t1 LIMIT 10
        '''
        self.assertEquals({'t1'}, self.extract_tables(query))
    
    
@manager.option(
    '-p', '--port',
    default='5555',
    help=('Port on which to start the Flower process'))
@manager.option(
    '-a', '--address',
    default='localhost',
    help=('Address on which to run the service'))
def flower(port, address):
    '''Runs a Celery Flower web server
    
            if flash_message:
            flash(_(
                'The table was created. '
                'As part of this two phase configuration '
                'process, you should now click the edit button by '
                'the new table to configure it.'), 'info')
    
    
def find_constraint_name(upgrade=True):
    cols = {'column_name'} if upgrade else {'datasource_name'}
    return generic_find_constraint_name(
        table='columns', columns=cols, referenced='datasources', db=db)
    
    def upgrade():
    op.add_column('dashboards', sa.Column('slug', sa.String(length=255), nullable=True))
    try:
        op.create_unique_constraint('idx_unique_slug', 'dashboards', ['slug'])
    except:
        pass
    
        #Required strings to create intermediate HTML files
    header = '<html><head><link rel=stylesheet type=text/css href=' + colorscheme + '.css></head><body>\n'
    footer = '</body></html>'
    title_content = '<h1 class=titlemain>tldr pages</h1><h4 class=titlesub>Simplified and community driven man pages</h4></body></html>'