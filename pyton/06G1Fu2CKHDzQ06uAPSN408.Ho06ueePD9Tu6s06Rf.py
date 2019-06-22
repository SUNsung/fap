
        
            def dispatch_call(self, call):
        if call.rank not in (Rank.OPERATOR, Rank.SUPERVISOR, Rank.DIRECTOR):
            raise ValueError('Invalid call rank: {}'.format(call.rank))
        employee = None
        if call.rank == Rank.OPERATOR:
            employee = self._dispatch_call(call, self.operators)
        if call.rank == Rank.SUPERVISOR or employee is None:
            employee = self._dispatch_call(call, self.supervisors)
        if call.rank == Rank.DIRECTOR or employee is None:
            employee = self._dispatch_call(call, self.directors)
        if employee is None:
            self.queued_calls.append(call)
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
            self.assertFalse(self.addr1.conflicts(self.addr))
        self.assertTrue(self.addr1.conflicts(self.addr_defined))
        self.assertFalse(self.addr1.conflicts(self.addr_default))
    
    # A list of ignored prefixes for module index sorting.
#modindex_common_prefix = []
    
    .. code-block:: bash
   :caption: To acquire a single certificate for both ``example.com`` and
             ``www.example.com``
    
        The long run reward for playing 0 should be -1/37 for any state
    
            obser, r, done, info = env.step(a)
        if r != 0:
            print('reward %0.3f' % r)
        total_reward += r
        window_still_open = env.render()
        if window_still_open==False: return False
        if done: break
        if human_wants_restart: break
        while human_sets_pause:
            env.render()
            time.sleep(0.1)
        time.sleep(0.1)
    print('timesteps %i reward %0.2f' % (total_timesteps, total_reward))