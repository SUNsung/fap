
        
            def test_data_value_shall_be_changeable(cls):
        cls.sub.data = 20
        cls.assertEqual(cls.sub._data, 20)
    
        def test_provider_shall_update_affected_subscribers_with_published_subscription(cls):
        pro = Provider()
        pub = Publisher(pro)
        sub1 = Subscriber('sub 1 name', pro)
        sub1.subscribe('sub 1 msg 1')
        sub1.subscribe('sub 1 msg 2')
        sub2 = Subscriber('sub 2 name', pro)
        sub2.subscribe('sub 2 msg 1')
        sub2.subscribe('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            cls.assertEqual(mock_subscriber1_run.call_count, 0)
            cls.assertEqual(mock_subscriber2_run.call_count, 0)
        pub.publish('sub 1 msg 1')
        pub.publish('sub 1 msg 2')
        pub.publish('sub 2 msg 1')
        pub.publish('sub 2 msg 2')
        with patch.object(sub1, 'run') as mock_subscriber1_run, patch.object(sub2, 'run') as mock_subscriber2_run:
            pro.update()
            expected_sub1_calls = [call('sub 1 msg 1'), call('sub 1 msg 2')]
            mock_subscriber1_run.assert_has_calls(expected_sub1_calls)
            expected_sub2_calls = [call('sub 2 msg 1'), call('sub 2 msg 2')]
            mock_subscriber2_run.assert_has_calls(expected_sub2_calls)

    
    if sys.version_info[0] == 2:
    from StringIO import StringIO
else:
    from io import StringIO
    
        def test_given_standby_on_message_operator_inservice_shall_raise_exception_and_keep_in_state(cls):
        with cls.assertRaises(UnsupportedTransition):
            cls.hsm.on_message('operator inservice')
        cls.assertEqual(isinstance(cls.hsm._current_state, Standby), True)

    
        blackboard.add_expert(Student(blackboard))
    blackboard.add_expert(Scientist(blackboard))
    blackboard.add_expert(Professor(blackboard))
    
    
def GetProgram(plist):
  '''Plists have either a Program or ProgramArguments key,
     if the executable requires command line options.
  '''
  try:
    return '['%s']' % plist['Program'], HashFile(plist['Program'])
  except KeyError:
    return plist['ProgramArguments'], HashFile(plist['ProgramArguments'])