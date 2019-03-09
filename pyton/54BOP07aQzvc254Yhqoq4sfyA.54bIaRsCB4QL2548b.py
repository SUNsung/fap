
        
            i = None
    if mod_params['instance_id']:
        config_name = get_spanner_configuration_name(
            mod_params['configuration'], params['project_id'])
        i = spanner_client.instance(mod_params['instance_id'],
                                    configuration_name=config_name)
    d = None
    if mod_params['database_name']:
        # TODO(supertom): support DDL
        ddl_statements = ''
        d = i.database(mod_params['database_name'], ddl_statements)
    
    
if __name__ == '__main__':
    main()

    
            if query_log_status(module, le_path, log):
            module.fail_json(msg='failed to remove '%s': %s' % (log, err.strip()))
    
        :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''