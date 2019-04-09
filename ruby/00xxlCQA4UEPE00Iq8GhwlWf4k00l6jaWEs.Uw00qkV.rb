
        
            def name=(value)
      @name = value.try :strip
    end
    
            if root_path?
          (options[:skip] ||= []).concat ['', '/']
        end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
        alias log puts
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
            return nil
      end
    end
  end
end end end

    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
    Given /^I attach :attachment with:$/ do |definition|
  attach_attachment('attachment', definition)
end
    
    begin
  # Use mime/types/columnar if available, for reduced memory usage
  require 'mime/types/columnar'
rescue LoadError
  require 'mime/types'
end