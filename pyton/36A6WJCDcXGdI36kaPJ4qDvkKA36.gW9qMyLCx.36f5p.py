
        
            def _targets_request(self, targets):
        '''Formats each target for the request'''
        targets_request = []
        for target in targets:
            target_request = {
                'Id': target['id'],
                'Arn': target['arn']
            }
            if 'input' in target:
                target_request['Input'] = target['input']
            if 'input_path' in target:
                target_request['InputPath'] = target['input_path']
            if 'role_arn' in target:
                target_request['RoleArn'] = target['role_arn']
            if 'ecs_parameters' in target:
                target_request['EcsParameters'] = {}
                ecs_parameters = target['ecs_parameters']
                if 'task_definition_arn' in target['ecs_parameters']:
                    target_request['EcsParameters']['TaskDefinitionArn'] = ecs_parameters['task_definition_arn']
                if 'task_count' in target['ecs_parameters']:
                    target_request['EcsParameters']['TaskCount'] = ecs_parameters['task_count']
            targets_request.append(target_request)
        return targets_request
    
        module.exit_json(changed=changed,
                     snapshot_id=snapshot.id,
                     volume_id=snapshot.volume_id,
                     volume_size=snapshot.volume_size,
                     tags=snapshot.tags.copy())
    
        this_module = sys.modules[__name__]
    
    ## List all Subscriptions for a Topic in a project
- gcpubsub_facts:
    view: subscriptions
    topic: my-topic
    state: list
'''
    
                    _remove_firewall_rule(module,
                                      oneandone_conn,
                                      firewall_policy['id'],
                                      rule_id)
            _check_mode(module, chk_changed)
            firewall_policy = get_firewall_policy(oneandone_conn, firewall_policy['id'], True)
            changed = True
    
        result = dict(changed=False, rules_purged=0)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
            # If feature is already in good state, just exit
        if (re.search('Disabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'absent') or \
                (re.search('Enabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'present'):
            self.module.exit_json(changed=False)
    
        # Handle multiple log files
    logs = p['path'].split(',')
    logs = filter(None, logs)
    
    ---
- name: test contains operator
  enos_command:
    commands:
      - show version
      - show system memory
    wait_for:
      - 'result[0] contains 'Lenovo''
      - 'result[1] contains 'MemFree''
    provider: '{{ cli }}'
  register: result
    
    
def read_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> str:
    '''Return the decoded string of the resource.
    
    
def main():
    parser = ArgumentParser(description='''\
Send the contents of a directory as a MIME message.
Unless the -o option is given, the email is sent by forwarding to your local
SMTP server, which then does the normal delivery process.  Your local machine
must be running an SMTP server.
''')
    parser.add_argument('-d', '--directory',
                        help='''Mail the contents of the specified directory,
                        otherwise use the current directory.  Only the regular
                        files in the directory are sent, and we don't recurse to
                        subdirectories.''')
    parser.add_argument('-o', '--output',
                        metavar='FILE',
                        help='''Print the composed message to FILE instead of
                        sending the message to the SMTP server.''')
    parser.add_argument('-s', '--sender', required=True,
                        help='The value of the From: header (required)')
    parser.add_argument('-r', '--recipient', required=True,
                        action='append', metavar='RECIPIENT',
                        default=[], dest='recipients',
                        help='A To: header value (at least one required)')
    args = parser.parse_args()
    directory = args.directory
    if not directory:
        directory = '.'
    # Create the message
    msg = EmailMessage()
    msg['Subject'] = 'Contents of directory %s' % os.path.abspath(directory)
    msg['To'] = ', '.join(args.recipients)
    msg['From'] = args.sender
    msg.preamble = 'You will not see this in a MIME-aware mail reader.\n'
    
    cur.close()
con.close()

    
    
def reset_mocap_welds(sim):
    '''Resets the mocap welds that we use for actuation.
    '''
    if sim.model.nmocap > 0 and sim.model.eq_data is not None:
        for i in range(sim.model.eq_data.shape[0]):
            if sim.model.eq_type[i] == mujoco_py.const.EQ_WELD:
                sim.model.eq_data[i, :] = np.array(
                    [0., 0., 0., 1., 0., 0., 0.])
    sim.forward()
    
        def register(self, closeable):
        '''Registers an object with a 'close' method.