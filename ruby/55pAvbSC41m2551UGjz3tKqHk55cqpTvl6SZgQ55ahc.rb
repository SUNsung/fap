
        
            def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
          def process_response(response)
        super.merge! response_effective_path: response.effective_path, response_path: response.path
      end
    
            title = at_css('h1').content.strip
        if root_page?
          at_css('h1').content = 'Angular 2 Documentation'
        elsif title == 'Index'
          at_css('h1').content = result[:entries].first.name
        elsif title == 'Angular'
          at_css('h1').content = slug.split('/').last.gsub('-', ' ')
        elsif at_css('.breadcrumbs') && title != result[:entries].first.name
          at_css('h1').content = result[:entries].first.name
        end
    
            name = name.split(':').first
    
        Thread.pass until running
    Thread.pass while t.status and t.status != 'sleep'
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
    module LogStash
  module PluginManager
  end
end
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
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

    
      def update_gems!
    # If any error is raise inside the block the Gemfile will restore a backup of the Gemfile
    previous_gem_specs_map = find_latest_gem_specs
    
      namespace :acceptance do
    desc 'Run all acceptance'
    task :all do
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/*_spec.rb']]))
    end
    
    When /^I configure the application to use '([^\']+)' from this project$/ do |name|
  append_to_gemfile 'gem '#{name}', :path => '#{PROJECT_ROOT}''
  steps %{And I successfully run `bundle install --local`}
end
    
      def migration_version
    if Rails.version.start_with? '5'
      '[#{Rails::VERSION::MAJOR}.#{Rails::VERSION::MINOR}]'
    end
  end
end

    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
              typeflag = header[TAR_TYPEFLAG_OFFSET]
          ascii_length = header[TAR_LENGTH_OFFSET_START..TAR_LENGTH_OFFSET_END]
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      option '--lint' , :flag, 'Check manifest with pkglint',
    :default => true
    
      option '--php-dir', 'PHP_DIR',
    'Specify php dir relative to prefix if differs from pear default (pear/php)'
    
          if !attributes[:python_install_bin].nil?
        flags += [ '--install-scripts', File.join(prefix, attributes[:python_install_bin]) ]
      elsif !attributes[:prefix].nil?
        # prefix given, but not python_install_bin, assume PREFIX/bin
        flags += [ '--install-scripts', File.join(prefix, 'bin') ]
      end