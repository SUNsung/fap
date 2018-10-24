
        
        def bottle_resolve_formula_names(bottle_file)
  receipt_file_path = bottle_receipt_path bottle_file
  receipt_file = Utils.popen_read('tar', '-xOzf', bottle_file, receipt_file_path)
  name = receipt_file_path.split('/').first
  tap = Tab.from_file_content(receipt_file, '#{bottle_file}/#{receipt_file_path}').tap
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
      def describe_perl
    describe_path(which 'perl')
  end
    
      def print_dir(root)
    dirs = []
    remaining_root_files = []
    other = ''
    
      def self.all
    opoo 'Formula.all is deprecated, use Formula.map instead'
    map
  end
    
              builds = scope_relevant.select('count(*)').to_sql
          created = scope_relevant.created.select('count(*)').to_sql
          success = scope_relevant.success.select('count(*)').to_sql
          manual = scope_relevant.manual.select('count(*)').to_sql
          pending = scope_relevant.pending.select('count(*)').to_sql
          running = scope_relevant.running.select('count(*)').to_sql
          skipped = scope_relevant.skipped.select('count(*)').to_sql
          canceled = scope_relevant.canceled.select('count(*)').to_sql
          warnings = scope_warnings.select('count(*) > 0').to_sql
    
            class << self
          def from_image(job)
            image = Gitlab::Ci::Build::Image.new(job.options[:image])
            return unless image.valid?
    
        require 'cocoapods/command/cache'
    require 'cocoapods/command/env'
    require 'cocoapods/command/init'
    require 'cocoapods/command/install'
    require 'cocoapods/command/ipc'
    require 'cocoapods/command/lib'
    require 'cocoapods/command/list'
    require 'cocoapods/command/outdated'
    require 'cocoapods/command/repo'
    require 'cocoapods/command/setup'
    require 'cocoapods/command/spec'
    require 'cocoapods/command/update'
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Given(/^a task which executes as root$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/root.rake')
end
    
          def warn_third_party_scm_must_be_upgraded
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure this custom SCM will work with future versions of Capistrano,
please upgrade it to a version that uses the new SCM plugin mechanism
documented here:
    
            def lvalue(key)
          key.to_s.chomp('=').to_sym
        end
      end
    end
  end
end

    
          cache(gist, file, data.body) unless @cache_disabled
      data.body
    end