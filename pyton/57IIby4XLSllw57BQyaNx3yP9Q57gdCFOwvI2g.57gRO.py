
        
        
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
    del sys

    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
            def __init__(self, method=SSL.SSLv23_METHOD):
            self.method = method
    
        def gotHeaders(self, headers):
        self.headers_time = time()
        self.response_headers = headers
    
        def _download(self, request, spider):
        slot = self.slot
        slot.add_request(request)
        def _on_success(response):
            assert isinstance(response, (Response, Request))
            if isinstance(response, Response):
                response.request = request # tie request to response received
                logkws = self.logformatter.crawled(request, response, spider)
                logger.log(*logformatter_adapter(logkws), extra={'spider': spider})
                self.signals.send_catch_log(signal=signals.response_received, \
                    response=response, request=request, spider=spider)
            return response
    
    
def main():
    print('Making key files...')
    makeKeyFiles('elgamal', 2048)
    print('Key files generation successful')
    
            if row1 == row2:
            plaintext += table[row1*5+(col1-1)%5]
            plaintext += table[row2*5+(col2-1)%5]
        elif col1 == col2:
            plaintext += table[((row1-1)%5)*5+col1]
            plaintext += table[((row2-1)%5)*5+col2]
        else: # rectangle
            plaintext += table[row1*5+col2]
            plaintext += table[row2*5+col1]
    
    if __name__ == '__main__':
    num = generateLargePrime()
    print(('Prime number:', num))
    print(('isPrime:', isPrime(num)))

    
        print('Calculating d that is mod inverse of e...')
    d = cryptoMath.findModInverse(e, (p - 1) * (q - 1))
    
                if new_key is None:
                break
    
    This is a pure Python implementation of Dynamic Programming solution to the longest increasing subsequence of a given sequence.
    
        return matchScore
    
    from setuptools import setup, find_packages
setup(
    name = proj_info['name'],
    version = VERSION,
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
    
    {
    {pattern_inline_title = r'<title>([^<]*)</title>'
pattern_inline_api_key = r'api\.site_key\s*=\s*'([^']+)''
pattern_inline_img_url = r''url':'([^']+)','key':'[^']+'}}'
pattern_inline_NSID = r''nsid'\s*:\s*'([^']+)''
pattern_inline_video_mark = r'('mediaType':'video')'
    
    '''
*What is this pattern about?
Define a family of algorithms, encapsulate each one, and make them interchangeable.
Strategy lets the algorithm vary independently from clients that use it.
    
    
class EnglishGetter(object):
    
    
class HierachicalStateMachine(object):
    def __init__(self):
        self._active_state = Active(self)  # Unit.Inservice.Active()
        self._standby_state = Standby(self)  # Unit.Inservice.Standby()
        self._suspect_state = Suspect(self)  # Unit.OutOfService.Suspect()
        self._failed_state = Failed(self)  # Unit.OutOfService.Failed()
        self._current_state = self._standby_state
        self.states = {
            'active': self._active_state,
            'standby': self._standby_state,
            'suspect': self._suspect_state,
            'failed': self._failed_state,
        }
        self.message_types = {
            'fault trigger': self._current_state.on_fault_trigger,
            'switchover': self._current_state.on_switchover,
            'diagnostics passed': self._current_state.on_diagnostics_passed,
            'diagnostics failed': self._current_state.on_diagnostics_failed,
            'operator inservice': self._current_state.on_operator_inservice,
        }
    
        # high-level i.e. Abstraction specific
    def scale(self, pct):
        self._radius *= pct
    
        def show_item_information(self, item_name):
        try:
            item_info = self.model.get(item_name)
        except Exception:
            item_type = self.model.item_type
            self.view.item_not_found(item_type, item_name)
        else:
            item_type = self.model.item_type
            self.view.show_item_information(item_type, item_name, item_info)