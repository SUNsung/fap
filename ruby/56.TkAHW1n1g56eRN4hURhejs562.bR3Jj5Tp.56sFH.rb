
        
                scope :exclude_ignored, -> do
          where('allow_failure = ? OR status IN (?)',
            false, %w[created pending running success skipped])
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class LfsObjectsImporter
        include ParallelScheduling
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            alias_method :issuable_type, :noteable_type
      end
    end
  end
end

    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
                    @env.machine_names.each do |machine_name|
                  if machine_name =~ regex
                    machines << get_machine.call(machine_name)
                  end
                end
    
    module Vagrant
  module Plugin
    module V2
      # This is the superclass for all V2 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
        # Merge one registry with another and return a completely new
    # registry. Note that the result cache is completely busted, so
    # any gets on the new registry will result in a cache miss.
    def merge(other)
      self.class.new.tap do |result|
        result.merge!(self)
        result.merge!(other)
      end
    end
    
        # variable
    # Script::Value
    inherited_hash_reader :var
    
        # The name of the mixin in which the error occurred.
    # This could be `nil` if the error occurred outside a mixin.
    #
    # @return [String]
    def sass_mixin
      sass_backtrace.first[:mixin]
    end
    
        def colon_path?(path)
      !split_colon_path(path)[1].nil?
    end
    
    Then(/^git wrapper permissions are 0700$/) do
  permissions_test = %Q([ $(stat -c '%a' #{TestApp.git_wrapper_path.shellescape}) == '700' ])
  _stdout, _stderr, status = vagrant_cli_command('ssh -c #{permissions_test.shellescape}')
    
          def scm_name
        fetch(:scm)
      end
    
          def assert_value_or_block_not_both(value, block)
        return if value.nil? || block.nil?
        raise Capistrano::ValidationError,
              'Value and block both passed to Configuration#set'
      end
    
          def trace_set(key)
        return unless fetch(:print_config_variables, false)
        puts 'Config variable set: #{key.inspect} => #{values[key].inspect}'
      end
    end
  end
end

    
        def initialize(plugins_to_package, target)
      @plugins_to_package = Array(plugins_to_package)
      @target = target
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end