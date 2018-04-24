
        
        class MeTooController < JustMeController
end
    
      class HeadTest < ActiveSupport::TestCase
    test 'head works on its own' do
      status = HeadController.action(:index).call(Rack::MockRequest.env_for('/')).first
      assert_equal 404, status
    end
    
          add_delivery_method :sendmail, Mail::Sendmail,
        location:  '/usr/sbin/sendmail',
        arguments: '-i'
    
          # Make list points stand on their own line
      formatted.gsub!(/[ ]*([*]+) ([^*]*)/) { '  #{$1} #{$2.strip}\n' }
      formatted.gsub!(/[ ]*([#]+) ([^#]*)/) { '  #{$1} #{$2.strip}\n' }
    
        def call(env)
      @stack.call(env)
    end
  end
    
    class HelperMailer < ActionMailer::Base
  def use_mail_helper
    @text = 'But soft! What light through yonder window breaks? It is the east, ' \
            'and Juliet is the sun. Arise, fair sun, and kill the envious moon, ' \
            'which is sick and pale with grief that thou, her maid, art far more ' \
            'fair than she. Be not her maid, for she is envious! Her vestal ' \
            'livery is but sick and green, and none but fools do wear it. Cast ' \
            'it off!'
    
      included do |base|
    AgentRunner.register(base)
  end
    
      module SortableTableHelper
    # :call-seq:
    #   sortable_column(attribute, default_direction = 'desc', name: attribute.humanize)
    def sortable_column(attribute, default_direction = nil, options = nil)
      if options.nil? && (options = Hash.try_convert(default_direction))
        default_direction = nil
      end
      default_direction ||= 'desc'
      options ||= {}
      name = options[:name] || attribute.humanize
      selected = @table_sort_info[:attribute].to_s == attribute
      if selected
        direction = @table_sort_info[:direction]
        new_direction = direction.to_s == 'desc' ? 'asc' : 'desc'
        classes = 'selected #{direction}'
      else
        classes = ''
        new_direction = default_direction
      end
      link_to(name, url_for(sort: '#{attribute}.#{new_direction}'), class: classes)
    end
  end
end

    
      def destroy
    @job = Delayed::Job.find(params[:id])
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
            entries
      end
    end
  end
end

    
            css('.section', '#content', '.description', '.list', 'span.attributes').each do |node|
          node.before(node.children).remove
        end
    
      # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end
    
    module RuboCop
  module Cop
    class VariableForce
      # A Variable represents existence of a local variable.
      # This holds a variable declaration node,
      # and some states of the variable.
      class Variable
        VARIABLE_DECLARATION_TYPES =
          (VARIABLE_ASSIGNMENT_TYPES + ARGUMENT_DECLARATION_TYPES).freeze
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze