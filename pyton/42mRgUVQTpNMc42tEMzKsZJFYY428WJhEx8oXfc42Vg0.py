
        
                # Region and location are common to all Dimension Data modules.
        region = self.module.params['region']
        self.region = 'dd-{0}'.format(region)
        self.location = self.module.params['location']
    
        def _ensure_group_is_absent(self, group_name, parent_name):
        '''
        Ensure that group_name is absent by deleting it if necessary
        :param group_name: string - the name of the clc server group to delete
        :param parent_name: string - the name of the parent group for group_name
        :return: changed, group
        '''
        changed = False
        group = []
        results = []
    
    
if __name__ == '__main__':
    main()

    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        # Perform the action
    if action is not None and not module.check_mode:
        try:
            action()
        except Exception as e:
            module.fail_json(msg='Entry action failed.', details=to_native(e), exception=traceback.format_exc())
    
    import traceback
    
    - name: Delete that record
  netcup_dns:
    api_key: '...'
    api_password: '...'
    customer_id: '...'
    domain: 'example.com'
    name: 'mail'
    type: 'A'
    value: '127.0.0.1'
    state: absent
    
        # If in check mode, exit saying that we succeeded
    if module.check_mode:
        module.exit_json(changed=False, msg='OK')
    
        # If Vim supports user_data (8.0.1493 or later), we actually know the
    # _exact_ element that was selected, having put its index in the
    # user_data field. Otherwise, we have to guess by matching the values in the
    # completed item and the list of completions. Sometimes this returns
    # multiple possibilities, which is essentially unresolvable.
    if 'user_data' not in completed_item:
      completions = self._RawResponse()[ 'completions' ]
      return _FilterToMatchingCompletions( completed_item, completions )
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_SingleMessage_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' } ] ,
                                    None ),
               equal_to( True ) )
    
    
def LevelWarnings_test():
  opts = _JavaFilter( { 'level' : 'warning' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
    
def KeywordsFromSyntaxListOutput_PythonSyntax_test():
  expected_keywords = (
    'bytearray', 'IndexError', 'all', 'help', 'vars', 'SyntaxError', 'global',
    'elif', 'unicode', 'sorted', 'memoryview', 'isinstance', 'except',
    'nonlocal', 'NameError', 'finally', 'BytesWarning', 'dict', 'IOError',
    'pass', 'oct', 'bin', 'SystemExit', 'return', 'StandardError', 'format',
    'TabError', 'break', 'next', 'not', 'UnicodeDecodeError', 'False',
    'RuntimeWarning', 'list', 'iter', 'try', 'reload', 'Warning', 'round',
    'dir', 'cmp', 'set', 'bytes', 'UnicodeTranslateError', 'intern',
    'issubclass', 'yield', 'Ellipsis', 'hash', 'locals', 'BufferError',
    'slice', 'for', 'FloatingPointError', 'sum', 'VMSError', 'getattr', 'abs',
    'print', 'import', 'True', 'FutureWarning', 'ImportWarning', 'None',
    'EOFError', 'len', 'frozenset', 'ord', 'super', 'raise', 'TypeError',
    'KeyboardInterrupt', 'UserWarning', 'filter', 'range', 'staticmethod',
    'SystemError', 'or', 'BaseException', 'pow', 'RuntimeError', 'float',
    'MemoryError', 'StopIteration', 'globals', 'divmod', 'enumerate', 'apply',
    'LookupError', 'open', 'basestring', 'from', 'UnicodeError', 'zip', 'hex',
    'long', 'IndentationError', 'int', 'chr', '__import__', 'type',
    'Exception', 'continue', 'tuple', 'reduce', 'reversed', 'else', 'assert',
    'UnicodeEncodeError', 'input', 'with', 'hasattr', 'delattr', 'setattr',
    'raw_input', 'PendingDeprecationWarning', 'compile', 'ArithmeticError',
    'while', 'del', 'str', 'property', 'def', 'and', 'GeneratorExit',
    'ImportError', 'xrange', 'is', 'EnvironmentError', 'KeyError', 'coerce',
    'SyntaxWarning', 'file', 'in', 'unichr', 'ascii', 'any', 'as', 'if',
    'OSError', 'DeprecationWarning', 'min', 'UnicodeWarning', 'execfile', 'id',
    'complex', 'bool', 'ValueError', 'NotImplemented', 'map', 'exec', 'buffer',
    'max', 'class', 'object', 'repr', 'callable', 'ZeroDivisionError', 'eval',
    '__debug__', 'ReferenceError', 'AssertionError', 'classmethod',
    'UnboundLocalError', 'NotImplementedError', 'lambda', 'AttributeError',
    'OverflowError', 'WindowsError' )
    
    def _queue_management_worker(executor_reference,
                             processes,
                             pending_work_items,
                             work_ids_queue,
                             call_queue,
                             result_queue):
    '''Manages the communication between this process and the worker processes.
    
    
def flip(edge, np_random):
    return 1 if np_random.uniform() < edge else -1
    
        def compute_reward(self, achieved_goal, goal, info):
        # Compute distance between goal and the achieved goal.
        d = goal_distance(achieved_goal, goal)
        if self.reward_type == 'sparse':
            return -(d > self.distance_threshold).astype(np.float32)
        else:
            return -d
    
            done = bool(False)
        return self._get_obs(), reward, done, dict(reward_linup=uph_cost, reward_quadctrl=-quad_ctrl_cost, reward_impact=-quad_impact_cost)
    
            class LidarCallback(Box2D.b2.rayCastCallback):
            def ReportFixture(self, fixture, point, normal, fraction):
                if (fixture.filterData.categoryBits & 1) == 0:
                    return 1
                self.p2 = point
                self.fraction = fraction
                return 0
        self.lidar = [LidarCallback() for _ in range(10)]
    
            if (self.number - self.range * 0.01) < action < (self.number + self.range * 0.01):
            reward = 1
            done = True
    
            self.guess_count += 1
        done = self.guess_count >= self.guess_max
    
    class CubeCrash(gym.Env):
    metadata = {
        'render.modes': ['human', 'rgb_array'],
        'video.frames_per_second' : 60,
        'video.res_w' : FIELD_W,
        'video.res_h' : FIELD_H,
    }