      def before_feature_element(feature_element)
        @indent = 2
        @scenario_indent = 2
        @timings[feature_element_timing_key(feature_element)] = Time.now
      end
    
    module Jekyll
  # Handles the cleanup of a site's destination before it is built.
  class Cleaner
    HIDDEN_FILE_REGEX = %r!\/\.{1,2}$!
    attr_reader :site
    
    module Jekyll
  module Commands
    class New < Command
      class << self
        def init_with_program(prog)
          prog.command(:new) do |c|
            c.syntax 'new PATH'
            c.description 'Creates a new Jekyll site scaffold in PATH'
    
            # The VM which this system is tied to.
        attr_reader :vm
    
              # Register a new host class only if a name was given
          data[:hosts].register(name.to_sym, &block) if name != UNSET_VALUE
    
      before_action :set_account
  before_action :set_statuses
    
        def create
      authorize AccountModerationNote, :create?
    
          log_action :confirm, @user
    
        def filtered_instances
      InstanceFilter.new(filter_params).results
    end
    
          redirect_to admin_report_path(@report)
    end
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true
    
        # Parses the command-line arguments and runs the executable.
    # Calls `Kernel#exit` at the end, so it never returns.
    #
    # @see #parse
    def parse!
      # rubocop:disable RescueException
      begin
        parse
      rescue Exception => e
        # Exit code 65 indicates invalid data per
        # http://www.freebsd.org/cgi/man.cgi?query=sysexits. Setting it via
        # at_exit is a bit of a hack, but it allows us to rethrow when --trace
        # is active and get both the built-in exception formatting and the
        # correct exit code.
        at_exit {exit Sass::Util.windows? ? 13 : 65} if e.is_a?(Sass::SyntaxError)
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
          def hash
        @root.hash
      end