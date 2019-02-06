
        
            lastmod = None
    all_sites_lastmod = True
    urls = []
    for site in maps:
        try:
            if callable(site):
                site = site()
            urls.extend(site.get_urls(page=page, site=req_site,
                                      protocol=req_protocol))
            if all_sites_lastmod:
                site_lastmod = getattr(site, 'latest_lastmod', None)
                if site_lastmod is not None:
                    site_lastmod = (
                        site_lastmod.utctimetuple() if isinstance(site_lastmod, datetime.datetime)
                        else site_lastmod.timetuple()
                    )
                    lastmod = site_lastmod if lastmod is None else max(lastmod, site_lastmod)
                else:
                    all_sites_lastmod = False
        except EmptyPage:
            raise Http404('Page %s empty' % page)
        except PageNotAnInteger:
            raise Http404('No page '%s'' % page)
    response = TemplateResponse(request, template_name, {'urlset': urls},
                                content_type=content_type)
    if all_sites_lastmod and lastmod is not None:
        # if lastmod is defined for all sites, set header so as
        # ConditionalGetMiddleware is able to send 304 NOT MODIFIED
        response['Last-Modified'] = http_date(timegm(lastmod))
    return response

    
    Uses the linkcheck's output file to fix links in docs.
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
    from scrapy.utils.spider import iter_spider_classes
from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
from scrapy.utils.conf import arglist_to_dict
from scrapy.utils.python import without_none_values
    
        default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
        def post_process(self, output):
        for x in output:
            if isinstance(x, (BaseItem, dict)):
                for arg in self.args:
                    if not arg in x:
                        raise ContractFail(''%s' field is missing' % arg)

    
        return None
    
    TEST_IMAGES = [
    'obama-240p.jpg',
    'obama-480p.jpg',
    'obama-720p.jpg',
    'obama-1080p.jpg'
]
    
    # You can also save a copy of the new image to disk if you want by uncommenting this line
# pil_image.save('image_with_boxes.jpg')

    
    # Show the picture
pil_image.show()

    
    
def parse_args(args=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('version', type=str, help='Pandas version (0.23.0)')
    return parser.parse_args(args)