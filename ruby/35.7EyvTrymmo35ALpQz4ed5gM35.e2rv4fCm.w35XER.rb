
        
                      # Notify blocked threads that EventMachine has started or shutdown
              EM.schedule { @started_event.set }
              EM.add_shutdown_hook { @stopped_event.set }
    
    module Kramdown
  module Parser
    class SmartyPants < Kramdown::Parser::Kramdown
      def initialize(source, options)
        super
        @block_parsers = [:block_html, :content]
        @span_parsers =  [:smart_quotes, :html_entity, :typographic_syms, :span_html]
      end
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
        def backup?(entry)
      entry[-1..-1] == '~'
    end
    
    desc 'Increment the version number of this gem, after generating new Swift API'
lane :bump do |options|
  verify_env_variables
  ensure_git_branch(branch: 'master')
  ensure_git_status_clean
    
        options[:attribution] = <<-HTML
      &copy; 2018 The TensorFlow Authors. All rights reserved.<br>
      Licensed under the Creative Commons Attribution License 3.0.<br>
      Code samples licensed under the Apache 2.0 License.
    HTML
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
              entries << [name, node['id'], type]
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
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          if argv.empty? || argv.length > 2
            raise Vagrant::Errors::CLIInvalidUsage,
              help: opts.help.chomp
          end
    
        if extension_pathname.readable?
      ENV['BUNDLE_GEMFILE'] = extension_pathname.to_path
      break
    end
  end
end
    
    # Copyright (C) 2008 Rapid7, Inc.
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    vers.each do |ver|
  case ver
  when '6.1.4'
    __NR_execve      = 7
    __NR_getpeername = 211
    __NR_accept      = 237
    __NR_listen      = 240
    __NR_bind        = 242
    __NR_socket      = 243
    __NR_connect     = 244
    __NR_close       = 278
    __NR_kfcntl      = 658
    
    class Parser
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates