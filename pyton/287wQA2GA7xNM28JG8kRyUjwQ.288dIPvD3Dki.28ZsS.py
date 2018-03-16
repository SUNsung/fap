
        
            try:
        s2 = os.lstat(parent)
    except OSError:
        # one should handle the returned OSError with more care to figure
        # out whether this is still a mount
        return False
    
    # Note, sha1 is the only hash algorithm compatible with python2.4 and with
# FIPS-140 mode (as of 11-2014)
try:
    from hashlib import sha1 as sha1
except ImportError:
    from sha import sha as sha1
    
            params1 = {'one': 1}
        params2 = {'two': 2}
        actual = GCPUtils.are_params_equal(params1, params2)
        self.assertFalse(actual)
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def take_call(self, call):
        '''Assume the employee will always successfully take the call.'''
        self.call = call
        self.call.employee = self
        self.call.state = CallState.IN_PROGRESS
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def __init__(self, license_plate):
        super(Car, self).__init__(VehicleSize.COMPACT, license_plate, spot_size=1)
    
        def create_signature(self):
        # Create signature based on url and contents
        pass
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    # If true, '()' will be appended to :func: etc. cross-reference text.
#add_function_parentheses = True
    
    if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    '''
import zope.interface
    
        def add_missing_metrics(self, metrics):
        exisiting_metrics = {m.metric_name for m in self.metrics}
        for metric in metrics:
            if metric.metric_name not in exisiting_metrics:
                metric.table_id = self.id
                self.metrics += [metric]
    
        @classmethod
    def is_dimension(cls, dtype, column_name):
        if cls.is_id(column_name):
            return False
        return dtype.name in ('object', 'bool')
    
    
def import_from_dict(session, data, sync=[]):
    '''Imports databases and druid clusters from dictionary'''
    if isinstance(data, dict):
        logging.info('Importing %d %s',
                     len(data.get(DATABASES_KEY, [])),
                     DATABASES_KEY)
        for database in data.get(DATABASES_KEY, []):
            Database.import_from_dict(session, database, sync=sync)
    
    
def upgrade():
    try:
        constraint = find_constraint_name() or 'fk_columns_column_name_datasources'
        with op.batch_alter_table('columns',
                naming_convention=naming_convention) as batch_op:
            batch_op.drop_constraint(constraint, type_='foreignkey')
            batch_op.create_foreign_key(
                'fk_columns_datasource_name_datasources',
                'datasources',
                ['datasource_name'], ['datasource_name'])
    except:
        logging.warning(
            'Could not find or drop constraint on `columns`')
    
    # revision identifiers, used by Alembic.
revision = '1296d28ec131'
down_revision = '6414e83d82b7'
    
    
def downgrade():
    pass

    
    
def downgrade():
    with op.batch_alter_table('sql_metrics') as batch_op_sql_metrics:
        batch_op_sql_metrics.drop_column('warning_text')
    with op.batch_alter_table('metrics') as batch_op_metrics:
        batch_op_metrics.drop_column('warning_text')
