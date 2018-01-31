
        
          # Make it so that network access from the vagrant guest is able to
  # use SSH private keys that are present on the host without copying
  # them into the VM.
  config.ssh.forward_agent = true
    
            # Defines additional communicators to be available. Communicators
        # should be returned by a block passed to this method. This is done
        # to ensure that the class is lazy loaded, so if your class inherits
        # from or uses any Vagrant internals specific to Vagrant 1.0, then
        # the plugin can still be defined without breaking anything in future
        # versions of Vagrant.
        #
        # @param [String] name Communicator name.
        def self.communicator(name=UNSET_VALUE, &block)
          data[:communicator] ||= Registry.new
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
          class << self
        # Mark a given block of code as a 'busy' block of code, which will
        # register a SIGINT handler for the duration of the block. When a
        # SIGINT occurs, the `sig_callback` proc will be called. It is up
        # to the callback to behave properly and exit the application.
        def busy(sig_callback)
          register(sig_callback)
          return yield
        ensure
          unregister(sig_callback)
        end
    
            hash.each do |key, value|
          self[convert_key(key)] = value
        end
      end
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
            def method_argument?
          argument? && %i[def defs].include?(@scope.node.type)
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
    
            def nested_variable_comparison?(node)
          return false unless nested_comparison?(node)
          variables_in_node(node).count == 1
        end
    
            def on_send(node)
          return unless node.receiver && node.method?(:freeze) &&
                        immutable_literal?(node.receiver)