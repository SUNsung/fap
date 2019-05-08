
        
              class MergeRequest < ActiveRecord::Base
        self.table_name = 'merge_requests'
    
            def collection_options
          { state: 'all', sort: 'created', direction: 'asc' }
        end
      end
    end
  end
end

    
            def sidekiq_worker_class
          ImportNoteWorker
        end
    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
    Then(/^the failure task will not run$/) do
  failed = TestApp.shared_path.join('failed')
  expect { run_vagrant_command(test_file_exists(failed)) }
    .to raise_error(VagrantHelpers::VagrantSSHCommandError)
end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def any?(key)
      value = fetch(key)
      if value && value.respond_to?(:any?)
        begin
          return value.any?
        rescue ArgumentError # rubocop:disable Lint/HandleExceptions
          # Gracefully ignore values whose `any?` method doesn't accept 0 args
        end
      end
    
          def extract_options(array)
        array.last.is_a?(::Hash) ? array.pop : {}
      end
    end
  end
end

    
    module Capistrano
  class Configuration
    # Holds the variables assigned at Capistrano runtime via `set` and retrieved
    # with `fetch`. Does internal bookkeeping to help identify user mistakes
    # like spelling errors or unused variables that may lead to unexpected
    # behavior.
    class Variables
      CAPISTRANO_LOCATION = File.expand_path('../..', __FILE__).freeze
      IGNORED_LOCATIONS = [
        '#{CAPISTRANO_LOCATION}/configuration/variables.rb:',
        '#{CAPISTRANO_LOCATION}/configuration.rb:',
        '#{CAPISTRANO_LOCATION}/dsl/env.rb:',
        '/dsl.rb:',
        '/forwardable.rb:'
      ].freeze
      private_constant :CAPISTRANO_LOCATION, :IGNORED_LOCATIONS
    
      def safe_params
    params.require(:address_endpoint).permit(:address)
  end
    
      included do
    helper_method :organization
    before_action :add_organization_to_page_title
  end
    
    end

    
      def check
    if @domain.check_dns(:manual)
      redirect_to_with_json [organization, @server, :domains], :notice => 'Your DNS records for #{@domain.name} look good!'
    else
      redirect_to_with_json [:setup, organization, @server, @domain], :alert => 'There seems to be something wrong with your DNS records. Check below for information.'
    end
  end
    
      def get_messages(scope)
    if scope == 'held'
      options = {:where => {:held => 1}}
    else
      options = {:where => {:scope => scope, :spam => false}, :order => :timestamp, :direction => 'desc'}
    
      def destroy
    if @user == current_user
      redirect_to_with_json [organization, :users], :alert => 'You cannot revoke your own access.'
      return
    end
    
          organization_domains = server.organization.domains.verified.order(:name)
      unless organization_domains.empty?
        s << '<optgroup label='Organization Domains'>'
        for domain in organization_domains
          selected = domain == selected_domain ? 'selected='selected'' : ''
          s << '<option value='#{domain.id}' #{selected}>#{domain.name}</option>'
        end
        s << '</optgroup>'
      end