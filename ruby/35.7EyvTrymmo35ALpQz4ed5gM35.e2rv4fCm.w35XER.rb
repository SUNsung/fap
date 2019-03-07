
        
                result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: \'#{message}\'
          })
        end').runner.execute(:test)
    
          it 'Does not accept a :between array with nil values' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            changelog_from_git_commits(between: ['abcd', nil])
          end').runner.execute(:test)
        end.to raise_error(':between must not contain nil values')
      end
    
          it 'works with all params' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: 'testpassword',
            default_keychain: true,
            unlock: true,
            timeout: 600,
            lock_when_sleeps: true,
            lock_after_timeout: true,
            add_to_search_list: false,
          })
        end').runner.execute(:test)
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
    # test shellescape Windows implementation directly
describe 'WindowsShellwords#shellescape' do
  os = 'windows'
  shellescape_testcases.each do |testcase|
    it testcase['it'] + ': ' + testcase['it_result'][os] do
      str = testcase['str']
      escaped = WindowsShellwords.shellescape(str)
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
      private
    
      def load_export
    @export = Export.new(current_account)
  end
    
      def available_locales
    I18n.available_locales.reverse
  end
end

    
      def rate_limit_reset
    (request_time + reset_period_offset).iso8601(6)
  end
    
        context 'single argument' do
      before do
        subject.instance_eval do
          env :userpaths
        end
      end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
          def allow_uploads
        @allow_uploads
      end
    
          attr_reader :name, :path
    
          def call(env)
        @mg.call(env)
      end
    end
    
    # Rack::Handler does not work with Ctrl + C. Use Rack::Server instead.
    Rack::Server.new(:app => MapGollum.new(base_path), :Port => options[:port], :Host => options[:bind]).start
  end
end

    
      s.name              = 'gollum'
  s.version           = '4.1.4'
  s.date              = '2018-10-01'
  s.rubyforge_project = 'gollum'
  s.license           = 'MIT'
    
          def create_worker_file
        template 'worker.rb.erb', File.join('app/workers', class_path, '#{file_name}_worker.rb')
      end
    
        module PsychAutoload
      def resolve_class(klass_name)
        return nil if !klass_name || klass_name.empty?
        # constantize
        names = klass_name.split('::')
        names.shift if names.empty? || names.first.empty?
    
        def self.with_job_hash_context(job_hash, &block)
      with_context(job_hash_context(job_hash), &block)
    end
    
          def make_new
        @klass.new(*@args)
      end
    end
  end
end

    
        def settings
      Web.settings
    end