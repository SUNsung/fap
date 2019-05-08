
        
            def __iter__(self):
        return iter(self._plugins)
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
        def test_upload_multiple_fields_with_the_same_name(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG,
                 'test-file@%s' % FILE_PATH_ARG)
        assert HTTP_OK in r
        assert r.count('Content-Disposition: form-data; name='test-file';'
                       ' filename='%s'' % os.path.basename(FILE_PATH)) == 2
        # Should be 4, but is 3 because httpbin
        # doesn't seem to support filed field lists
        assert r.count(FILE_CONTENT) in [3, 4]
        assert r.count('Content-Type: text/plain') == 2
    
        def _migrate_implicit_content_type(self):
        '''Migrate the removed implicit_content_type config option'''
        try:
            implicit_content_type = self.pop('implicit_content_type')
        except KeyError:
            self.save()
        else:
            if implicit_content_type == 'form':
                self['default_options'].insert(0, '--form')
            self.save()
            self.load()

    
    
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
            if self.spider_is_idle(spider) and slot.close_if_idle:
            self._spider_idle(spider)
    
    
logger = logging.getLogger(__name__)
    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
            content = response.read()
        if self.config.check_ip_content not in content:
            self.logger.warn('app check content:%s', content)
            return False
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
    
    
                    if self.accept[s] >= 1:
                    #print 'accept state for alt %d' % self.accept[s]
                    return self.accept[s]
    
    
    def seek(self, index):
        self.p = index
    
            txt = self.text
        if txt is not None:
            txt = txt.replace('\n','\\\\n')
            txt = txt.replace('\r','\\\\r')
            txt = txt.replace('\t','\\\\t')
        else:
            txt = '<no text>'