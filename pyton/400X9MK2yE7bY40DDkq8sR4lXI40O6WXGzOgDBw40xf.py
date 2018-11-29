
        
            def _init_github_account(self):
        try:
            info = netrc.netrc().authenticators(self._NETRC_MACHINE)
            if info is not None:
                self._username = info[0]
                self._password = info[2]
                compat_print('Using GitHub credentials found in .netrc...')
                return
            else:
                compat_print('No GitHub credentials found in .netrc')
        except (IOError, netrc.NetrcParseError):
            compat_print('Unable to parse .netrc')
        self._username = compat_input(
            'Type your GitHub username or email address and press [Return]: ')
        self._password = compat_getpass(
            'Type your GitHub password and press [Return]: ')
    
    
iv = key = [0x20, 0x15] + 14 * [0]
    
    import io
import sys
import re
    
    import itertools
import json
import os
import re
import sys
    
    
# And add them to TestDownload
for n, test_case in enumerate(defs):
    tname = 'test_' + str(test_case['name'])
    i = 1
    while hasattr(TestDownload, tname):
        tname = 'test_%s_%d' % (test_case['name'], i)
        i += 1
    test_method = generator(test_case, tname)
    test_method.__name__ = str(tname)
    ie_list = test_case.get('add_ie')
    test_method.add_ie = ie_list and ','.join(ie_list)
    setattr(TestDownload, test_method.__name__, test_method)
    del test_method
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
                result.printErrors()
            result.printSummary(start, stop)
            self.exitcode = int(not result.wasSuccessful())
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
            exist_ca_sha1 = get_exist_ca_sha1()
        if exist_ca_sha1 == ca_hash:
            xlog.info('GoAgent CA exist')
            return
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
    MIN_TOKEN_TYPE = UP+1
	
INVALID_TOKEN_TYPE = 0
    
    
    def combineFollows(self, exact):
        followSet = set()
        for idx, localFollowSet in reversed(list(enumerate(self._state.following))):
            followSet |= localFollowSet
            if exact:
                # can we see end of rule?
                if EOR_TOKEN_TYPE in localFollowSet:
                    # Only leave EOR in set if at top (start rule); this lets
                    # us know if have to include follow(start rule); i.e., EOF
                    if idx > 0:
                        followSet.remove(EOR_TOKEN_TYPE)
                        
                else:
                    # can't see end of rule, quit
                    break
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
            if state is None or state.state == STATE_UNKNOWN:
            return
    
            if self.accountname in _CONFIGURING:
            request_id = _CONFIGURING.pop(self.accountname)
            configurator = self.hass.components.configurator
            configurator.request_done(request_id)
    
            _LOGGER.info('Scanner initialized')
    
        @property
    def physical_address(self):
        '''Return the physical address of device in HDMI network.'''
        return str(self._device.physical_address)
    
                try:
                kwargs['data'] = self._schema(data)
            except vol.Invalid as err:
                _LOGGER.error('Data does not match schema: %s', err)
                return view.json_message(
                    'Message format incorrect: {}'.format(err), 400)