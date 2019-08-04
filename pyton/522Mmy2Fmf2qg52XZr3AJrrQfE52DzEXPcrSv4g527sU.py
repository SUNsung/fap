
        
        
def double_redirect_view(request):
    'A view that redirects all requests to a redirection view'
    return HttpResponseRedirect('/permanent_redirect_view/')
    
    
class ConsigliereInline(admin.TabularInline):
    model = Consigliere
    
        def test_case_aggregate(self):
        agg = Sum(
            Case(When(friends__age=40, then=F('friends__age'))),
            filter=Q(friends__name__startswith='test'),
        )
        self.assertEqual(Author.objects.aggregate(age=agg)['age'], 80)
    
        def test_gin_parameters(self):
        index_name = 'integer_array_gin_params'
        index = GinIndex(fields=['field'], name=index_name, fastupdate=True, gin_pending_list_limit=64)
        with connection.schema_editor() as editor:
            editor.add_index(IntegerArrayModel, index)
        constraints = self.get_constraints(IntegerArrayModel._meta.db_table)
        self.assertEqual(constraints[index_name]['type'], 'gin')
        self.assertEqual(constraints[index_name]['options'], ['gin_pending_list_limit=64', 'fastupdate=on'])
        with connection.schema_editor() as editor:
            editor.remove_index(IntegerArrayModel, index)
        self.assertNotIn(index_name, self.get_constraints(IntegerArrayModel._meta.db_table))
    
    
class RunTestsExceptionHandlingTests(unittest.TestCase):
    def test_run_checks_raises(self):
        '''
        Teardown functions are run when run_checks() raises SystemCheckError.
        '''
        with mock.patch('django.test.runner.DiscoverRunner.setup_test_environment'), \
                mock.patch('django.test.runner.DiscoverRunner.setup_databases'), \
                mock.patch('django.test.runner.DiscoverRunner.build_suite'), \
                mock.patch('django.test.runner.DiscoverRunner.run_checks', side_effect=SystemCheckError), \
                mock.patch('django.test.runner.DiscoverRunner.teardown_databases') as teardown_databases, \
                mock.patch('django.test.runner.DiscoverRunner.teardown_test_environment') as teardown_test_environment:
            runner = DiscoverRunner(verbosity=0, interactive=False)
            with self.assertRaises(SystemCheckError):
                runner.run_tests(['test_runner_apps.sample.tests_sample.TestDjangoTestCase'])
            self.assertTrue(teardown_databases.called)
            self.assertTrue(teardown_test_environment.called)
    
    
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
            self._download_http = httpdownloadhandler(settings).download_request
    
            # XXX: Google parses at least first 100k bytes; scrapy's redirect
        # middleware parses first 4k. 4k turns out to be insufficient
        # for this middleware, and parsing 100k could be slow.
        # We use something in between (32K) by default.
        self.lookup_bytes = settings.getint('AJAXCRAWL_MAXSIZE', 32768)
    
        def __init__(self):
        self._formats = {
            'tar': self._is_tar,
            'zip': self._is_zip,
            'gz': self._is_gzip,
            'bz2': self._is_bzip2
        }
    
        def spider_opened(self, spider):
        self._timeout = getattr(spider, 'download_timeout', self._timeout)
    
    
def rand_center(data, k):
    '''随机采样 k 个样本作为聚类中心'''
    centers = np.array(random.sample(list(data), k))
    return centers
    
            a = permute(a, [0, 2, 1])  # [batch_size, n_step, n_input]
        o = tf.multiply(x, a)  # # [batch_size, n_step, n_input]
    
    
    
            y.shape == [128, 64, 32]
        y = permute(x, [2, 1, 0])
        y.shape == [32, 64, 128]