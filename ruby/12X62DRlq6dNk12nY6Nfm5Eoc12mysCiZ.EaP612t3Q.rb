
        
              it 'adds logformat param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            logformat: '1'
          )
        end').runner.execute(:test)
    
            context 'with given path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint(
                compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
                oclint_path: 'test/bin/oclint'
              )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && test/bin/oclint -report-type=html -o=oclint_report.html' }
    
        it 'shelljoins multiple args' do
      message = 'A message'
      command = command_from_args('git', 'commit', '-m', message)
      expect(command).to eq('git commit -m #{message.shellescape}')
    end
    
            it 'sets up screenshots folder in current folder' do
          expect(options[:screenshots_path]).to eq('./screenshots')
        end
    
        attr_accessor :name, :type, :path
    
        def html?
      mime_type.include? 'html'
    end
    
          def fetch_redirections
        result = {}
        with_filters 'apply_base_url', 'container', 'normalize_urls', 'internal_urls' do
          build_pages do |page|
            next if page[:response_effective_path] == page[:response_path]
            result[page[:response_path].downcase] = page[:response_effective_path]
          end
        end
        result
      end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
      at_exit { Application.run! if $!.nil? && Application.run? }
end
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
          def decode_token(token)
        Base64.strict_decode64(token)
      end
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
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
