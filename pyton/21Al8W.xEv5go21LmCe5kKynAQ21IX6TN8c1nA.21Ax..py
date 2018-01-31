
class CallState(Enum):
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def __init__(self, template_categories_to_budget_map):
        self.categories_to_budget_map = template_categories_to_budget_map
    
        def mapper(self, _, line):
        yield line, 1
    
    
class ExceptionBenchmark(Benchmark):
    def make_context(self):
        return stack_context.ExceptionStackContext(self.__handle_exception)
    
        @classmethod
    def send_updates(cls, chat):
        logging.info('sending message to %d waiters', len(cls.waiters))
        for waiter in cls.waiters:
            try:
                waiter.write_message(chat)
            except:
                logging.error('Error sending message', exc_info=True)
    
    api('wikipagelisting', WikiPageListingJsonTemplate)
api('wikipagediscussions', WikiJsonTemplate)
api('wikipagesettings', WikiSettingsJsonTemplate)
    
                note = None
            buyer = c.user
            if c.user.name.lower() in g.live_config['proxy_gilding_accounts']:
                note = 'proxy-%s' % c.user.name
                if proxying_for:
                    try:
                        buyer = Account._by_name(proxying_for)
                    except NotFound:
                        pass
    
    from reddit_base import RedditController, UnloggedUser
from r2.lib.pages import (ButtonLite, ButtonDemoPanel, WidgetDemoPanel,
                          BoringPage)
from r2.lib.pages.things import wrap_links
from r2.models import *
from r2.lib.validator import *
from pylons import request, response
from pylons import tmpl_context as c
from pylons.i18n import _
    
    
class ErrorController(RedditController):
    '''Generates error documents as and when they are required.