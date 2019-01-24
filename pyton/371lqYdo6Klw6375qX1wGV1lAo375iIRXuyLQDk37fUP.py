
        
            def notify_call_completed(self, call):
        pass
    
        HEART = 0
    DIAMOND = 1
    CLUBS = 2
    SPADE = 3
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
    
class HashTable(object):
    
        def _targets_request(self, targets):
        '''Formats each target for the request'''
        targets_request = []
        for target in targets:
            target_request = {
                'Id': target['id'],
                'Arn': target['arn']
            }
            if 'input' in target:
                target_request['Input'] = target['input']
            if 'input_path' in target:
                target_request['InputPath'] = target['input_path']
            if 'role_arn' in target:
                target_request['RoleArn'] = target['role_arn']
            if 'ecs_parameters' in target:
                target_request['EcsParameters'] = {}
                ecs_parameters = target['ecs_parameters']
                if 'task_definition_arn' in target['ecs_parameters']:
                    target_request['EcsParameters']['TaskDefinitionArn'] = ecs_parameters['task_definition_arn']
                if 'task_count' in target['ecs_parameters']:
                    target_request['EcsParameters']['TaskCount'] = ecs_parameters['task_count']
            targets_request.append(target_request)
        return targets_request
    
    try:
    from ast import literal_eval
    HAS_PYTHON26 = True
except ImportError:
    HAS_PYTHON26 = False
    
            for rule in rules:
            firewall_rule = oneandone.client.FirewallPolicyRule(
                protocol=rule['protocol'],
                port_from=rule['port_from'],
                port_to=rule['port_to'],
                source=rule['source'])
            firewall_rules.append(firewall_rule)
    
    
def present(configuration_facts, cursor, parameter_name, current_value):
    parameter_key = parameter_name.lower()
    changed = False
    if current_value and current_value.lower() != configuration_facts[parameter_key]['current_value'].lower():
        cursor.execute('select set_config_parameter('{0}', '{1}')'.format(parameter_name, current_value))
        changed = True
    if changed:
        configuration_facts.update(get_configuration_facts(cursor, parameter_name))
    return changed
    
        try:
        dsn = (
            'Driver=Vertica;'
            'Server=%s;'
            'Port=%s;'
            'Database=%s;'
            'User=%s;'
            'Password=%s;'
            'ConnectionLoadBalance=%s'
        ) % (module.params['cluster'], module.params['port'], db,
             module.params['login_user'], module.params['login_password'], 'true')
        db_conn = pyodbc.connect(dsn, autocommit=True)
        cursor = db_conn.cursor()
    except Exception as e:
        module.fail_json(msg='Unable to connect to database: %s.' % to_native(e), exception=traceback.format_exc())
    
        try:
        schema_facts = get_schema_facts(cursor)
        if module.check_mode:
            changed = not check(schema_facts, schema, usage_roles, create_roles, owner)
        elif state == 'absent':
            try:
                changed = absent(schema_facts, cursor, schema, usage_roles, create_roles)
            except pyodbc.Error as e:
                module.fail_json(msg=to_native(e), exception=traceback.format_exc())
        elif state == 'present':
            try:
                changed = present(schema_facts, cursor, schema, usage_roles, create_roles, owner)
            except pyodbc.Error as e:
                module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    except NotSupportedError as e:
        module.fail_json(msg=to_native(e), ansible_facts={'vertica_schemas': schema_facts})
    except CannotDropError as e:
        module.fail_json(msg=to_native(e), ansible_facts={'vertica_schemas': schema_facts})
    except SystemExit:
        # avoid catching this on python 2.4
        raise
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
    # Copyright (c) 2016, Loic Blot <loic.blot@unix-experience.fr>
# Copyright (c) 2018, Ansible Project
# Sponsored by Infopro Digital. http://www.infopro-digital.com/
# Sponsored by E.T.A.I. http://www.etai.fr/
#
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    import time
import re
    
    
def best_server(probe_nat=False):
    best_server = None
    prober = new_pteredor(probe_nat=probe_nat)
    prober.qualified = True
    if not probe_nat:
        prober.nat_type = 'unknown'
        prober.rs_cone_flag = 0
    
    
def gae_application(environ, start_response):
    cookie = environ.get('HTTP_COOKIE', '')
    options = environ.get('HTTP_X_GOA_OPTIONS', '')
    if environ['REQUEST_METHOD'] == 'GET' and not cookie:
        if '204' in environ['QUERY_STRING']:
            start_response('204 No Content', [])
            yield ''
        else:
            timestamp = long(os.environ['CURRENT_VERSION_ID'].split('.')[1])/2**28
            ctime = time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime(timestamp+8*3600))
            html = u'GoAgent Python Server %s \u5df2\u7ecf\u5728\u5de5\u4f5c\u4e86\uff0c\u90e8\u7f72\u65f6\u95f4 %s\n' % (__version__, ctime)
            start_response('200 OK', [('Content-Type', 'text/plain; charset=utf-8')])
            yield html.encode('utf8')
        raise StopIteration
    
            raise NotImplementedError
    
    def setCharPositionInLine(self, pos):
        '''@brief Set the column of the tokens first character,
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/browser/
'''
import voluptuous as vol
    
            now = dt_util.now()
        actiontec_data = self.get_actiontec_data()
        if not actiontec_data:
            return False
        self.last_results = [Device(data['mac'], name, now)
                             for name, data in actiontec_data.items()
                             if data['timevalid'] > -60]
        _LOGGER.info('Scan successful')
        return True
    
            self.success_init = self._update_info()
        _LOGGER.info('Scanner initialized')
    
            options = self._options
    
            return web.Response(text=resp_text, content_type='text/xml')