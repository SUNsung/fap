
        
            # now do a benchmark where the number of points is fixed
    # and the variable is the number of features
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
'''
    
    '''
print(__doc__)
    
                plt.subplots_adjust(bottom=0, top=.89, wspace=0,
                                left=0, right=1)
            plt.suptitle('n_cluster=%i, connectivity=%r' %
                         (n_clusters, connectivity is not None), size=17)
    
    These images how similar features are merged together using
feature agglomeration.
'''
print(__doc__)
    
        def getChild(self, request, name):
        return self
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    def _iter_command_classes(module_name):
    # TODO: add `name` attribute to commands and and merge this function with
    # scrapy.utils.spider.iter_spider_classes
    for module in walk_modules(module_name):
        for obj in vars(module).values():
            if inspect.isclass(obj) and \
                    issubclass(obj, ScrapyCommand) and \
                    obj.__module__ == module.__name__ and \
                    not obj == ScrapyCommand:
                yield obj
    
        def short_desc(self):
        return 'Get settings values'
    
    
# contracts
class UrlContract(Contract):
    ''' Contract to set the url of the request (mandatory)
        @url http://scrapy.org
    '''
    
    openssl_methods = {
    METHOD_TLS:    SSL.SSLv23_METHOD,                   # protocol negotiation (recommended)
    METHOD_SSLv3:  SSL.SSLv3_METHOD,                    # SSL 3 (NOT recommended)
    METHOD_TLSv10: SSL.TLSv1_METHOD,                    # TLS 1.0 only
    METHOD_TLSv11: getattr(SSL, 'TLSv1_1_METHOD', 5),   # TLS 1.1 only
    METHOD_TLSv12: getattr(SSL, 'TLSv1_2_METHOD', 6),   # TLS 1.2 only
}
    
        def _downloaded(self, response, slot, request, spider):
        slot.remove_request(request)
        return self.download(response, spider) \
                if isinstance(response, Request) else response
    
    
if __name__ == '__main__':