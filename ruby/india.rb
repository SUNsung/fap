
        
        module VagrantPlugins
  module Kernel_V2
    # Represents a single configured provisioner for a VM.
    class VagrantConfigTrigger < Vagrant.plugin('2', :config)
      # Defaults
      DEFAULT_ON_ERROR = :halt
      DEFAULT_EXIT_CODE = 0
      VALID_TRIGGER_TYPES = [:command, :action, :hook].freeze
    
    module VagrantPlugins
  module Chef
    module Provisioner
      # This class is a base class where the common functionality shared between
      # chef-solo and chef-client provisioning are stored. This is **not an actual
      # provisioner**. Instead, {ChefSolo} or {ChefServer} should be used.
      class Base < Vagrant.plugin('2', :provisioner)
        include Vagrant::Util
        include Vagrant::Util::Presence
    
    # Add the test directory to the load path
$:.unshift File.expand_path('../../', __FILE__)
    
          @aliases_path = Pathname.new(ENV['VAGRANT_ALIAS_FILE']).expand_path if ENV.key?('VAGRANT_ALIAS_FILE')
      @aliases_path ||= @home_path.join('aliases')
    
          # Check if this machine has a local box metadata file
      # describing the existing guest. If so, load it and
      # set the box name and version to allow the actual
      # box in use to be discovered.
      if data_path
        meta_file = data_path.join('box_meta')
        if meta_file.file?
          box_meta = JSON.parse(meta_file.read)
          config.vm.box = box_meta['name']
          config.vm.box_version = box_meta['version']
        end
      end
    
        it 'configures with the proper box version' do
      register_provider('foo')
    
              # If we forked during the process run, we need to do a hard
          # exit here. Ruby's fork only copies the running process (which
          # would be us), so if we return from this thread, it results
          # in a zombie Ruby process.
          if Process.pid != start_pid
            # We forked.
    
          # Find all specs installed to plugins directory that are not
      # found within the solution set.
      plugin_specs.delete_if do |spec|
        solution_full_names.include?(spec.full_name)
      end
    
    Then(/^git wrapper permissions are 0700$/) do
  permissions_test = %Q([ $(stat -c '%a' #{TestApp.git_wrapper_path.shellescape}) == '700' ])
  _stdout, _stderr, status = vagrant_cli_command('ssh -c #{permissions_test.shellescape}')
    
            if Rake::Task.task_defined?('deploy:set_current_revision')
          before 'deploy:set_current_revision',
                 '#{scm_name}:set_current_revision'
        end
      end
      # rubocop:enable Style/GuardClause
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end
    
          # Register a validation rule for the given key.
      def validate(key, &validator)
        vs = (validators[key] || [])
        vs << validator
        validators[key] = vs
      end
    
            it 'returns true' do
          expect(node.pure?).to be(true)
        end
      end
    
              next unless ancestor.send_type?
    
        context 'with doubled ellipsis' do
      let(:pattern) { '(send ... ...)' }
    
          def extract_rhs(node)
        if node.casgn_type?
          _scope, _lhs, rhs = *node
        elsif node.op_asgn_type?
          _lhs, _op, rhs = *node
        elsif node.call_type?
          rhs = node.last_argument
        elsif node.assignment?
          _lhs, rhs = *node
        end
    
          def remove_oldest_files(files, dirs, cache_root, verbose)
        # Add 1 to half the number of files, so that we remove the file if
        # there's only 1 left.
        remove_count = 1 + files.length / 2
        if verbose
          puts 'Removing the #{remove_count} oldest files from #{cache_root}'
        end
        sorted = files.sort_by { |path| File.mtime(path) }
        remove_files(sorted, dirs, remove_count)
      rescue Errno::ENOENT
        # This can happen if parallel RuboCop invocations try to remove the
        # same files. No problem.
        puts $ERROR_INFO if verbose
      end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
          a = $count
      p.process_one
      b = $count
      assert_equal a + 1, b
    end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
          def perform
        self.class.count += 1 if foo == :bar
      end
    end
    
          def log(type)
        data = begin
                 execute :get_log, {}, type: type.to_s
               rescue ::Selenium::WebDriver::Error::UnknownCommandError
                 execute :get_log_legacy, {}, type: type.to_s
               end
    
      get '/host' do
    'Current host is #{request.scheme}://#{request.host}:#{request.port}'
  end
    
          expect(@session.driver).to have_received(:save_screenshot).with(File.expand_path(custom_path, alternative_path), {})
    end
  end
end

    
            response.finish
      end
    
    Capybara.register_driver :selenium_safari_not_clear_storage do |app|
  safari_options = {
    browser: :safari,
    options: browser_options
  }
  Capybara::Selenium::Driver.new(app, safari_options.merge(clear_local_storage: false, clear_session_storage: false))
end