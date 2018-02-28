
        
        
def get_meta(data):
    meta = {'hostvars': {}}
    for node in data:
        meta['hostvars'][node['hostname']] = {'tags': node['tags']}
    return meta
    
        def remove_role(self, role_name):
        del self.roles[role_name]

    
            try:
            parts = role_name.split('.')
            user_name = '.'.join(parts[0:-1])
            role_name = parts[-1]
            if notify:
                display.display('- downloading role '%s', owned by %s' % (role_name, user_name))
        except:
            raise AnsibleError('Invalid role name (%s). Specify role as format: username.rolename' % role_name)
    
            # zone, resource, entity, method
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/zones/us-east1-c/instanceGroupManagers/my-mig/recreateInstances'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertEquals('us-east1-c', actual['zone'])
        self.assertEquals('instanceGroupManagers', actual['resource_name'])
        self.assertEquals('my-mig', actual['entity_name'])
        self.assertEquals('recreateInstances', actual['method_name'])
    
    
class TerminalModule(TerminalBase):
    
        for pvm_list in duplicates:
        first_prm = pvm_list[0]
        roles = set(first_prm.role)
        for pvm in pvm_list[1:]:
            roles = roles.union(pvm.role)
            sm.get_session.delete(pvm)
        first_prm.roles = list(roles)
    sm.get_session.commit()
    
    
@manager.option(
    '-v', '--verbose', action='store_true',
    help='Show extra information')
def version(verbose):
    '''Prints the current version number'''
    print(Fore.BLUE + '-=' * 15)
    print(Fore.YELLOW + 'Superset ' + Fore.CYAN + '{version}'.format(
        version=config.get('VERSION_STRING')))
    print(Fore.BLUE + '-=' * 15)
    if verbose:
        print('[DB] : ' + '{}'.format(db.engine))
    print(Style.RESET_ALL)
    
    
class TableModelView(DatasourceModelView, DeleteMixin, YamlExportMixin):  # noqa
    datamodel = SQLAInterface(models.SqlaTable)
    
        @property
    def data(self):
        # work around for https://github.com/pandas-dev/pandas/issues/18372
        return [dict((k, _maybe_box_datetimelike(v))
                     for k, v in zip(self.__df.columns, np.atleast_1d(row)))
                for row in self.__df.values]
    
    FORM_DATA_KEY_WHITELIST = list(frontend_config.get('controls').keys()) + ['slice_id']
    
    
def upgrade():
    op.add_column('datasources', sa.Column('params', sa.String(length=1000), nullable=True))