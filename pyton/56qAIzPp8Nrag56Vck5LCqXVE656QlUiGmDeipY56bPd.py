
        
            def send_friend_request(self, friend_id):
        pass
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    c = sqlite3.connect('ci.db')
    
            it's implemented automatically by pyspider.database.connect_database
        if you are not create database connection via connect_database method,
        you should implement this
        '''
        raise NotImplementedError

    
        def drop(self, project):
        raise NotImplementedError
    
            obj.setdefault('group', '')
        obj.setdefault('status', 'TODO')
        obj.setdefault('script', '')
        obj.setdefault('comments', '')
        obj.setdefault('rate', 0)
        obj.setdefault('burst', 0)
    
    from pymongo import MongoClient
    
        def __init__(self, host='localhost', port=3306, database='resultdb',
                 user='root', passwd=None):
        self.database_name = database
        self.conn = mysql.connector.connect(user=user, password=passwd,
                                            host=host, port=port, autocommit=True)
        if database not in [x[0] for x in self._execute('show databases')]:
            self._execute('CREATE DATABASE %s' % self.escape(database))
        self.conn.database = database
        self._list_project()
    
        def update(self, project, taskid, obj={}, **kwargs):
        if project not in self.projects:
            self._list_project()
        if project not in self.projects:
            raise LookupError
        tablename = self._tablename(project)
        obj = dict(obj)
        obj.update(kwargs)
        obj['updatetime'] = time.time()
        return self._update(
            tablename,
            where='`taskid` = %s' % self.placeholder,
            where_values=(taskid, ),
            **self._stringify(obj)
        )

    
            if fields:
            def get_method(key):
                obj = self.redis.hmget(key, fields)
                if all(x is None for x in obj):
                    return None
                return dict(zip(fields, obj))
        else:
            get_method = self.redis.hgetall
    
        def save(self, project, taskid, url, result):
        if project not in self.projects:
            self._create_project(project)
            self._list_project()
        self.table.name = self._tablename(project)
        obj = {
            'taskid': taskid,
            'url': url,
            'result': result,
            'updatetime': time.time(),
        }
        if self.get(project, taskid, ('taskid', )):
            del obj['taskid']
            return self.engine.execute(self.table.update()
                                       .where(self.table.c.taskid == taskid)
                                       .values(**self._stringify(obj)))
        else:
            return self.engine.execute(self.table.insert()
                                       .values(**self._stringify(obj)))
    
    
class SplitTableMixin(object):
    UPDATE_PROJECTS_TIME = 10 * 60