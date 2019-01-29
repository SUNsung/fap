
        
        WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
    # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    module Jekyll
  module Commands
    class Serve
      class LiveReloadReactor
        attr_reader :started_event
        attr_reader :stopped_event
        attr_reader :thread
    
        def log_status(status)
      puts bold status
    end
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
        context 'opening brace on separate line from first element' do
      it 'allows closing brace on same line as last element' do
        expect_no_offenses(construct(true, false))
      end
    
          # The receiver of the method definition, if any.
      #
      # @return [Node, nil] the receiver of the method definition, or `nil`.
      def receiver
        node_parts[3]
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
            def delta(first, second, alignment = :left)
          case alignment
          when :left
            first.column - second.column
          when :right
            first.last_column - second.last_column
          else
            0
          end
        end
    
    module RuboCop
  module AST
    # A node extension for `when` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `when` nodes within RuboCop.
    class WhenNode < Node
      # Returns an array of all the conditions in the `when` branch.
      #
      # @return [Array<Node>] an array of condition nodes
      def conditions
        node_parts[0...-1]
      end
    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
        def self.each_definition(&block)
      instance.each_definition(&block)
    end
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
        private
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
        # Returns the underscored, pluralized version of the class name.
    # e.g. 'users' for the User class.
    # NOTE: The arguments need to be optional, because some tools fetch
    # all class names. Calling #class will return the expected class.
    def class attachment = nil, style_name = nil
      return super() if attachment.nil? && style_name.nil?
      plural_cache.underscore_and_pluralize_class(attachment.instance.class)
    end