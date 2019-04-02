    def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
            # Download a file from the remote machine to the local machine.
        #
        # @param [String] from Path of the file on the remote machine.
        # @param [String] to Path of where to save the file locally.
        def download(from, to)
        end
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
              if name != UNSET_VALUE
            # Validate the name of the command
            if name.to_s !~ /^[-a-z0-9]+$/i
              raise InvalidCommandName, 'Commands can only contain letters, numbers, and hyphens'
            end
    
            # This contains all the provider plugins by name, and returns
        # the provider class and options.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :providers
    
            # This returns all registered provisioners.
        #
        # @return [Hash]
        def provisioners
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.provisioner)
            end
          end
        end
    
      let(:prefix) { '' } # A prefix before the opening brace.
  let(:suffix) { '' } # A suffix for the line after the closing brace.
  let(:open) { nil } # The opening brace.
  let(:close) { nil } # The closing brace.
  let(:a) { 'a' } # The first element.
  let(:b) { 'b' } # The second element.
  let(:b_comment) { '' } # Comment after the second element.
  let(:multi_prefix) { '' } # Prefix multi and heredoc with this.
  let(:multi) do # A viable multi-line element.
    <<-RUBY.strip_indent.chomp
      {
      foo: bar
      }
    RUBY
  end
  # This heredoc is unsafe to edit around because it ends on the same line as
  # the node itself.
  let(:heredoc) do
    <<-RUBY.strip_indent.chomp
      <<-EOM
      baz
      EOM
    RUBY
  end
  # This heredoc is safe to edit around because it ends on a line before the
  # last line of the node.
  let(:safe_heredoc) do
    <<-RUBY.strip_indent.chomp
      {
      a: <<-EOM
      baz
      EOM
      }
    RUBY
  end