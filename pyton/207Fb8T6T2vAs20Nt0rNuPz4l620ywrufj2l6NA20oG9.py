
        
            if state == 'present':
        for required in ['name', 'description', 'subnets']:
            if not module.params.get(required):
                module.fail_json(msg=str('Parameter %s required for state='present'' % required))
    else:
        for not_allowed in ['description', 'subnets']:
            if module.params.get(not_allowed):
                module.fail_json(msg=str('Parameter %s not allowed for state='absent'' % not_allowed))
    
    RETURN = ''' # '''
    
        def parse(parts):
        if is_version_higher_than_5_18():
            return parse_current(parts)
        else:
            return parse_older_versions(parts)
    
    if __name__ == '__main__':
    python_path = os.path.abspath( os.path.join(current_path, os.pardir, os.pardir, 'python27', '1.0'))
    
        app.on_startup.append(real_ip_startup)
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
    
        # Flag to indicate if this migration is too risky
    # to run online and needs to be coordinated for offline
    is_dangerous = True
    
    
class EventTag(Model):
    __core__ = False
    
        This **does not** guarantee that the correct value is written into the cache
    though it will correct itself in the next update window.
    '''
    cutoff_dt = timezone.now() - timedelta(seconds=cutoff)
    # TODO(dcramer): this doesnt handle deleted options (which shouldn't be allowed)
    for option in Option.objects.filter(last_updated__gte=cutoff_dt).iterator():
        try:
            opt = default_manager.lookup_key(option.key)
            default_manager.store.set_cache(opt, option.value)
        except UnknownOption as e:
            logger.exception(six.text_type(e))
