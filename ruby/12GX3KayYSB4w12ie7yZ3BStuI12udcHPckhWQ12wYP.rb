      keys = Spaceship::Portal::Key.all
      expect(keys.size).to eq(2)
      expect(keys.sample).to be_instance_of(Spaceship::Portal::Key)
    end
  end
    
          def self.category
        :misc
      end
    end
  end
end

    
    module Fastlane
  class CrashlyticsProjectParser
    # @param project_file_path path to a .xcodeproj file
    def initialize(config = {})
      FastlaneCore::Project.detect_projects(config)
      @project = FastlaneCore::Project.new(config, xcodebuild_list_silent: true, xcodebuild_suppress_stderr: true)
    
            expect(result).to eq('git rev-parse --short HEAD')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git rev-parse --short HEAD')
      end
    end
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
          less.gsub /&:extend\((#{SELECTOR_RE})(?: all)?\)/ do
        selector = $1
        selector =~ /\.([\w-]+)/
        mixin    = $1
        if mixin && mixin_names.include?(mixin)
          '@include #{mixin}'
        else
          '@extend #{selector}'
        end
      end
    end
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Do not fallback to assets pipeline if a precompiled asset is missed.
  config.assets.compile = false
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
    module Sinatra
  class Application < Base
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
        { # yes, this is ugly, feel free to change that
      '/..' => '/', '/a/../b' => '/b', '/a/../b/' => '/b/', '/a/.' => '/a/',
      '/%2e.' => '/', '/a/%2E%2e/b' => '/b', '/a%2f%2E%2e%2Fb/' => '/b/',
      '//' => '/', '/%2fetc%2Fpasswd' => '/etc/passwd'
    }.each do |a, b|
      it('replaces #{a.inspect} with #{b.inspect}') { expect(get(a).body).to eq(b) }
    end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::XSSHeader, :xss_mode => :foo
      run DummyApp
    end
    
          content_type 'application/json'
      LogStash::Json.dump(data, {:pretty => pretty?})
    else
      content_type 'text/plain'
      data.to_s
    end
  end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end