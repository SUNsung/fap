
        
        module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
      Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
            # Setup and normalize the configuration:
        #   * Create Kramdown if it doesn't exist.
        #   * Set syntax_highlighter, detecting enable_coderay and merging
        #       highlighter if none.
        #   * Merge kramdown[coderay] into syntax_highlighter_opts stripping coderay_.
        #   * Make sure `syntax_highlighter_opts` exists.
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        it 'opens the dry run modal even when clicking on the refresh icon' do
      visit edit_agent_path(agent)
      find('.agent-dry-run-button span.glyphicon').click
      expect(page).to have_text('Event to send (Optional)')
    end
    
        it 'unregisters deleted SchedulerAgents' do
      @scheduler.schedule_scheduler_agents
    
        def relative_url_string?(str)
      str !~ SCHEME_RGX && !fragment_url_string?(str) && !data_url_string?(str)
    end
    
        private
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
          def process_response(response)
        original_scheme = self.base_url.scheme
        original_host = self.base_url.host
        original_path = self.base_url.path
    
            css('h1 + code').each do |node|
          node.before('<p></p>')
          while node.next_element.name == 'code'
            node.previous_element << ' '
            node.previous_element << node.next_element
          end
          node.previous_element.prepend_child(node)
        end
    
          def mod
        return @mod if defined?(@mod)
        @mod = slug[/api\/([\w\-\.]+)\//, 1]
        @mod.remove! 'angular2.' if @mod
        @mod
      end
    end
  end
end

    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
    module RuboCop
  module AST
    # A node extension for `if` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `if` nodes within RuboCop.
    class IfNode < Node
      include ConditionalNode
      include ModifierNode
    
          DOUBLE_SPLAT = '**'.freeze
    
          # A helper class for comparing the positions of different parts of a
      # `pair` node.
      class HashElementDelta
        def initialize(first, second)
          @first = first
          @second = second
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def capture
          perform_payment_action(:capture)
        end
    
            def show
          respond_with(stock_location)
        end
    
    # The project root directory
$root = ::File.dirname(__FILE__)