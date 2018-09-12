
        
        
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
init_bashrc = u'''echo '
export SHELL=/bin/bash
export PS1='$ '
echo > $HISTFILE
eval $(thefuck --alias {})
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.bashrc'''
    
        for condition_type in desired_conditions:
        for (condition_name, condition) in desired_conditions[condition_type].items():
            if condition_name not in all_conditions[condition_type]:
                module.fail_json(msg='Condition %s of type %s does not exist' % (condition_name, condition_type))
            condition['data_id'] = all_conditions[condition_type][condition_name]['data_id']
            if condition['data_id'] not in existing_conditions[condition_type]:
                insertions.append(format_for_insertion(condition))
    
        if not existing_hook:
        changed = True
    else:
        # GlobalTimeout is not configurable, but exists in response.
        # Removing it helps to compare both dicts in order to understand
        # what changes were done.
        del(existing_hook[0]['GlobalTimeout'])
        added, removed, modified, same = dict_compare(lch_params, existing_hook[0])
        if added or removed or modified:
            changed = True
    
    - name: allocate a new elastic IP and associate it with an instance
  ec2_eip:
    device_id: i-1212f003
    
        module = AnsibleModule(argument_spec=argument_spec)
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            metric=dict(type='str'),
            namespace=dict(type='str'),
            statistic=dict(type='str', choices=['SampleCount', 'Average', 'Sum', 'Minimum', 'Maximum']),
            comparison=dict(type='str', choices=['<=', '<', '>', '>=']),
            threshold=dict(type='float'),
            period=dict(type='int'),
            unit=dict(type='str', choices=['Seconds', 'Microseconds', 'Milliseconds', 'Bytes', 'Kilobytes', 'Megabytes', 'Gigabytes', 'Terabytes',
                                           'Bits', 'Kilobits', 'Megabits', 'Gigabits', 'Terabits', 'Percent', 'Count', 'Bytes/Second', 'Kilobytes/Second',
                                           'Megabytes/Second', 'Gigabytes/Second', 'Terabytes/Second', 'Bits/Second', 'Kilobits/Second', 'Megabits/Second',
                                           'Gigabits/Second', 'Terabits/Second', 'Count/Second', 'None']),
            evaluation_periods=dict(type='int'),
            description=dict(type='str'),
            dimensions=dict(type='dict', default={}),
            alarm_actions=dict(type='list'),
            insufficient_data_actions=dict(type='list'),
            ok_actions=dict(type='list'),
            state=dict(default='present', choices=['present', 'absent']),
        )
    )
    
    # Create a placement group.
- ec2_placement_group:
    name: my-cluster
    state: present
    
            # set the min adjustment step in case the user decided to change their
        # adjustment type to percentage
        setattr(policy, 'min_adjustment_step', module.params.get('min_adjustment_step'))
    
    
class MoveFileCommand(object):
    
    *TL;DR80
Traverses a container and accesses the container's elements.
'''
    
        def scan(self):
        self.state.scan()
    
    
class lazy_property(object):
    
        def __del__(self):
        if self.item is not None:
            self._queue.put(self.item)
            self.item = None
    
    
class BusinessLogic(object):
    ''' Business logic holding data store instances '''