
        
        lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
          def warn_set_scm_is_deprecated
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure your project is compatible with future versions of Capistrano,
remove the :scm setting and instead add these lines to your Capfile after
`require 'capistrano/deploy'`:
    
            true
      end
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
    require 'bootstrap/environment'
    
        def execute
      temp_path = generate_temporary_path
      packet_gem = Paquet::Gem.new(temp_path, LogStash::Environment::CACHE_PATH)
    
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

    
      namespace :vm do
    
    desc 'Clean up files.'
task :clean do |t|
  FileUtils.rm_rf 'doc'
  FileUtils.rm_rf 'tmp'
  FileUtils.rm_rf 'pkg'
  FileUtils.rm_rf 'public'
  FileUtils.rm 'test/debug.log' rescue nil
  FileUtils.rm 'test/paperclip.db' rescue nil
  Dir.glob('paperclip-*.gem').each{|f| FileUtils.rm f }
end

    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
    After do
  ORIGINAL_BUNDLE_VARS.each_pair do |key, value|
    ENV[key] = value
  end
end
    
        private
    
        def register_new_attachment
      Paperclip::AttachmentRegistry.register(@klass, @name, @options)
    end