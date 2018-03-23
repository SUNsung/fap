
        
                name, domain = args[0:2]
        module = sanitize_module_name(name)
    
            no_gamma_ds = self.get_or_create(
            DruidDatasource, {'datasource_name': 'datasource_not_for_gamma'},
            db.session)
        no_gamma_ds.cluster = cluster
        db.session.merge(no_gamma_ds)
        db.session.commit()
    
    # If false, no module index is generated.
#texinfo_domain_indices = True
    
        def test_subselect(self):
        query = '''
          SELECT sub.*
              FROM (
                    SELECT *
                      FROM s1.t1
                     WHERE day_of_week = 'Friday'
                   ) sub, s2.t2
          WHERE sub.resolution = 'NONE'
        '''
        self.assertEquals({'s1.t1', 's2.t2'},
                          self.extract_tables(query))
    
        worker = celery_app.Worker(optimization='fair')
    worker.start()
    
    def downgrade():
    constraint = find_constraint_name(False) or 'fk_columns_datasource_name_datasources'
    with op.batch_alter_table('columns',
        naming_convention=naming_convention) as batch_op:
        batch_op.drop_constraint(constraint, type_='foreignkey')
        batch_op.create_foreign_key(
            'fk_columns_column_name_datasources',
            'datasources',
            ['column_name'], ['datasource_name'])

    
    # revision identifiers, used by Alembic.
revision = '18e88e1cc004'
down_revision = '430039611635'
    
        urls = []