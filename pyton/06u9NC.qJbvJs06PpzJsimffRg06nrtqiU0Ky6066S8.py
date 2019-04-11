
        
            def send_friend_request(self, friend_id):
        pass
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
        def parse(self, response):
        pass

    
            parser.add_option_group(group)
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
                        if not cb:
                        logger.error('Cannot find a rule that matches %(url)r in spider: %(spider)s',
                                 {'url': response.url, 'spider': spider.name})
                        return
                else:
                    cb = 'parse'
    
        # Stripping scripts and comments is slow (about 20x slower than
    # just checking if a string is in text); this is a quick fail-fast
    # path that should work for most pages.
    if 'fragment' not in text:
        return False
    if 'content' not in text:
        return False