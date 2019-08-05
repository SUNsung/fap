
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
            :param obj: an import name or object
        '''
        if isinstance(obj, string_types):
            obj = import_string(obj)
        for key in dir(obj):
            if key.isupper():
                self[key] = getattr(obj, key)
    
        :param template_name_or_list: the name of the template to be
                                  rendered, or an iterable with template names
                                  the first one existing will be rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(
        ctx.app.jinja_env.get_or_select_template(template_name_or_list),
        context,
        ctx.app,
    )
    
        def get_images_to_push(self):
        tags_to_push = {
            '{}:{}'.format(NAME, self.version),
            self.get_runtime_image_tag(Platform.ALPINE),
            self.get_runtime_image_tag(Platform.DEBIAN),
            self.get_ucp_test_image_tag(),
            self.get_ucp_test_image_tag('latest'),
        }
        if is_tag_latest(self.version):
            tags_to_push.add('{}:latest'.format(NAME))
        return tags_to_push
    
        ports = make_port_specs(service_dict)
    if ports:
        container_config['Ports'] = ports
    
    
def test_push_image(mock_service):
    mock_service.options['build'] = '.'
    mock_service.options['image'] = image_id = 'abcd'
    mock_service.push.return_value = expected = 'sha256:thedigest'
    mock_service.image.return_value = {'RepoDigests': []}
    
    from .utils import ScriptError
    
        def load(self, loader):
        loader.add_option(
            'rfile', typing.Optional[str], None,
            'Read flows from file.'
        )
        loader.add_option(
            'readfile_filter', typing.Optional[str], None,
            'Read only matching flows.'
        )
    
        def configure(self, updated):
        if 'stickycookie' in updated:
            if ctx.options.stickycookie:
                flt = flowfilter.parse(ctx.options.stickycookie)
                if not flt:
                    raise exceptions.OptionsError(
                        'stickycookie: invalid filter expression: %s' % ctx.options.stickycookie
                    )
                self.flt = flt
            else:
                self.flt = None
    
        def configure(self, updated):
        if 'stream_large_bodies' in updated and ctx.options.stream_large_bodies:
            try:
                self.max_size = human.parse_size(ctx.options.stream_large_bodies)
            except ValueError as e:
                raise exceptions.OptionsError(e)
    
        def call_strings(self, path: str, args: typing.Sequence[str]) -> typing.Any:
        '''
            Call a command using a list of string arguments. May raise CommandError.
        '''
        if path not in self.commands:
            raise exceptions.CommandError('Unknown command: %s' % path)
        return self.commands[path].call(args)