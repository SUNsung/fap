
        
        
def delete(module, connection, name):
    ''' Delete an Elasticache backup. '''
    try:
        response = connection.delete_snapshot(SnapshotName=name)
        changed = True
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Code'] == 'SnapshotNotFoundFault':
            response = {}
            changed = False
        elif e.response['Error']['Code'] == 'InvalidSnapshotState':
            module.fail_json(msg='Error: InvalidSnapshotState. The snapshot is not in an available state or failed state to allow deletion.'
                             'You may need to wait a few minutes.')
        else:
            module.fail_json(msg='Unable to delete the snapshot.', exception=traceback.format_exc())
    return response, changed
    
            try:
            lambda_facts.update(function_list=client.list_functions(**params)['Functions'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(function_list=[])
            else:
                module.fail_json_aws(e, msg='Trying to get function list')
    
    import traceback
    
    
DOCUMENTATION = '''
---
module: ipa_role
author: Thomas Krahn (@Nosmoht)
short_description: Manage FreeIPA role
description:
- Add, modify and delete a role within FreeIPA server using FreeIPA API
options:
  cn:
    description:
    - Role name.
    - Can not be changed as it is the unique identifier.
    required: true
    aliases: ['name']
  description:
    description:
    - A description of this role-group.
  group:
    description:
    - List of group names assign to this role.
    - If an empty list is passed all assigned groups will be unassigned from the role.
    - If option is omitted groups will not be checked or changed.
    - If option is passed all assigned groups that are not passed will be unassigned from the role.
  host:
    description:
    - List of host names to assign.
    - If an empty list is passed all assigned hosts will be unassigned from the role.
    - If option is omitted hosts will not be checked or changed.
    - If option is passed all assigned hosts that are not passed will be unassigned from the role.
  hostgroup:
    description:
    - List of host group names to assign.
    - If an empty list is passed all assigned host groups will be removed from the role.
    - If option is omitted host groups will not be checked or changed.
    - If option is passed all assigned hostgroups that are not passed will be unassigned from the role.
  privilege:
    description:
    - List of privileges granted to the role.
    - If an empty list is passed all assigned privileges will be removed.
    - If option is omitted privileges will not be checked or changed.
    - If option is passed all assigned privileges that are not passed will be removed.
    version_added: '2.4'
  service:
    description:
    - List of service names to assign.
    - If an empty list is passed all assigned services will be removed from the role.
    - If option is omitted services will not be checked or changed.
    - If option is passed all assigned services that are not passed will be removed from the role.
  state:
    description: State to ensure
    default: 'present'
    choices: ['present', 'absent']
  user:
    description:
    - List of user names to assign.
    - If an empty list is passed all assigned users will be removed from the role.
    - If option is omitted users will not be checked or changed.
extends_documentation_fragment: ipa.documentation
version_added: '2.3'
'''
    
        return device
    
        Returns a function to set the real IP.
    '''
    ip_to_mock = None
    
        def test_human_shall_speak(self):
        noise = self.human.speak()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
        pprint(contributions)
    
        parameter
    '''
    
    
def parse_args(args=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('version', type=str, help='Pandas version (0.23.0)')
    return parser.parse_args(args)
    
    ax = fig.add_axes((0.63 + 0.18, 0.1, 0.16, 0.8))
y = np.row_stack((fnx(), fnx(), fnx()))
x = np.arange(10)
y1, y2, y3 = fnx(), fnx(), fnx()
ax.stackplot(x, y1, y2, y3)
ax.set_xticks([])
ax.set_yticks([])
    
    
ABCIndex = create_pandas_abc_type('ABCIndex', '_typ', ('index', ))
ABCInt64Index = create_pandas_abc_type('ABCInt64Index', '_typ',
                                       ('int64index', ))
ABCUInt64Index = create_pandas_abc_type('ABCUInt64Index', '_typ',
                                        ('uint64index', ))
ABCRangeIndex = create_pandas_abc_type('ABCRangeIndex', '_typ',
                                       ('rangeindex', ))
ABCFloat64Index = create_pandas_abc_type('ABCFloat64Index', '_typ',
                                         ('float64index', ))
ABCMultiIndex = create_pandas_abc_type('ABCMultiIndex', '_typ',
                                       ('multiindex', ))
ABCDatetimeIndex = create_pandas_abc_type('ABCDatetimeIndex', '_typ',
                                          ('datetimeindex', ))
ABCTimedeltaIndex = create_pandas_abc_type('ABCTimedeltaIndex', '_typ',
                                           ('timedeltaindex', ))
ABCPeriodIndex = create_pandas_abc_type('ABCPeriodIndex', '_typ',
                                        ('periodindex', ))
ABCCategoricalIndex = create_pandas_abc_type('ABCCategoricalIndex', '_typ',
                                             ('categoricalindex', ))
ABCIntervalIndex = create_pandas_abc_type('ABCIntervalIndex', '_typ',
                                          ('intervalindex', ))
ABCIndexClass = create_pandas_abc_type('ABCIndexClass', '_typ',
                                       ('index', 'int64index', 'rangeindex',
                                        'float64index', 'uint64index',
                                        'multiindex', 'datetimeindex',
                                        'timedeltaindex', 'periodindex',
                                        'categoricalindex', 'intervalindex'))
    
    Libraries are expected to implement a few pytest fixtures to provide data
for the tests. The fixtures may be located in either
    
        # FILL
    # - color, fillType
    ('background-color: red', {'fill': {'fgColor': 'FF0000',
                                        'patternType': 'solid'}}),
    ('background-color: #ff0000', {'fill': {'fgColor': 'FF0000',
                                            'patternType': 'solid'}}),
    ('background-color: #f0a', {'fill': {'fgColor': 'FF00AA',
                                         'patternType': 'solid'}}),
    # BORDER
    # - style
    ('border-style: solid',
     {'border': {'top': {'style': 'medium'},
                 'bottom': {'style': 'medium'},
                 'left': {'style': 'medium'},
                 'right': {'style': 'medium'}}}),
    ('border-style: solid; border-width: thin',
     {'border': {'top': {'style': 'thin'},
                 'bottom': {'style': 'thin'},
                 'left': {'style': 'thin'},
                 'right': {'style': 'thin'}}}),
    
    
def test_lines_with_compression(compression):
    
        data = b'x' * 65535
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 3
    assert b[0:1] == header
    assert b[1:3] == b'\xff\xff'
    assert b[3:] == data
    assert unpackb(b) == data
    
    
def test_incorrect_type_array():
    unpacker = Unpacker()
    unpacker.feed(packb(1))
    try:
        unpacker.read_array_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'