
        
          gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Given(/^a test app without any configuration$/) do
  TestApp.create_test_app
end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          def properties
        @properties ||= Properties.new
      end
    
    module Capistrano
  class Configuration
    # Holds the variables assigned at Capistrano runtime via `set` and retrieved
    # with `fetch`. Does internal bookkeeping to help identify user mistakes
    # like spelling errors or unused variables that may lead to unexpected
    # behavior.
    class Variables
      CAPISTRANO_LOCATION = File.expand_path('../..', __FILE__).freeze
      IGNORED_LOCATIONS = [
        '#{CAPISTRANO_LOCATION}/configuration/variables.rb:',
        '#{CAPISTRANO_LOCATION}/configuration.rb:',
        '#{CAPISTRANO_LOCATION}/dsl/env.rb:',
        '/dsl.rb:',
        '/forwardable.rb:'
      ].freeze
      private_constant :CAPISTRANO_LOCATION, :IGNORED_LOCATIONS
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
          !File.exists?(File.join(LogStash::Environment::LOGSTASH_HOME, 'x-pack'))
    end
    
    module LogStash
  module PluginManager
  end
end
    
      class OfflinePluginPackager
    LOGSTASH_DIR = 'logstash'
    DEPENDENCIES_DIR = ::File.join(LOGSTASH_DIR, 'dependencies')
    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
    module URI
  ;
  class << self
# Does the char code correspond to an alpha-numeric char.
# isAlphaNumeric('a'.ord) => true
# isAlphaNumeric(''.ord) => false
    def isAlphaNumeric(cc)
      # a - z
      if (97 <= cc && cc <= 122);
        return true
      end
      # A - Z
      if (65 <= cc && cc <= 90);
        return true
      end
      # 0 - 9
      if (48 <= cc && cc <= 57);
        return true
      end
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
        end
  end
end

    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
    desc 'Update version number and gemspec'
task :bump do
  puts 'Updated version to #{bump_version}'
  # Execute does not invoke dependencies.
  # Manually invoke gemspec then validate.
  Rake::Task[:gemspec].execute
  Rake::Task[:validate].execute
end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
      s.authors  = ['Tom Preston-Werner', 'Rick Olson']
  s.email    = 'tom@github.com'
  s.homepage = 'http://github.com/gollum/gollum'