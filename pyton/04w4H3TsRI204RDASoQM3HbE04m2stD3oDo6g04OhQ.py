
        
        
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
            s = pickle.loads(pickle.dumps(s))
        s.proxies = getproxies()
    
        print('Loading [World Bank's Health Nutrition and Population Stats]')
    data.load_world_bank_health_n_pop()
    
        @property
    def groupby_column_names(self):
        return sorted([c.column_name for c in self.columns if c.groupby])
    
        @classmethod
    def query_datasources_by_permissions(cls, session, database, permissions):
        datasource_class = ConnectorRegistry.sources[database.type]
        return (
            session.query(datasource_class)
            .filter_by(database_id=database.id)
            .filter(datasource_class.perm.in_(permissions))
            .all()
        )
    
    appbuilder.add_link(
    'Scan New Datasources',
    label=__('Scan New Datasources'),
    href='/druid/scan_new_datasources/',
    category='Sources',
    category_label=__('Sources'),
    category_icon='fa-database',
    icon='fa-refresh')
appbuilder.add_link(
    'Refresh Druid Metadata',
    label=__('Refresh Druid Metadata'),
    href='/druid/refresh_datasources/',
    category='Sources',
    category_label=__('Sources'),
    category_icon='fa-database',
    icon='fa-cog')
    
    naming_convention = {
    'fk': 'fk_%(table_name)s_%(column_0_name)s_%(referred_table_name)s',
}
    
    
def upgrade():
    op.add_column('metrics', sa.Column('warning_text', sa.Text(), nullable=True))
    op.add_column('sql_metrics', sa.Column('warning_text', sa.Text(), nullable=True))
    
        forbidden_extensions = ['html', 'htm'] if results.nohtml else []
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        @gen.coroutine
    def resolve(self, host, port, family=0):
        if is_valid_ip(host):
            addresses = [host]
        else:
            # gethostbyname doesn't take callback as a kwarg
            self.channel.gethostbyname(host, family, (yield gen.Callback(1)))
            callback_args = yield gen.Wait(1)
            assert isinstance(callback_args, gen.Arguments)
            assert not callback_args.kwargs
            result, error = callback_args.args
            if error:
                raise IOError('C-Ares returned error %s: %s while resolving %s' %
                              (error, pycares.errno.strerror(error), host))
            addresses = result.addresses
        addrinfo = []
        for address in addresses:
            if '.' in address:
                address_family = socket.AF_INET
            elif ':' in address:
                address_family = socket.AF_INET6
            else:
                address_family = socket.AF_UNSPEC
            if family != socket.AF_UNSPEC and family != address_family:
                raise IOError('Requested socket family %d but got %d' %
                              (family, address_family))
            addrinfo.append((address_family, (address, port)))
        raise gen.Return(addrinfo)

    
    
MAIN = '''\
import os
import sys
    
        def test_failed_setup(self):
        self.http_client = self.create_client(max_clients=1)
        for i in range(5):
            response = self.fetch(u'/ユニコード')
            self.assertIsNot(response.error, None)

    
    # Increasing --n without --keepalive will eventually run into problems
# due to TIME_WAIT sockets
define('n', type=int, default=15000)
define('c', type=int, default=25)
define('keepalive', type=bool, default=False)
define('quiet', type=bool, default=False)
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()