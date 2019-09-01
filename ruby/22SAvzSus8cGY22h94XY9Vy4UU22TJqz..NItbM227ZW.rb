
        
            # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
          it 'uses the custom arguments if given' do
        opts[:args] = ['--verbose', '-z']
    
        let(:cmd) { 'find /vagrant -path /vagrant/.vagrant -prune -o '!' -type l -a '(' ! -user vagrant -or ! -group vagrant ')' -exec chown vagrant:vagrant '{}' +' }
    let(:no_exclude_cmd) { 'find /vagrant '!' -type l -a '(' ! -user vagrant -or ! -group vagrant ')' -exec chown vagrant:vagrant '{}' +' }
    
        it 'returns all the machines' do
      configure do |config|
        config.vm.define 'foo'
        config.vm.define 'bar', autostart: false
        config.vm.define 'baz', autostart: true
      end
    
    describe VagrantPlugins::DockerProvider::Driver::Compose do
  let(:cmd_executed) { @cmd }
  let(:cid)          { 'side-1-song-10' }
  let(:docker_yml){ double('docker-yml', path: '/tmp-file') }
  let(:machine){ double('machine', env: env, name: :docker_1, id: :docker_id, provider_config: provider_config) }
  let(:compose_configuration){ {} }
  let(:provider_config) do
    double('provider-config',
      compose: true,
      compose_configuration: compose_configuration
    )
  end
  let(:env) do
    double('env',
      cwd: Pathname.new('/compose/cwd'),
      local_data_path: local_data_path
    )
  end
  let(:composition_content){ '--- {}\n' }
  let(:composition_path) do
    double('composition-path',
      to_s: 'docker-compose.yml',
      exist?: true,
      read: composition_content,
      delete: true
    )
  end
  let(:data_directory){ double('data-directory', join: composition_path) }
  let(:local_data_path){ double('local-data-path') }
  let(:compose_execute_up){ ['docker-compose', '-f', 'docker-compose.yml', '-p', 'cwd', 'up', '--remove-orphans', '-d', {}] }
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
        # TODO: Remove to_url once write_page changes are merged.
    @wiki.write_page('ééééé'.to_url, :markdown, '한글 text', commit_details)
    page = @wiki.page('eeeee')
    assert_equal '한글 text', utf8(page.raw_data)
  end
    
    require 'rake/testtask'
Rake::TestTask.new(:test) do |test|
  test.libs << 'lib' << 'test' << '.'
  test.pattern = 'test/**/test_*.rb'
  test.verbose = true
end
    
      begin
    require 'gollum-lib'
    wiki = Gollum::Wiki.new(gollum_path, wiki_options)
    if !wiki.exist? then
      raise Gollum::InvalidGitRepositoryError
    end
    if wiki_options[:plantuml_url]
      Gollum::Filter::PlantUML.configure do |config|
        puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
        config.url = wiki_options[:plantuml_url]
      end
    end
    puts
    puts 'Loaded Gollum wiki at:'
    puts '#{File.expand_path(gollum_path).inspect}'
    puts
    puts 'Example API calls:'
    puts %(    page = wiki.page('page-name'))
    puts %(    # => <Gollum::Page>)
    puts
    puts %(    page.raw_data)
    puts %(    # => '# My wiki page')
    puts
    puts %(    page.formatted_data)
    puts %(    # => '<h1>My wiki page</h1>')
    puts
    puts 'Full API documentation at:'
    puts 'https://github.com/gollum/gollum-lib'
    puts
    IRB.start_session(binding)
  rescue Gollum::InvalidGitRepositoryError, Gollum::NoSuchPathError
    puts 'Invalid Gollum wiki at #{File.expand_path(gollum_path).inspect}'
    exit 0
  end
else
  require 'gollum/app'
  Precious::App.set(:gollum_path, gollum_path)
  Precious::App.set(:wiki_options, wiki_options)
  Precious::App.settings.mustache[:templates] = wiki_options[:template_dir] if wiki_options[:template_dir]