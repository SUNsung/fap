
        
                def self.ldap_attributes(config)
          [
            'dn',
            config.uid,
            *config.attributes['name'],
            *config.attributes['email'],
            *config.attributes['username']
          ].compact.uniq
        end
    
            scope :failed_but_allowed, -> do
          where(allow_failure: true, status: [:failed, :canceled])
        end
    
    group :production do
  gem 'uglifier'
  gem 'newrelic_rpm'
end
    
      def self.generate(doc, version = nil)
    doc = find(doc, version) unless doc.respond_to?(:store_pages)
    doc.store_pages(store)
  end
    
        def release
      context[:release]
    end
    
        def read_file(path)
      File.read(path)
    rescue
      instrument 'warn.doc', msg: 'Failed to open file: #{path}'
      nil
    end
  end
end

    
        private
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
    end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
    
    
          return false
    end
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
          def base_url
        @base_url
      end
    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
        get '/compare/A/fc66539528eb96f21b2bbdbf557788fe8a1196ac..b26b791cb7917c4f37dd9cb4d1e0efb24ac4d26f'
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
        @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('PG')
    assert_equal '바뀐 text', utf8(page.raw_data)
    assert_equal 'ghi', page.version.message
  end
    
    desc 'Generate RCov test coverage and open in your browser'
task :coverage do
  require 'rcov'
  sh 'rm -fr coverage'
  sh 'rcov test/test_*.rb'
  sh 'open coverage/index.html'
end
    
    # Set ruby to UTF-8 mode
# This is required for Ruby 1.8.7 which gollum still supports.
$KCODE = 'U' if RUBY_VERSION[0, 3] == '1.8'
    
                try += 1
            $stderr.puts('Error #{e.class}, retrying #{try}/#{options[:max_tries]}')
            $stderr.puts(e.message)
            sleep(0.5)
          end
        end
      end
      raise exception if exception
    
    Gem::Specification.new do |gem|
  gem.authors       = ['Elastic']
  gem.email         = ['info@elastic.co']
  gem.description   = %q{Logstash plugin API}
  gem.summary       = %q{Define the plugin API that the plugin need to follow.}
  gem.homepage      = 'http://www.elastic.co/guide/en/logstash/current/index.html'
  gem.license       = 'Apache License (2.0)'
    
        desc 'Run one single machine acceptance test'
    task :single, :machine do |t, args|
      ENV['LS_VAGRANT_HOST']  = args[:machine]
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/**/*_spec.rb']]))
    end
  end
end
