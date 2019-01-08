
        
        
@bp.route('/')
def index():
    '''Show all the posts, most recent first.'''
    db = get_db()
    posts = db.execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' ORDER BY created DESC'
    ).fetchall()
    return render_template('blog/index.html', posts=posts)
    
        return g.db
    
    
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('a', 'test', b'Incorrect username.'),
    ('test', 'a', b'Incorrect password.'),
))
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
            Internally this is implemented by going through a temporary test
        request context and since session handling could depend on
        request variables this function accepts the same arguments as
        :meth:`~flask.Flask.test_request_context` which are directly
        passed through.
        '''
        if self.cookie_jar is None:
            raise RuntimeError('Session transactions only make sense '
                               'with cookies enabled.')
        app = self.application
        environ_overrides = kwargs.setdefault('environ_overrides', {})
        self.cookie_jar.inject_wsgi(environ_overrides)
        outer_reqctx = _request_ctx_stack.top
        with app.test_request_context(*args, **kwargs) as c:
            session_interface = app.session_interface
            sess = session_interface.open_session(app, c.request)
            if sess is None:
                raise RuntimeError('Session backend did not open a session. '
                                   'Check the configuration')
    
            class SecretView(View):
            methods = ['GET']
            decorators = [superuser_required]
    
        parts[-1] += 1
    return '.'.join(map(str, parts))
    
            # The rule matches AWS only if all rule data fields are equal
        # to their corresponding local value defined in the task
        return all([
            getattr(self.rule, field) == aws_rule_data.get(field, None)
            for field in self.RULE_FIELDS
        ])
    
        if mod_params['state'] == 'absent':
        # Remove the most granular resource.  If database is specified
        # we remove it.  If only instance is specified, that is what is removed.
        if d is not None and d.exists():
            d.drop()
            changed = True
        else:
            if i.exists():
                if mod_params['force_instance_delete']:
                    i.delete()
                else:
                    module.fail_json(
                        msg=(('Cannot delete Spanner instance: '
                              ''force_instance_delete' argument not specified')))
                changed = True
    elif mod_params['state'] == 'present':
        if not i.exists():
            i = spanner_client.instance(mod_params['instance_id'],
                                        configuration_name=config_name,
                                        display_name=mod_params['instance_display_name'],
                                        node_count=mod_params['node_count'] or 1)
            i.create()
            changed = True
        else:
            # update instance
            i.reload()
            inst_prev_vals = {}
            if i.display_name != mod_params['instance_display_name']:
                inst_prev_vals['instance_display_name'] = i.display_name
                i.display_name = mod_params['instance_display_name']
            if mod_params['node_count']:
                if i.node_count != mod_params['node_count']:
                    inst_prev_vals['node_count'] = i.node_count
                    i.node_count = mod_params['node_count']
            if inst_prev_vals:
                changed = instance_update(i)
                json_output['updated'] = changed
                json_output['previous_values'] = {'instance': inst_prev_vals}
        if d:
            if not d.exists():
                d.create()
                d.reload()
                changed = True
    
            monitoring_policy = oneandone_conn.delete_monitoring_policy_port(
            monitoring_policy_id=monitoring_policy_id,
            port_id=port_id)
        return monitoring_policy
    except Exception as ex:
        module.fail_json(msg=str(ex))
    
        try:
        dsn = (
            'Driver=Vertica;'
            'Server={0};'
            'Port={1};'
            'Database={2};'
            'User={3};'
            'Password={4};'
            'ConnectionLoadBalance={5}'
        ).format(module.params['cluster'], module.params['port'], db,
                 module.params['login_user'], module.params['login_password'], 'true')
        db_conn = pyodbc.connect(dsn, autocommit=True)
        cursor = db_conn.cursor()
    except Exception as e:
        module.fail_json(msg='Unable to connect to database: {0}.'.format(to_native(e)))
    
        if followed_count > 0:
        module.exit_json(changed=True, msg='followed %d log(s)' % (followed_count,))
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
        def syntax(self):
        return '[options]'