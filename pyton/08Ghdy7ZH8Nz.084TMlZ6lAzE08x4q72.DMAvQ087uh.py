
        
        
class User(object):
    
        def current_year_month(self):
        '''Return the current year and month.'''
        ...
    
        def mapper_sort(self, key, value):
        '''Construct key to ensure proper sorting.
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
            if not username:
            error = 'Username is required.'
        elif not password:
            error = 'Password is required.'
        elif (
            db.execute('SELECT id FROM user WHERE username = ?', (username,)).fetchone()
            is not None
        ):
            error = 'User {0} is already registered.'.format(username)
    
    
def test_init_db_command(runner, monkeypatch):
    class Recorder(object):
        called = False
    
    from flask import has_request_context
from flask import url_for
    
    # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
    
class Command(ScrapyCommand):
    
        DEFAULT_CIPHERS = AcceptableCiphers.fromOpenSSLCipherString('DEFAULT')

    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
        @staticmethod
    def import_linux_firefox_ca(common_name, ca_file):
        xlog.debug('Begin importing CA to Firefox')
        firefox_config_path = CertUtil.get_linux_firefox_path()
        if not firefox_config_path:
            #xlog.debug('Not found Firefox path')
            return False
    
    
    def rewind(self, marker=None):
        '''
        Reset the stream so that next call to index would return marker.
        The marker will usually be index() but it doesn't have to be.  It's
        just a marker to indicate what state the stream was in.  This is
        essentially calling release() and seek().  If there are markers
        created after this marker argument, this routine must unroll them
        like a stack.  Assume the state the stream was in when this marker
        was created.
    
        def test_untag_resource(self):
        response = testutil.send_dynamodb_request('', action='UntagResource', request_body=json.dumps({
            'ResourceArn': testutil.get_sample_arn('dynamodb', 'table'),
            'TagKeys': ['tagkey1', 'tagkey2']  # Keys to untag
        }))
        assert response.status_code == 200
        assert not response._content  # Empty string if untagging succeeded (mocked for now)
    
    
def get_kcl_dir():
    return get_dir_of_file(kcl.__file__)
    
        # create ES domain
    es_client.create_elasticsearch_domain(DomainName=TEST_DOMAIN_NAME)
    assert_true(TEST_DOMAIN_NAME in
        [d['DomainName'] for d in es_client.list_domain_names()['DomainNames']])
    
        cmd = 'list-event-source-mappings'
    if func_name:
        cmd = '%s --function-name %s' % (cmd, func_name)
    out = cmd_lambda(cmd, env=env)
    out = json.loads(out)
    result = out['EventSourceMappings']
    return result
    
    
def get_rest_api_paths(rest_api_id):
    apigateway = aws_stack.connect_to_service(service_name='apigateway')
    resources = apigateway.get_resources(restApiId=rest_api_id, limit=100)
    resource_map = {}
    for resource in resources['items']:
        path = aws_stack.get_apigateway_path_for_resource(rest_api_id, resource['id'])
        resource_map[path] = resource
    return resource_map
    
    
class BigfilePiecefieldPacked(object):
    __slots__ = ['data']
    
            # Load all include files data into a merged set
        for include_path in self.file_content['includes']:
            address, inner_path = include_path.split('/', 1)
            try:
                content = self.site_manager.get(address).storage.loadJson(inner_path)
            except Exception as err:
                self.log.warning(
                    'Error loading include %s: %s' %
                    (include_path, Debug.formatException(err))
                )
                continue
    
    
def open_database(database, mode=MODE_AUTO):
    '''Open a Maxmind DB database
    
        int_from_byte = lambda x: x