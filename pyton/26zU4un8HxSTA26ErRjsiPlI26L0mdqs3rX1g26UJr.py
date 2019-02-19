
        
                (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
    from enum import Enum
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
    
class Graph(object):
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
        item = nodes.list_item()
    item += p
    return item
    
        scrapy runspider qpsclient.py --loglevel=INFO --set RANDOMIZE_DOWNLOAD_DELAY=0 --set CONCURRENT_REQUESTS=50 -a qps=10 -a latency=0.3
    
    from six.moves.urllib.parse import urlencode
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
        requires_project = False
    default_settings = {'SPIDER_LOADER_WARN_ONLY': True}
    
        def download_request(self, request, spider):
        p = urlparse_cached(request)
        scheme = 'https' if request.meta.get('is_secure') else 'http'
        bucket = p.hostname
        path = p.path + '?' + p.query if p.query else p.path
        url = '%s://%s.s3.amazonaws.com%s' % (scheme, bucket, path)
        if self.anon:
            request = request.replace(url=url)
        elif self._signer is not None:
            import botocore.awsrequest
            awsrequest = botocore.awsrequest.AWSRequest(
                method=request.method,
                url='%s://s3.amazonaws.com/%s%s' % (scheme, bucket, path),
                headers=request.headers.to_unicode_dict(),
                data=request.body)
            self._signer.add_auth(awsrequest)
            request = request.replace(
                url=url, headers=awsrequest.headers.items())
        else:
            signed_headers = self.conn.make_request(
                    method=request.method,
                    bucket=bucket,
                    key=unquote(p.path),
                    query_args=unquote(p.query),
                    headers=request.headers,
                    data=request.body)
            request = request.replace(url=url, headers=signed_headers)
        return self._download_http(request, spider)
