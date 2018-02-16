containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
        def _dispatch_call(self, call, employees):
        for employee in employees:
            if employee.call is None:
                employee.take_call(call)
                return employee
        return None
    
        def shuffle(self):  # ...
    
            (2016-01, shopping), 125
        (2016-01, gas), 50
        '''
        total = sum(values)
        self.handle_budget_notifications(key, total)
        yield key, sum(values)
    
    
class Categorizer(object):
    
    
def upgrade():
    try:
        op.alter_column(
            'clusters', 'changed_on',
            existing_type=sa.DATETIME(),
            nullable=True)
        op.alter_column(
            'clusters', 'created_on',
            existing_type=sa.DATETIME(), nullable=True)
        op.drop_constraint(None, 'columns', type_='foreignkey')
        op.drop_constraint(None, 'columns', type_='foreignkey')
        op.drop_column('columns', 'created_on')
        op.drop_column('columns', 'created_by_fk')
        op.drop_column('columns', 'changed_on')
        op.drop_column('columns', 'changed_by_fk')
        op.alter_column('css_templates', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('css_templates', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dashboards', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dashboards', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.create_unique_constraint(None, 'dashboards', ['slug'])
        op.alter_column('datasources', 'changed_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=True)
        op.alter_column('datasources', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('datasources', 'created_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=True)
        op.alter_column('datasources', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dbs', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dbs', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('slices', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('slices', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('sql_metrics', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('sql_metrics', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('table_columns', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('table_columns', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('tables', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('tables', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('url', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('url', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        ### end Alembic commands ###
    except:
        pass
    
    
def upgrade():
    op.add_column('logs', sa.Column('dt', sa.Date(), nullable=True))
    
        objects = session.query(Slice).all()
    objects += session.query(Dashboard).all()
    for obj in objects:
        if obj.created_by and obj.created_by not in obj.owners:
            obj.owners.append(obj.created_by)
        session.commit()
    session.close()
    
    # revision identifiers, used by Alembic.
revision = '430039611635'
down_revision = 'd827694c7555'
    
    Revision ID: 43df8de3a5f4
Revises: 7dbf98566af7
Create Date: 2016-01-18 23:43:16.073483
    
    
def pull_screenshot():
    c.screenshot('1.png')
    
        ix, iy = event.xdata, event.ydata
    coords = [(ix, iy)]
    print('now = ', coords)
    cor.append(coords)