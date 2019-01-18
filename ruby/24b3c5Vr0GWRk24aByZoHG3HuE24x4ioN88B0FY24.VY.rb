
        
                # Checks if the target machine is ready for communication. If this
        # returns true, then all the other methods for communicating with
        # the machine are expected to be functional.
        #
        # @return [Boolean]
        def ready?
          false
        end
    
              # Register a new provider class only if a name was given
          data[:providers].register(name.to_sym, &block) if name != UNSET_VALUE
    
            # The configuration for this provisioner. This will be an instance of
        # the `Config` class which is part of the provisioner.
        attr_reader :config
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
        shared_examples 'on a visible post' do
      it 'creates the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).to exist
        expect(response.code).to eq('201')
      end
    end
    
          get :new, params: {invite: {token: code.token}}
      expect(response).to redirect_to new_user_session_path
    end
    
            it 'reshares the absolute root' do
          post_request!
          expect(@post.reshares.count).to eq(0)
          expect(@root.reshares.count).to eq(2)
        end
      end
    end
  end
    
        desc 'Build all packages'
    task :all => GEMS_AND_ROOT_DIRECTORIES.keys
  end
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
    LogStash::Bundler.setup!
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
          prepare_package(explicit_plugins_specs, temp_path)
      LogStash::Util::Zip.compress(temp_path, @target)
    ensure
      FileUtils.rm_rf(temp_path)
    end
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
        puts('Updating #{filtered_plugins.collect(&:name).join(', ')}') unless filtered_plugins.empty?
    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
      # determine file list from git ls-files
  files = `git ls-files`.
    split('\n').
    sort.
    reject { |file| file =~ /^\./ }.
    reject { |file| file =~ /^(rdoc|pkg|test|Home\.md|\.gitattributes)/ }.
    map { |file| '    #{file}' }.
    join('\n')
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end
    
    module Jekyll
    
    
    
        def get_gist_url_for(gist, file)
      'https://gist.githubusercontent.com/raw/#{gist}/#{file}'
    end
    
    module Jekyll