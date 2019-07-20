
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
        def __init__(self, value, suit):
        super(BlackJackCard, self).__init__(value, suit)
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
        def __init__(self, object_list, per_page, orphans=0,
                 allow_empty_first_page=True):
        self.object_list = object_list
        self._check_object_list_is_ordered()
        self.per_page = int(per_page)
        self.orphans = int(orphans)
        self.allow_empty_first_page = allow_empty_first_page
    
        def has_changed(self, initial, data):
        if self.disabled:
            return False
        if initial is None:
            initial = []
        if data is None:
            data = []
        if len(initial) != len(data):
            return True
        initial_set = {str(value) for value in initial}
        data_set = {str(value) for value in data}
        return data_set != initial_set
    
        def to_python(self, value):
        return int(value)
    
        gis_operators = {
        'bbcontains': PostGISOperator(op='~', raster=True),
        'bboverlaps': PostGISOperator(op='&&', geography=True, raster=True),
        'contained': PostGISOperator(op='@', raster=True),
        'overlaps_left': PostGISOperator(op='&<', raster=BILATERAL),
        'overlaps_right': PostGISOperator(op='&>', raster=BILATERAL),
        'overlaps_below': PostGISOperator(op='&<|'),
        'overlaps_above': PostGISOperator(op='|&>'),
        'left': PostGISOperator(op='<<'),
        'right': PostGISOperator(op='>>'),
        'strictly_below': PostGISOperator(op='<<|'),
        'strictly_above': PostGISOperator(op='|>>'),
        'same_as': PostGISOperator(op='~=', raster=BILATERAL),
        'exact': PostGISOperator(op='~=', raster=BILATERAL),  # alias of same_as
        'contains': PostGISOperator(func='ST_Contains', raster=BILATERAL),
        'contains_properly': PostGISOperator(func='ST_ContainsProperly', raster=BILATERAL),
        'coveredby': PostGISOperator(func='ST_CoveredBy', geography=True, raster=BILATERAL),
        'covers': PostGISOperator(func='ST_Covers', geography=True, raster=BILATERAL),
        'crosses': PostGISOperator(func='ST_Crosses'),
        'disjoint': PostGISOperator(func='ST_Disjoint', raster=BILATERAL),
        'equals': PostGISOperator(func='ST_Equals'),
        'intersects': PostGISOperator(func='ST_Intersects', geography=True, raster=BILATERAL),
        'overlaps': PostGISOperator(func='ST_Overlaps', raster=BILATERAL),
        'relate': PostGISOperator(func='ST_Relate'),
        'touches': PostGISOperator(func='ST_Touches', raster=BILATERAL),
        'within': PostGISOperator(func='ST_Within', raster=BILATERAL),
        'dwithin': PostGISOperator(func='ST_DWithin', geography=True, raster=BILATERAL),
    }
    
        def as_string(self):
        'Retrieve the Field's value as a string.'
        if not self.is_set:
            return None
        string = capi.get_field_as_string(self._feat.ptr, self._index)
        return force_str(string, encoding=self._feat.encoding, strings_only=True)
    
        def reset_appid(self):
        # called by web_control
        with self.lock:
            self.working_appid_list = list()
            for appid in self.config.GAE_APPIDS:
                if not appid:
                    self.config.GAE_APPIDS.remove(appid)
                    continue
                self.working_appid_list.append(appid)
            self.not_exist_appids = []
            self.out_of_quota_appids = []
        self.last_reset_time = time.time()
    
                else:
                i = op.execute(buf) # execute operation and skip
    
    
def monitor_pr_status(pr_data):
    print('Waiting for CI to complete...')
    last_commit = pr_data.get_commits().reversed[0]
    while True:
        status = last_commit.get_combined_status()
        if status.state == 'pending' or status.state == 'failure':
            summary = {
                'pending': 0,
                'success': 0,
                'failure': 0,
                'error': 0,
            }
            for detail in status.statuses:
                if detail.context == 'dco-signed':
                    # dco-signed check breaks on merge remote-tracking ; ignore it
                    continue
                if detail.state in summary:
                    summary[detail.state] += 1
            print(
                '{pending} pending, {success} successes, {failure} failures, '
                '{error} errors'.format(**summary)
            )
            if summary['failure'] > 0 or summary['error'] > 0:
                raise ScriptError('CI failures detected!')
            elif summary['pending'] == 0 and summary['success'] > 0:
                # This check assumes at least 1 non-DCO CI check to avoid race conditions.
                # If testing on a repo without CI, use --skip-ci-check to avoid looping eternally
                return True
            time.sleep(30)
        elif status.state == 'success':
            print('{} successes: all clear!'.format(status.total_count))
            return True
    
    
def serialize_ns_time_value(value):
    result = (value, 'ns')
    table = [
        (1000., 'us'),
        (1000., 'ms'),
        (1000., 's'),
        (60., 'm'),
        (60., 'h')
    ]
    for stage in table:
        tmp = value / stage[0]
        if tmp == int(value / stage[0]):
            value = tmp
            result = (int(value), stage[1])
        else:
            break
    return '{0}{1}'.format(*result)
    
    
def serialize_restart_spec(restart_spec):
    if not restart_spec:
        return ''
    parts = [restart_spec['Name']]
    if restart_spec['MaximumRetryCount']:
        parts.append(six.text_type(restart_spec['MaximumRetryCount']))
    return ':'.join(parts)
    
    
def parse_seconds_float(value):
    return timeparse(value or '')
    
        def test_get_project(self):
        base_dir = 'tests/fixtures/longer-filename-composefile'
        project = get_project(base_dir)
        assert project.name == 'longer-filename-composefile'
        assert project.client
        assert project.services
    
    
def get_digest_from_pull(events):
    digest = None
    for event in events:
        status = event.get('status')
        if not status or 'Digest' not in status:
            continue
        else:
            digest = status.split(':', 1)[1].strip()
    return digest
    
            text = '就吃饭'
        with mktempfile(encoding='utf-8') as tf:
            progress_stream.write_to_stream(text, tf)
            tf.seek(0)
            assert tf.read() == text
    
    COMPOSEFILE_V3_0 = ComposeVersion('3.0')
COMPOSEFILE_V3_1 = ComposeVersion('3.1')
COMPOSEFILE_V3_2 = ComposeVersion('3.2')
COMPOSEFILE_V3_3 = ComposeVersion('3.3')
COMPOSEFILE_V3_4 = ComposeVersion('3.4')
COMPOSEFILE_V3_5 = ComposeVersion('3.5')
COMPOSEFILE_V3_6 = ComposeVersion('3.6')
COMPOSEFILE_V3_7 = ComposeVersion('3.7')
    
            Supported filenames: %s
        ''' % ', '.join(supported_filenames))
    
        def __getitem__(self, key):
        try:
            return super(Environment, self).__getitem__(key)
        except KeyError:
            if IS_WINDOWS_PLATFORM:
                try:
                    return super(Environment, self).__getitem__(key.upper())
                except KeyError:
                    pass
            if not self.silent and key not in self.missing_keys:
                log.warning(
                    'The {} variable is not set. Defaulting to a blank string.'
                    .format(key)
                )
                self.missing_keys.append(key)
    
            for network, netdefs in self.prioritized_networks.items():
            if network in connected_networks:
                if short_id_alias_exists(container, network):
                    continue
                self.client.disconnect_container_from_network(container.id, network)
    
            def build_container_event(event):
            container_attrs = event['Actor']['Attributes']
            time = datetime.datetime.fromtimestamp(event['time'])
            time = time.replace(
                microsecond=microseconds_from_time_nano(event['timeNano'])
            )
    
            # Scenario: _request call returns not found error
        _response.get.return_value = TRANSACTION_NOT_FOUND
        self.assertRaises(AuthorizationHoldNotFound, capture_authorization_hold,
                          self.customer_id, self.payment_profile_id,
                          self.amount, self.transaction_id)
    
        # IE<8 allows backslash escapes in place of pretty much any char
    def test_escape_function_obfuscation(self):
        testcase = u'*{color: expression\\28 alert\\28 1 \\29 \\29 }'
        self.assertInvalid(testcase)
    
    class TestPermissionSet(PermissionSet):
    info = dict(x={}, y={})
    
    import unittest