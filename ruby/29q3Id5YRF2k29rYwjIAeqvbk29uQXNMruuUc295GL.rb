
        
                FastlaneCore::CertChecker.installed_identies
      end
    end
    
          describe 'running with fastlane' do
        before do
          allow(FastlaneCore::Helper).to receive(:fastlane_enabled?).and_return(true)
          allow(FastlaneCore::FastlaneFolder).to receive(:path).and_return('./fastlane')
    
    output = File.new(OUTPUT_FILENAME, 'wb')
output.write(xml.target!)
output.close
    
    World(RemoteCommandHelpers)

    
          def with(properties)
        properties.each { |key, value| add_property(key, value) }
        self
      end
    
        # @return [String] the ruby version string bundler uses to craft its gem path
    def gem_ruby_version
      RbConfig::CONFIG['ruby_version']
    end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
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

    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
      # Install this package to the staging directory
  def install_to_staging(setup_py)
    project_dir = File.dirname(setup_py)
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]
    
      # Input a zipfile.
  def input(input_path)
    # use part of the filename as the package name
    self.name = File.extname(input_path)[1..-1]
    
    Given 'I remove turbolinks' do
  cd('.') do
    transform_file('app/assets/javascripts/application.js') do |content|
      content.gsub('//= require turbolinks', '')
    end
    transform_file('app/views/layouts/application.html.erb') do |content|
      content.gsub(', 'data-turbolinks-track' => true', '')
    end
  end
end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        # Returns the interpolated URL. Will raise an error if the url itself
    # contains ':url' to prevent infinite recursion. This interpolation
    # is used in the default :path to ease default specifications.
    RIGHT_HERE = '#{__FILE__.gsub(%r{\A\./}, '')}:#{__LINE__ + 3}'
    def url attachment, style_name
      raise Errors::InfiniteInterpolationError if caller.any?{|b| b.index(RIGHT_HERE) }
      attachment.url(style_name, :timestamp => false, :escape => false)
    end