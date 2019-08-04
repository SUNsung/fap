
        
            if args.action == 'start':
        return start(args)
    elif args.action == 'resume':
        return resume(args)
    elif args.action == 'cancel':
        return cancel(args)
    elif args.action == 'finalize':
        return finalize(args)
    
            if len(parts) == 2:
            if parts[0] == 'container':
                type, source = parts
                return cls(source, 'rw', type)
    
        @property
    def human_readable_state(self):
        if self.is_paused:
            return 'Paused'
        if self.is_restarting:
            return 'Restarting'
        if self.is_running:
            return 'Ghost' if self.get('State.Ghost') else self.human_readable_health_status
        else:
            return 'Exit %s' % self.get('State.ExitCode')
    
            diff = len(lines) - lines[image_id]
    
        for color_func in cycle([no_color] if monochrome else colors.rainbow()):
        yield LogPresenter(prefix_width, color_func)
    
    from .version import ComposeVersion
    
                    if not volume_exists:
                    log.info(
                        'Creating volume '{0}' with {1} driver'.format(
                            volume.full_name, volume.driver or 'default'
                        )
                    )
                    volume.create()
                else:
                    check_remote_volume_config(volume.inspect(legacy=volume.legacy), volume)
        except NotFound:
            raise ConfigurationError(
                'Volume %s specifies nonexistent driver %s' % (volume.name, volume.driver)
            )
    
    
def rewrite_net(service, service_names):
    if 'net' in service:
        network_mode = service.pop('net')
    
    For the last line of text, it should be left justified and no extra space is
inserted between words.
    
        def tearDown(self):
        import os
        os.remove(self.file_in_name)
        os.remove(self.file_out_bin_name)
        os.remove(self.file_out_name)