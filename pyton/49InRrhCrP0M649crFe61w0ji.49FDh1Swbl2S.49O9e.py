
        
            print('-' * 20)
    
    #
# Function used to calculate result
#
    
            print('Test: One element stack')
        sorted_stack = self.get_sorted_stack(stack, [1])
        assert_equal(sorted_stack.pop(), 1)
    
    		print('Success: test_max_min_nodes')
    
            # N.B. np.random.randint draws from [A, B) while random.randint draws from [A,B]
        val = self.np_random.randint(0, self.n - 1)
        if val == action == 0:
            reward = self.n - 2.0
        elif val != 0 and action != 0 and val % 2 == action % 2:
            reward = 1.0
        else:
            reward = -1.0
        return 0, reward, False, {}
    
            next_id = self.generate_next_id()
        self.closeables[next_id] = closeable
        return next_id
    
    def create_seed(a=None, max_bytes=8):
    '''Create a strong random seed. Otherwise, Python 2 would seed using
    the system time, which might be non-robust especially in the
    presence of concurrency.
    
    def add_new_rollouts(spec_ids, overwrite):
    environments = [spec for spec in envs.registry.all() if spec._entry_point is not None]
    if spec_ids:
        environments = [spec for spec in environments if spec.id in spec_ids]
        assert len(environments) == len(spec_ids), 'Some specs not found'
    with open(ROLLOUT_FILE) as data_file:
        rollout_dict = json.load(data_file)
    modified = False
    for spec in environments:
        if not overwrite and spec.id in rollout_dict:
            logger.debug('Rollout already exists for {}. Skipping.'.format(spec.id))
        else:
            modified = update_rollout_dict(spec, rollout_dict) or modified
    
    def key_press(key, mod):
    global human_agent_action, human_wants_restart, human_sets_pause
    if key==0xff0d: human_wants_restart = True
    if key==32: human_sets_pause = not human_sets_pause
    a = int( key - ord('0') )
    if a <= 0 or a >= ACTIONS: return
    human_agent_action = a