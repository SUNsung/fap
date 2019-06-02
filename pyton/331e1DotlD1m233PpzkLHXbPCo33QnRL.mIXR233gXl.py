
        
            def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
    import pylons
from pylons.i18n.translation import _get_translator
from routes.util import URLGenerator
from pylons import url
import baseplate.events
import pkg_resources
import paste.fixture
import paste.script.appinstall
from paste.deploy import loadapp
    
            # Make get_ids return a valid payment_method_id
        get_ids.return_value.append(payment_method_id)
        # Assign arbitrary CustomerID, which comes from Authorize
        get_id.return_value = 1000
        create_authorization_hold.return_value = transaction_id
    
        def test_dict(self):
        self.assertEquals({}, ConfigValue.dict(str, str)(''))
        self.assertEquals({'a': ''}, ConfigValue.dict(str, str)('a'))
        self.assertEquals({'a': 3}, ConfigValue.dict(str, int)('a: 3'))
        self.assertEquals({'a': 3, 'b': 4},
                          ConfigValue.dict(str, int)('a: 3, b: 4'))
        self.assertEquals({'a': (3, 5), 'b': (4, 6)},
                          ConfigValue.dict(
                              str, ConfigValue.tuple_of(int), delim=';')
                          ('a: 3, 5;  b: 4, 6'))
    
        def test_is_superuser(self):
        perm_set = PermissionSet()
        self.assertFalse(perm_set.is_superuser())
        perm_set[perm_set.ALL] = True
        self.assertTrue(perm_set.is_superuser())
        perm_set[perm_set.ALL] = False
        self.assertFalse(perm_set.is_superuser())
    
        def test_signing(self):
        epoch_time = 1234567890
        header = self.make_sig_header(
            '{'user': 'reddit', 'password': 'hunter2'}',
            epoch=epoch_time,
        )
        self.assertEqual(
            header,
            '1:test:1:1234567890:'
            '0fc3d90d83ac7433a5376c17f2aea9b470c368740c91c513e819e3a4980349de'
        )
    
        def test_unpad_evil_message(self):
        from r2.lib.tracking import _unpad_message
        evil = ('a' * 88) + chr(57)
        result = _unpad_message(evil)
        self.assertEquals(result, '')