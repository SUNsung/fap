
        
            Code is a simple port of what is already in the /scripts directory
    
        def on_fault_trigger(self):
        self._hsm._next_state('suspect')
        self._hsm._send_diagnostics_request()
        self._hsm._raise_alarm()
    
        def setUp(self):
        self.e, self.g = get_localizer(language='English'), \
                         get_localizer(language='Greek')
    
        def test_initial_am_station(self):
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def delegate(self, requests):
        for request in requests:
            self.target.send(request)
    
            # and can also be undone at will
        for cmd in reversed(command_stack):
            cmd.undo()
    finally:
        os.unlink('foo.txt')
    
        def update(self, subject):
        print(u'HexViewer: Subject %s has data 0x%x' %
              (subject.name, subject.data))
    
    
def get_changed_files(old_ref, new_ref):
    '''Return a list of files that have changed from one ref to another.'''
    root = get_root()
    changed_files_text = subprocess.check_output(['git', 'diff', '--name-only',
                                                  old_ref, new_ref])
    changed_files = changed_files_text.splitlines()
    return [os.path.join(root, x) for x in changed_files]
    
    
# blanket fallback rule
api('templated', NullJsonTemplate)
    
            The user's response to the CAPTCHA should be sent as `captcha`
        along with your request.
    
    from BeautifulSoup import BeautifulSoup, Tag
    
                if code in (204, 304):
                # NEVER return a content body on 204/304 or downstream
                # caches may become very confused.
                return ''
            elif c.render_style not in self.allowed_render_styles:
                return str(code)
            elif c.render_style in extensions.API_TYPES:
                data = request.environ.get('extra_error_data', {'error': code})
                message = request.GET.get('message', '')
                if message:
                    data['message'] = message
                if request.environ.get('WANT_RAW_JSON'):
                    return scriptsafe_dumps(data)
                return websafe_json(json.dumps(data))
            elif takedown and code == 404:
                link = Link._by_fullname(takedown)
                return pages.TakedownPage(link).render()
            elif code == 400:
                return self.send400()
            elif code == 403:
                return self.send403()
            elif code == 429:
                return self.send429()
            elif code == 500:
                failien_url = make_failien_url()
                sad_message = get_funny_translated_string('500_page')
                sad_message %= {'admin': random.choice(self.admins)}
                sad_message = safemarkdown(sad_message)
                return redditbroke % (failien_url, sad_message)
            elif code == 503:
                return self.send503()
            elif c.site:
                return self.send404()
            else:
                return 'page not found'
        except Exception as e:
            return handle_awful_failure('ErrorController.GET_document: %r' % e)
    
            c.allow_framing = True