
        
          def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
        # The path used after sending reset password instructions
    def after_sending_reset_password_instructions_path_for(resource_name)
      new_session_path(resource_name) if is_navigational_format?
    end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
        options[:container] = '.span9'
    
        options[:skip] = %w(book/first-edition/README.html)
    options[:skip_patterns] = [/(?<!\.html)\z/]
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        delegate :empty?, :blank?, to: :pages
    
    module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
            # This returns all registered pushes.
        #
        # @return [Registry]
        def pushes
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.pushes)
            end
          end
        end
    
                  # Read!
              data << io.readpartial(READ_CHUNK_SIZE).encode('UTF-8', Encoding.default_external)
            else
              # Do a simple non-blocking read on the IO object
              data << io.read_nonblock(READ_CHUNK_SIZE)
            end
          rescue Exception => e
            # The catch-all rescue here is to support multiple Ruby versions,
            # since we use some Ruby 1.9 specific exceptions.
    
          # This inserts a block with the given key and value.
      #
      # @param [String] key
      # @param [String] value
      def insert(key, value)
        # Insert the new block into the value
        new_block = <<BLOCK
# VAGRANT-BEGIN: #{key}
#{value.strip}
# VAGRANT-END: #{key}
BLOCK
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
      desc 'Finish the deployment, clean up server(s).'
  task :finishing do
  end
    
      let(:help_output) do
    out, _err = capture_io do
      flags '--help', '-h'
    end
    out
  end
    
      # GET /books
  # GET /books.json
  def index
    @books = Book.all
  end
    
    module RuboCop
  module Cop
    module Lint
      # Don't omit the accumulator when calling `next` in a `reduce` block.
      #
      # @example
      #
      #   # bad
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next if i.odd?
      #     acc + i
      #   end
      #
      # @example
      #
      #   # good
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next acc if i.odd?
      #     acc + i
      #   end
      class NextWithoutAccumulator < Cop
        MSG = 'Use `next` with an accumulator argument in a `reduce`.'.freeze
    
            def immutable_literal?(node)
          return true if node.immutable_literal?
    
            # @param lines [Array<String>]
        # @param annotations [Array<(Integer, String)>]
        #   each entry is the annotated line number and the annotation text
        #
        # @note annotations are sorted so that reconstructing the annotation
        #   text via {#to_s} is deterministic
        def initialize(lines, annotations)
          @lines       = lines.freeze
          @annotations = annotations.sort.freeze
        end