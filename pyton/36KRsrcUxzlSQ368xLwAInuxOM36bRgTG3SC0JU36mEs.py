
        
        # TODO: run all these tests in session mode as well
    
    https://github.com/Homebrew/homebrew-core/blob/master/Formula/httpie.rb
    
        @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
    
def test_unicode_url_query_arg_item_verbose(httpbin):
    r = http('--verbose', httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
                    self._status_line = PROGRESS.format(
                    percentage=percentage,
                    downloaded=humanize_bytes(downloaded),
                    speed=humanize_bytes(speed),
                    eta=eta,
                )
    
        This processor that applies syntax highlighting to the headers,
    and also to the body if its content type is recognized.
    
        def test_verify_custom_ca_bundle_invalid_path(self, httpbin_secure):
        # since 2.14.0 requests raises IOError
        with pytest.raises((SSLError, IOError)):
            http(httpbin_secure.url + '/get', '--verify', '/__not_found__')
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
        
        When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
    from alembic import op
import sqlalchemy as sa
    
    '''
    
    
def downgrade():
    op.drop_table('logs')

    
        # set up the templating system
    config['pylons.app_globals'].mako_lookup = TemplateLookup(
        directories=paths['templates'],
        error_handler=handle_mako_error,
        module_directory=module_directory,
        input_encoding='utf-8',
        default_filters=['conditional_websafe'],
        filesystem_checks=getattr(g, 'reload_templates', False),
        imports=[
            'from r2.lib.filters import websafe, unsafe, conditional_websafe',
            'from pylons import request',
            'from pylons import tmpl_context as c',
            'from pylons import app_globals as g',
            'from pylons.i18n import _, ungettext',
        ],
        modulename_callable=mako_module_path,
    )
    
                    if is_api:
                    return _wsgi_json(start_response, 413, error_msg)
                else:
                    start_response('413 Too Big', [])
                    return ['<html>'
                            '<head>'
                            '<script type='text/javascript'>'
                            'parent.completedUploadImage('failed','
                            ''','
                            ''','
                            '[['BAD_CSS_NAME', ''], ['IMAGE_ERROR', '', error_msg,'']],'
                            ''');'
                            '</script></head><body>you shouldn\'t be here</body></html>']
    
    class EmbedController(RedditController):
    allow_stylesheets = True
    
        def send429(self):
        retry_after = request.environ.get('retry_after')
        if retry_after:
            response.headers['Retry-After'] = str(retry_after)
            template_name = '/ratelimit_toofast.html'
        else:
            template_name = '/ratelimit_throttled.html'
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()
    
        click_count += 1
    if click_count > 1:
        click_count = 0
        cor1 = cor.pop()
        cor2 = cor.pop()