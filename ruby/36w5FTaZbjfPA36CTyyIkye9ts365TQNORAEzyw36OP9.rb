
        
        gem 'responders', '~> 2.4'
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      protected
    
      def index
    render plain: 'Home'
  end
end
    
      module Controllers
    autoload :Helpers,        'devise/controllers/helpers'
    autoload :Rememberable,   'devise/controllers/rememberable'
    autoload :ScopedViews,    'devise/controllers/scoped_views'
    autoload :SignInOut,      'devise/controllers/sign_in_out'
    autoload :StoreLocation,  'devise/controllers/store_location'
    autoload :UrlHelpers,     'devise/controllers/url_helpers'
  end
    
    desc 'LESS to stdin -> Sass to stdout'
task :less_to_scss, :branch do |t, args|
  require './tasks/converter'
  puts Converter.new(branch: args[:branch]).convert_less(STDIN.read)
end
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
      def execute
    signal_deprecation_warning_for_pack
    
        desc 'Run one single machine acceptance test'
    task :single, :machine do |t, args|
      ENV['LS_VAGRANT_HOST']  = args[:machine]
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/**/*_spec.rb']]))
    end
  end
end
