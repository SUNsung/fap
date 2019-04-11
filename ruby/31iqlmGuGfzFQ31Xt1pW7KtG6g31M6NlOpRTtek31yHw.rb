
        
              def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
          it 'updates with a single dependency' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'update',
              dependencies: ['TestDependency']
            )
          end').runner.execute(:test)
    
          it 'shellescapes the exclude_dirs correctly' do
        directory = 'My Dir'
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['#{directory}'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir #{directory.shellescape}')
      end
    
          it 'cannot have both path and pathspec parameters' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'myfile.txt', pathspec: '*.txt')
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    end
  end
end

    
              result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true,
              executable: '#{CUSTOM_EXECUTABLE_NAME}'
            )
          end').runner.execute(:test)
    
        # Make sure, the value is valid (based on the verify block)
    # Raises an exception if the value is invalid
    def valid?(value)
      # we also allow nil values, which do not have to be verified.
      return true if value.nil?
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
    tool_name = File.basename($0)
    
          def api_endpoint
        custom_api_endpoint || default_api_endpoint
      end
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
            # Builds a diff note from a GitHub API response.
        #
        # note - An instance of `Sawyer::Resource` containing the note details.
        def self.from_api_response(note)
          matches = note.html_url.match(NOTEABLE_ID_REGEX)
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
        # Create magic predicates for verifying what module is activated by this map.
    # Example:
    #
    #   def confirmable?
    #     self.modules.include?(:confirmable)
    #   end
    #
    def self.add_module(m)
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{m}?
          self.modules.include?(:#{m})
        end
      METHOD
    end
    
          def rememberable_value
        if respond_to?(:remember_token)
          remember_token
        elsif respond_to?(:authenticatable_salt) && (salt = authenticatable_salt.presence)
          salt
        else
          raise 'authenticatable_salt returned nil for the #{self.class.name} model. ' \
            'In order to use rememberable, you must ensure a password is always set ' \
            'or have a remember_token column in your model or implement your own ' \
            'rememberable_value in the model with custom logic.'
        end
      end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
          Sidekiq.redis do |conn|
        conn.pipelined do
          jobs_to_requeue.each do |queue, jobs|
            conn.rpush('queue:#{queue}', jobs)
          end
        end
      end
      Sidekiq.logger.info('Pushed #{inprogress.size} jobs back to Redis')
    rescue => ex
      Sidekiq.logger.warn('Failed to requeue #{inprogress.size} jobs: #{ex.message}')
    end
    
          def views
        @views ||= VIEWS
      end
    
        def copy_in_scss_files
      FileUtils.cp_r(all_stylesheets, install_path)
    end
    
          expect('.border-style-explicit').to have_rule(rule)
    end
  end
    
          expect('.position-explicit').to have_ruleset(ruleset)
    end
  end
    
              it 'doesn't raise an integrity error' do
            is_expected.to_not raise_error
          end
        end
    
        def uploaders
      @uploaders ||= read_identifiers.map do |identifier|
        uploader = blank_uploader
        uploader.retrieve_from_store!(identifier) if identifier.present?
        uploader
      end
    end
    
        ##
    # This file serves mostly as a specification for Storage engines. There is no requirement
    # that storage engines must be a subclass of this class.
    #
    class Abstract