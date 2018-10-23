
        
          describe 'migrating the 'make_message' format' do
    it 'should work' do
      expect(LiquidMigrator.convert_make_message('<message>')).to eq('{{message}}')
      expect(LiquidMigrator.convert_make_message('<new.message>')).to eq('{{new.message}}')
      expect(LiquidMigrator.convert_make_message('Hello <world>. How is <nested.life>')).to eq('Hello {{world}}. How is {{nested.life}}')
    end
  end
    
          puts 'Moving #{old_path} to #{new_path}...' if $stdout.tty?
      path.dirname.mkpath
      FileUtils.mv old_path, new_path
    end
  end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      # Integration tests
  gem 'diffy'
  gem 'clintegracon'
    
      module Generator
    autoload :Acknowledgements,        'cocoapods/generator/acknowledgements'
    autoload :Markdown,                'cocoapods/generator/acknowledgements/markdown'
    autoload :Plist,                   'cocoapods/generator/acknowledgements/plist'
    autoload :BridgeSupport,           'cocoapods/generator/bridge_support'
    autoload :Constant,                'cocoapods/generator/constant'
    autoload :CopyResourcesScript,     'cocoapods/generator/copy_resources_script'
    autoload :DummySource,             'cocoapods/generator/dummy_source'
    autoload :EmbedFrameworksScript,   'cocoapods/generator/embed_frameworks_script'
    autoload :Header,                  'cocoapods/generator/header'
    autoload :InfoPlistFile,           'cocoapods/generator/info_plist_file'
    autoload :ModuleMap,               'cocoapods/generator/module_map'
    autoload :PrefixHeader,            'cocoapods/generator/prefix_header'
    autoload :UmbrellaHeader,          'cocoapods/generator/umbrella_header'
    autoload :AppTargetHelper,         'cocoapods/generator/app_target_helper'
  end
    
        # Checks that the lockfile exists.
    #
    # @raise  If the lockfile does not exists.
    #
    # @return [void]
    #
    def verify_lockfile_exists!
      unless config.lockfile
        raise Informative, 'No `Podfile.lock' found in the project directory, run `pod install'.'
      end
    end
    
          def initialize(argv)
        super
        config.silent = false
      end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
            if built_in_scm_name?
          load_built_in_scm
        else
          # Compatibility with existing 3.x third-party SCMs
          register_legacy_scm_hooks
          load_legacy_scm_by_name
        end
      end
    
        # Pulled from Rack::ShowExceptions in order to override TEMPLATE.
    # If Rack provides another way to override, this could be removed
    # in the future.
    def pretty(env, exception)
      req = Rack::Request.new(env)
    
            elsif masked_token?(token)
          token = unmask_token(token)
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil