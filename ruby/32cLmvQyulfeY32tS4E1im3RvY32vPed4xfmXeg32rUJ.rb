
        
        require 'active_support/subscriber'
    
            css('.filetree').each do |node|
          node.content = node.css('.file').map(&:inner_html).join('\n')
          node.name = 'pre'
          node.remove_attribute('class')
        end
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
      # Compress JavaScripts and CSS.
  config.assets.js_compressor = :uglifier
  # config.assets.css_compressor = :sass
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          it 'returns a 404 for a post not visible to the user' do
        sign_in(eve, scope: :user)
        expect {
          get :index, params: {post_id: @post.id}, format: :json
        }.to raise_error(ActiveRecord::RecordNotFound)
      end
    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
    module RuboCop
  # Handles caching of configurations and association of inspected
  # ruby files to configurations.
  class ConfigStore
    def initialize
      # @options_config stores a config that is specified in the command line.
      # This takes precedence over configs located in any directories
      @options_config = nil
    
    module RuboCop
  module Cop
    module Lint
      #
      # This cop emulates the following Ruby warnings in Ruby 2.6.
      #
      # % cat example.rb
      # ERB.new('hi', nil, '-', '@output_buffer')
      # % ruby -rerb example.rb
      # example.rb:1: warning: Passing safe_level with the 2nd argument of
      # ERB.new is deprecated. Do not use it, and specify other arguments as
      # keyword arguments.
      # example.rb:1: warning: Passing trim_mode with the 3rd argument of
      # ERB.new is deprecated. Use keyword argument like
      # ERB.new(str, trim_mode:...) instead.
      # example.rb:1: warning: Passing eoutvar with the 4th argument of ERB.new
      # is deprecated. Use keyword argument like ERB.new(str, eoutvar: ...)
      # instead.
      #
      # Now non-keyword arguments other than first one are softly deprecated
      # and will be removed when Ruby 2.5 becomes EOL.
      # `ERB.new` with non-keyword arguments is deprecated since ERB 2.2.0.
      # Use `:trim_mode` and `:eoutvar` keyword arguments to `ERB.new`.
      # This cop identifies places where `ERB.new(str, trim_mode, eoutvar)` can
      # be replaced by `ERB.new(str, :trim_mode: trim_mode, eoutvar: eoutvar)`.
      #
      # @example
      #   # Target codes supports Ruby 2.6 and higher only
      #   # bad
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # good
      #   ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #
      #   # Target codes supports Ruby 2.5 and lower only
      #   # good
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # Target codes supports Ruby 2.6, 2.5 and lower
      #   # bad
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # good
      #   # Ruby standard library style
      #   # https://github.com/ruby/ruby/commit/3406c5d
      #   if ERB.instance_method(:initialize).parameters.assoc(:key) # Ruby 2.6+
      #     ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #   else
      #     ERB.new(str, nil, '-', '@output_buffer')
      #   end
      #
      #   # good
      #   # Use `RUBY_VERSION` style
      #   if RUBY_VERSION >= '2.6'
      #     ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #   else
      #     ERB.new(str, nil, '-', '@output_buffer')
      #   end
      #
      class ErbNewArguments < Cop
        extend TargetRubyVersion
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks for unused block arguments.
      #
      # @example
      #
      #   # bad
      #
      #   do_something do |used, unused|
      #     puts used
      #   end
      #
      #   do_something do |bar|
      #     puts :foo
      #   end
      #
      #   define_method(:foo) do |bar|
      #     puts :baz
      #   end
      #
      # @example
      #
      #   #good
      #
      #   do_something do |used, _unused|
      #     puts used
      #   end
      #
      #   do_something do
      #     puts :foo
      #   end
      #
      #   define_method(:foo) do |_bar|
      #     puts :baz
      #   end
      class UnusedBlockArgument < Cop
        include UnusedArgument
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
    end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end