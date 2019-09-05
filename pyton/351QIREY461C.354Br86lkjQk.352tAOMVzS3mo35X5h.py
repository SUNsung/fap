
        
            def __init__(self, deep, *targets):
        self.deep = deep
        self.targets = targets
        self.commit()
    
    *TL;DR
Defines the skeleton of a base algorithm, deferring definition of exact
steps to subclasses.
    
    ### OUTPUT ###
# We have a lovely Cat
# It says meow
#
# We have a lovely Dog
# It says woof
# ====================
# We have a lovely Cat
# It says meow
# ====================
# We have a lovely Cat
# It says meow
# ====================

    
        rm1.state = 'Idle'
    rm2.state = 'Running'
    
        print('Unexpected action '{}''.format(args.action), file=sys.stderr)
    return 1
    
        def create_release_branch(self, version, base=None):
        print('Creating release branch {} based on {}...'.format(version, base or 'master'))
        remote = self.find_remote(self.gh_repo.full_name)
        br_name = branch_name(version)
        remote.fetch()
        if self.branch_exists(br_name):
            raise ScriptError(
                'Branch {} already exists locally. Please remove it before '
                'running the release script, or use `resume` instead.'.format(
                    br_name
                )
            )
        if base is not None:
            base = self.git_repo.tag('refs/tags/{}'.format(base))
        else:
            base = 'refs/remotes/{}/master'.format(remote.name)
        release_branch = self.git_repo.create_head(br_name, commit=base)
        release_branch.checkout()
        self.git_repo.git.merge('--strategy=ours', '--no-edit', '{}/release'.format(remote.name))
        with release_branch.config_writer() as cfg:
            cfg.set_value('release', version)
        return release_branch
    
        if 'healthcheck' in service_dict:
        if 'interval' in service_dict['healthcheck']:
            service_dict['healthcheck']['interval'] = serialize_ns_time_value(
                service_dict['healthcheck']['interval']
            )
        if 'timeout' in service_dict['healthcheck']:
            service_dict['healthcheck']['timeout'] = serialize_ns_time_value(
                service_dict['healthcheck']['timeout']
            )
    
                # Environment has priority over .env file
            os.environ['COMPOSE_PROJECT_NAME'] = 'namefromenv'
            assert get_project_name(base_dir) == os.environ['COMPOSE_PROJECT_NAME']
        finally:
            shutil.rmtree(base_dir)
    
    
class DependencyError(ConfigurationError):
    pass
    
        tls_attr_name = 'PROTOCOL_{}'.format(compose_tls_version)
    if not hasattr(ssl, tls_attr_name):
        log.warning(
            'The '{}' protocol is unavailable. You may need to update your '
            'version of Python or OpenSSL. Falling back to TLSv1 (default).'
            .format(compose_tls_version)
        )
        return None
    
    
def rewrite_logging(service):
    if 'log_driver' in service:
        service['logging'] = {'driver': service.pop('log_driver')}
        if 'log_opt' in service:
            service['logging']['options'] = service.pop('log_opt')
    
    
def test_to_bundle():
    image_digests = {'a': 'aaaa', 'b': 'bbbb'}
    services = [
        {'name': 'a', 'build': '.', },
        {'name': 'b', 'build': './b'},
    ]
    config = Config(
        version=V2_0,
        services=services,
        volumes={'special': {}},
        networks={'extra': {}},
        secrets={},
        configs={}
    )
    
            assert fake_log.error.call_count == 1
        assert '123' in fake_log.error.call_args[0][0]