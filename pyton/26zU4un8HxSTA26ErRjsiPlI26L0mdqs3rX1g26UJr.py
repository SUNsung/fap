
        
        
class _BenchServer(object):
    
            path = self._schemes[scheme]
        try:
            dhcls = load_object(path)
            dh = dhcls(self._crawler.settings)
        except NotConfigured as ex:
            self._notconfigured[scheme] = str(ex)
            return None
        except Exception as ex:
            logger.error('Loading '%(clspath)s' for scheme '%(scheme)s'',
                         {'clspath': path, 'scheme': scheme},
                         exc_info=True,  extra={'crawler': self._crawler})
            self._notconfigured[scheme] = str(ex)
            return None
        else:
            self._handlers[scheme] = dh
        return self._handlers[scheme]
    
        class _v20_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, http_request, *args, **kwargs):
            http_request.authorize(connection=self)
            return http_request.headers
    
            # set Content-Length based len of body
        if self.body is not None:
            self.headers['Content-Length'] = len(self.body)
            # just in case a broken http/1.1 decides to keep connection alive
            self.headers.setdefault('Connection', 'close')
        # Content-Length must be specified in POST method even with no body
        elif self.method == b'POST':
            self.headers['Content-Length'] = 0
    
        def _has_ajax_crawlable_variant(self, response):
        '''
        Return True if a page without hash fragment could be 'AJAX crawlable'
        according to https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
        '''
        body = response.text[:self.lookup_bytes]
        return _has_ajaxcrawlable_meta(body)
    
        def process_request(self, request, spider):
        if self.user_agent:
            request.headers.setdefault(b'User-Agent', self.user_agent)

    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = u'0'
# The full version, including alpha/beta/rc tags.
release = u'0'
    
            self.vhost1b = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
    
# -- Options for manual page output ---------------------------------------
    
    # The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#
# This is also used if you do content translation via gettext catalogs.
# Usually you set 'language' from the command line for these cases.
language = 'en'