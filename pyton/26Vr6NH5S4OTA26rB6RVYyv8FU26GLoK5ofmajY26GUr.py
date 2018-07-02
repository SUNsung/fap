
        
                    self.tags[key] = tag
    
    
def with_metaclass(meta, *bases):
    '''Create a base class with a metaclass.'''
    # This requires a bit of explanation: the basic idea is to make a
    # dummy metaclass for one level of class instantiation that replaces
    # itself with the actual metaclass.
    class metaclass(type):
        def __new__(cls, name, this_bases, d):
            return meta(name, bases, d)
    return type.__new__(metaclass, 'temporary_class', (), {})
    
            :param namespace: a configuration namespace
        :param lowercase: a flag indicating if the keys of the resulting
                          dictionary should be lowercase
        :param trim_namespace: a flag indicating if the keys of the resulting
                          dictionary should not include the namespace
    
    
def create_logger(app):
    '''Get the ``'flask.app'`` logger and configure it if needed.
    
        #: When data is changed, this is set to ``True``. Only the session
    #: dictionary itself is tracked; if the session contains mutable
    #: data (for example a nested dict) then this must be set to
    #: ``True`` manually when modifying that data. The session cookie
    #: will only be written to the response if this is ``True``.
    modified = False
    
    
def info(message, *args):
    print(message % args, file=sys.stderr)
    
        app = flask.Flask(__name__)
    with pytest.raises(TypeError):
        app.config.from_mapping(
            {}, {}
        )
    
    
def test_main_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('main_app.py')
    app.write('import flask\n\napp = flask.Flask('__main__')')
    purge_module('main_app')
    
    import pytest
from werkzeug.exceptions import NotFound
    
        @app.route('/meh')
    def meh():
        return flask.request.url
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        @value.setter
    def value(self, new_value):
        if 1 <= new_value <= 13:
            self._value = new_value
        else:
            raise ValueError('Invalid card value: {}'.format(new_value))
    
        def take_spot(self, spot):
        self.spots_taken.append(spot)
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def __init__(self):
        self._active_state = Active(self)  # Unit.Inservice.Active()
        self._standby_state = Standby(self)  # Unit.Inservice.Standby()
        self._suspect_state = Suspect(self)  # Unit.OutOfService.Suspect()
        self._failed_state = Failed(self)  # Unit.OutOfService.Failed()
        self._current_state = self._standby_state
        self.states = {'active': self._active_state,
                       'standby': self._standby_state,
                       'suspect': self._suspect_state,
                       'failed': self._failed_state}
        self.message_types = {'fault trigger': self._current_state.on_fault_trigger,
                              'switchover': self._current_state.on_switchover,
                              'diagnostics passed': self._current_state.on_diagnostics_passed,
                              'diagnostics failed': self._current_state.on_diagnostics_failed,
                              'operator inservice': self._current_state.on_operator_inservice}
    
        def test_sales_manager_shall_talk_through_proxy_with_delay(cls):
        cls.p.busy = 'No'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager ready to talk\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        def __init__(self, name):
        self.name = name
    
        def test_bear_eng_localization(self):
        self.assertEqual(self.e.get('bear'), 'bear')
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    production code which is untestable:
    
        parameter
    '''
    
        def commit(self):
        self.states = [memento(target, self.deep) for target in self.targets]