
        
            def score(self):
        total_value = 0
        for card in self.cards:
            total_value += card.value
        return total_value
    
        def handle_budget_notifications(self, key, total):
        '''Call notification API if nearing or exceeded budget.'''
        ...
    
    from enum import Enum
    
    new_version = {}
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
            def print_skipping(reason):
            print('Skipping %s: %s' % (test_case['name'], reason))
        if not ie.working():
            print_skipping('IE marked as not _WORKING')
            return
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
        def _get_ip(self, protocol):
        if self._SKIP_SOCKS_TEST:
            return '127.0.0.1'
    
    
class UnaccentExtension(CreateExtension):
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
        def create(self):
        while True:
            self._session_key = self._get_new_session_key()
            try:
                # Save immediately to ensure we have a unique entry in the
                # database.
                self.save(must_create=True)
            except CreateError:
                # Key wasn't unique. Try again.
                continue
            self.modified = True
            return
    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
            loader.testNamePatterns = ['*My*']
        self.assertEqual(loader.getTestCaseNames(MyTest), ['test_1', 'test_2'])
    
            Returns true if the buffer is up to capacity. This method can be
        overridden to implement custom flushing strategies.
        '''
        return (len(self.buffer) >= self.capacity)
    
        def _copy_file_without_generated_symbols(self, source_file, dest_file):
        with open(source_file) as fp:
            lines = fp.readlines()
        with open(dest_file, 'w') as fp:
            fp.writelines(lines[:lines.index('#--start constants--\n') + 1])
            fp.writelines(lines[lines.index('#--end constants--\n'):])
    
    
# Split a path in root and extension.
# The extension is everything starting at the last dot in the last
# pathname component; the root is everything before that.
# It is always true that root + ext == p.
    
            # Log all prober confidences if none met MINIMUM_THRESHOLD
        if self.logger.getEffectiveLevel() == logging.DEBUG:
            if self.result['encoding'] is None:
                self.logger.debug('no probers hit minimum threshold')
                for group_prober in self._charset_probers:
                    if not group_prober:
                        continue
                    if isinstance(group_prober, CharSetGroupProber):
                        for prober in group_prober.probers:
                            self.logger.debug('%s %s confidence = %s',
                                              prober.charset_name,
                                              prober.language,
                                              prober.get_confidence())
                    else:
                        self.logger.debug('%s %s confidence = %s',
                                          prober.charset_name,
                                          prober.language,
                                          prober.get_confidence())
        return self.result

    
        def feed(self, byte_str):
        for c in byte_str:
            coding_state = self.coding_sm.next_state(c)
            if coding_state == MachineState.ERROR:
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                if self.coding_sm.get_current_charlen() >= 2:
                    self._num_mb_chars += 1
    
            return TLSConfig(
            client_cert=client_cert, verify=verify, ca_cert=ca_cert,
            assert_hostname=False if skip_hostname_check else None,
            ssl_version=tls_version
        )
    
    
def get_named_volumes(services):
    volume_specs = [
        VolumeSpec.parse(volume)
        for service in services.values()
        for volume in service.get('volumes', [])
    ]
    names = {
        spec.external
        for spec in volume_specs
        if spec.is_named_volume
    }
    return {name: {'external': True} for name in names}
    
        def download_from_appveyor(self, branch_name, filename):
        print('Downloading {} from appveyor'.format(filename))
        url = '{base}/dist%2F{filename}?branch={branch_name}'.format(
            base=self.base_appveyor_url, filename=filename, branch_name=branch_name
        )
        full_dest = os.path.join(REPO_ROOT, self.destination, filename)
        return self._download(url, full_dest)
    
    
def build_config(contents, **kwargs):
    return load(build_config_details(contents, **kwargs))
    
    from mitmproxy import exceptions
from mitmproxy import flowfilter
from mitmproxy import ctx
    
        def run(self, f, is_request):
        if self.max_size:
            r = f.request if is_request else f.response
            try:
                expected_size = http1.expected_http_body_size(
                    f.request, f.response if not is_request else None
                )
            except exceptions.HttpException:
                f.reply.kill()
                return
            if expected_size and not r.raw_content and not (0 <= expected_size <= self.max_size):
                # r.stream may already be a callable, which we want to preserve.
                r.stream = r.stream or True
                ctx.log.info('Streaming {} {}'.format('response from' if not is_request else 'request to', f.request.host))
    
            if log.log_tier(ctx.options.termlog_verbosity) >= log.log_tier(e.level):
            click.secho(
                e.msg,
                file=outfile,
                fg=dict(error='red', warn='yellow',
                        alert='magenta').get(e.level),
                dim=(e.level == 'debug'),
                err=(e.level == 'error')
            )

    
        class SrgbChunk(KaitaiStruct):
    
    		page.addToken(0x08, 'Categories')
		page.addToken(0x09, 'Category')
		page.addToken(0x0A, 'Complete')
		page.addToken(0x0B, 'DateCompleted')
		page.addToken(0x0C, 'DueDate')
		page.addToken(0x0D, 'UTCDueDate')
		page.addToken(0x0E, 'Importance')
		page.addToken(0x0F, 'Recurrence')
		page.addToken(0x10, 'Recurrence_Type')
		page.addToken(0x11, 'Recurrence_Start')
		page.addToken(0x12, 'Recurrence_Until')
		page.addToken(0x13, 'Recurrence_Occurrences')
		page.addToken(0x14, 'Recurrence_Interval')
		page.addToken(0x15, 'Recurrence_DayOfMonth')
		page.addToken(0x16, 'Recurrence_DayOfWeek')
		page.addToken(0x17, 'Recurrence_WeekOfMonth')
		page.addToken(0x18, 'Recurrence_MonthOfYear')
		page.addToken(0x19, 'Recurrence_Regenerate')
		page.addToken(0x1A, 'Recurrence_DeadOccur')
		page.addToken(0x1B, 'ReminderSet')
		page.addToken(0x1C, 'ReminderTime')
		page.addToken(0x1D, 'Sensitivity')
		page.addToken(0x1E, 'StartDate')
		page.addToken(0x1F, 'UTCStartDate')
		page.addToken(0x20, 'Subject')
		page.addToken(0x22, 'OrdinalDate')
		page.addToken(0x23, 'SubOrdinalDate')
		page.addToken(0x24, 'CalendarType')
		page.addToken(0x25, 'IsLeapMonth')
		page.addToken(0x26, 'FirstDayOfWeek')
		self.codePages.append(page)
		# endregion