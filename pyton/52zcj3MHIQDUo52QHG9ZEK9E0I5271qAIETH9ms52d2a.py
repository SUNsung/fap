
        
        import pytest
    
        def prepare_hooks(self, hooks):
        '''Prepares the given hooks.'''
        # hooks can be passed as None to the prepare method and to this
        # method. To prevent iterating over None, simply use an empty list
        # if hooks is False-y
        hooks = hooks or []
        for event in hooks:
            self.register_hook(event, hooks[event])
    
        # By using the 'with' statement we are sure the session is closed, thus we
    # avoid leaving sockets open which can trigger a ResourceWarning in some
    # cases, and look like a memory leak in others.
    with sessions.Session() as session:
        return session.request(method=method, url=url, **kwargs)
    
      # You shouldn't have a space before a semicolon at the end of the line.
  # There's a special case for 'for' since the style guide allows space before
  # the semicolon there.
  if Search(r':\s*;\s*$', line):
    error(filename, linenum, 'whitespace/semicolon', 5,
          'Semicolon defining empty statement. Use {} instead.')
  elif Search(r'^\s*;\s*$', line):
    error(filename, linenum, 'whitespace/semicolon', 5,
          'Line contains only semicolon. If this should be an empty statement, '
          'use {} instead.')
  elif (Search(r'\s+;\s*$', line) and
        not Search(r'\bfor\b', line)):
    error(filename, linenum, 'whitespace/semicolon', 5,
          'Extra space before last semicolon. If this should be an empty '
          'statement, use {} instead.')
    
        What it should do it take a markdown file, and split it into more files. A targetfile should have the same
    number of lines as the original, with source code snippets and markdown non-words removed, for spell-checking.
    
            data2 = (b'--------------------------3c48c744237517ac\r\nContent-Disposition: form-data; name='key'\r\n\r\n'
                 b'uploads/20170826T181315.679087009Z/upload/pixel.png\r\n--------------------------3c48c744237517ac'
                 b'--\r\n')
    
        dynamodb = aws_stack.connect_to_resource('dynamodb')
    # create table with stream forwarding config
    aws_stack.create_dynamodb_table(TEST_TABLE_NAME, partition_key=PARTITION_KEY)
    table = dynamodb.Table(TEST_TABLE_NAME)
    
            params = apigateway_listener.extract_path_params('/foo/bar1/bar2', '/foo/{param1}/{param2}')
        self.assertEqual(params, {'param1': 'bar1', 'param2': 'bar2'})
    
        def test_create_run_state_machine(self):
        state_machines_before = self.sfn_client.list_state_machines()['stateMachines']
    
    
def should_record(api, method, path, data, headers):
    ''' Decide whether or not a given API call should be recorded (persisted to disk) '''
    if api == 's3':
        if method not in ['PUT', 'POST', 'DELETE']:
            return False
        return True
    return False
    
            # Create a large amount of items
        num_items = 20
        for i in range(0, num_items):
            item = {PARTITION_KEY: 'id%s' % i, 'data1': 'foobar123 ' * 1000}
            table.put_item(Item=item)
    
    Example:
Input:
words = ['What','must','be','acknowledgment','shall','be']
maxWidth = 16
Output:
[
  'What   must   be',
  'acknowledgment  ',
  'shall be        '
]
'''