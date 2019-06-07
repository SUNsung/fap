
        
                if module.params.get('next_marker'):
            params['Marker'] = module.params.get('next_marker')
        try:
            lambda_facts.update(aliases=client.list_aliases(FunctionName=function_name, **params)['Aliases'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(aliases=[])
            else:
                module.fail_json_aws(e, msg='Trying to get aliases')
    else:
        module.fail_json(msg='Parameter function_name required for query=aliases.')
    
            firewall_policy = oneandone_conn.attach_server_firewall_policy(
            firewall_id=firewall_id,
            server_ips=attach_servers)
        return firewall_policy
    except Exception as e:
        module.fail_json(msg=str(e))
    
        module_hbacrule = get_hbacrule_dict(description=module.params['description'],
                                        hostcategory=hostcategory,
                                        ipaenabledflag=ipaenabledflag,
                                        servicecategory=servicecategory,
                                        sourcehostcategory=sourcehostcategory,
                                        usercategory=usercategory)
    ipa_hbacrule = client.hbacrule_find(name=name)
    
        module.exit_json(changed=True)
    
    
class CellTest(unittest.TestCase):
    def test_comparison(self):
        # These tests are here simply to exercise the comparison code;
        # their presence should not be interpreted as providing any
        # guarantees about the semantics (or even existence) of cell
        # comparisons in future versions of CPython.
        self.assertTrue(cell(2) < cell(3))
        self.assertTrue(empty_cell() < cell('saturday'))
        self.assertTrue(empty_cell() == empty_cell())
        self.assertTrue(cell(-36) == cell(-36.0))
        self.assertTrue(cell(True) > empty_cell())
    
        def log_request(self, code='-', size='-'):
        '''Log an accepted request.
    
        print('Unpickled records:')
    pprint.pprint(memos)
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    import sqlite3
import os
    
    
def test_array32():
    check_array(5, (1 << 16))
    
    from matplotlib import pyplot as plt
from matplotlib import rcParams
import numpy as np
    
    from pandas import DataFrame, MultiIndex
from pandas.util import testing as tm
    
        for isort, normalize, sort, ascending, dropna \
            in product((False, True), repeat=5):
    
    
@pytest.mark.parametrize('style,equiv', [
    ('margin: 1px; margin-top: inherit',
     'margin-bottom: 1px; margin-right: 1px; margin-left: 1px'),
    ('margin-top: inherit', ''),
    ('margin-top: initial', ''),
])
def test_css_none_absent(style, equiv):
    assert_same_resolution(style, equiv)
    
        with tm.ensure_clean() as path:
        df.to_json(path, compression=compression)
        with open(path, 'rb') as f:
            s3_resource.Bucket('pandas-test').put_object(Key='test-1', Body=f)
    
    
def test_read_map_header():
    unpacker = Unpacker()
    unpacker.feed(packb({'a': 'A'}))
    assert unpacker.read_map_header() == 1
    assert unpacker.unpack() == B'a'
    assert unpacker.unpack() == B'A'
    try:
        unpacker.unpack()
        assert 0, 'should raise exception'
    except OutOfData:
        assert 1, 'okay'
    
            filtered = []
        ignore_params = ctx.options.server_replay_ignore_params or []
        for p in queriesArray:
            if p[0] not in ignore_params:
                filtered.append(p)
        for p in filtered:
            key.append(p[0])
            key.append(p[1])
    
        def requestheaders(self, f):
        self.run(f, True)
    
        def load(self, loader):
        loader.add_option(
            'termlog_verbosity', str, 'info',
            'Log verbosity.',
            choices=log.LogTierOrder
        )
    
    
class ServerConnection(tcp.TCPClient, stateobject.StateObject):
    '''
    A server connection
    
    
    class CompressedTextChunk(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.keyword = (self._io.read_bytes_term(0, False, True, True)).decode(u'UTF-8')
            self.compression_method = self._io.read_u1()
            self._raw_text_datastream = self._io.read_bytes_full()
            self.text_datastream = zlib.decompress(self._raw_text_datastream)
    
            This attribute is read-only and can only be modified by calling one of
        state transition functions.
        '''
        return self._state