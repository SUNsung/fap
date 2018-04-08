
        
        
def SetUpSystemPaths():
  sys.path.insert( 0, os.path.join( DIR_OF_YCMD ) )
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
    
class DebugInfoRequest( BaseRequest ):
  def __init__( self, extra_data = None ):
    super( DebugInfoRequest, self ).__init__()
    self._extra_data = extra_data
    self._response = None
    
        def unsubscribe(self, msg):
        self.provider.unsubscribe(msg, self)
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_shall_toggle_from_am_to_fm(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'FM'
        self.assertEqual(state, expected_state_name)
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(time_provider_stub), expected_time)
    
        def has_gold(self, user):
        if not user:
            return False
    
            # tell reddit_base to redirect to the appropriate subreddit for
        # a legacy CNAME
        if not is_subdomain(domain, g.domain):
            environ['legacy-cname'] = domain
            return self.app(environ, start_response)
    
    
def register_api_templates(template_name, template_class):
    for style in ('api', 'api-html', 'api-compact'):
        tpm.add_handler(
            name=template_name,
            style=style,
            handler=template_class,
        )
    
            if target.subreddit_slow.quarantine:
            err = RedditError('GILDING_NOT_ALLOWED')
            self.on_validation_error(err)
        VNotInTimeout().run(target=target, subreddit=target.subreddit_slow)
    
        @require_oauth2_scope('identity')
    @validate(
        VUser(),
        fields=VList(
            'fields',
            choices=PREFS_JSON_SPEC.spec.keys(),
            error=errors.errors.NON_PREFERENCE,
        ),
    )
    @api_doc(api_section.account, uri='/api/v1/me/prefs')
    def GET_prefs(self, fields):
        '''Return the preference settings of the logged in user'''
        resp = PrefsJsonTemplate(fields).data(c.oauth_user)
        return self.api_wrapper(resp)
    
    import json
import os