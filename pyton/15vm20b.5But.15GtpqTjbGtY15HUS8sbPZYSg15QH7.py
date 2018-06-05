
        
                if is_json:
            content = json.dumps(response.json(), sort_keys=True, indent=4)
        else:
            content = response.content
    
        parser.add_argument('--key',
                        metavar='KEY',
                        default=api_key,
                        required=not api_key,
                        help='Shippable API key')
    
        if result is None:
        return '{}'
    
        terminal_stdout_re = [
        re.compile(br'[\r\n]?[\w+\-\.:\/\[\]]+(?:\([^\)]+\)){,3}(?:>|#) ?$'),
        re.compile(br'\@[\w\-\.]+:\S+?[>#\$] ?$')
    ]
    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))
    
        def construct_yaml_seq(self, node):
        data = AnsibleSequence()
        yield data
        data.extend(self.construct_sequence(node))
        data.ansible_pos = self._node_position_info(node)
    
    '''
@author: Eugene Duboviy <eugene.dubovoy@gmail.com> | github.com/duboviy
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
    ### OUTPUT ###
# Jack move 5m then stop

    
        def test_initial_state(self):
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)
    
    production code which is untestable:
    
        def publishReport(self):
        self._db.update()
        self._reporter.report()