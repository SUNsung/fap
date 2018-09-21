
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
            private
    
              def render_collection_for(builder_class, &block)
            options = @options.stringify_keys
            rendered_collection = render_collection do |item, value, text, default_html_options|
              builder = instantiate_builder(builder_class, item, value, text, default_html_options)
    
    require 'action_view/helpers/tags/collection_helpers'
    
              def render_component(builder)
            builder.translation
          end
      end
    end
  end
end

    
    require 'action_view/helpers/tags/placeholderable'
    
    module Rack
  module Protection
    class Base
      DEFAULT_OPTIONS = {
        :reaction    => :default_reaction, :logging   => true,
        :message     => 'Forbidden',       :encryptor => Digest::SHA1,
        :session_key => 'rack.session',    :status    => 403,
        :allow_empty_referrer => true,
        :report_key           => 'protection.failed',
        :html_types           => %w[text/html application/xhtml text/xml application/xml]
      }
    
            def check(arg, args)
          if style == :braces && !arg.braces?
            add_arg_offense(arg, :missing)
          elsif style == :no_braces && arg.braces?
            add_arg_offense(arg, :redundant)
          elsif style == :context_dependent
            check_context_dependent(arg, args)
          end
        end
    
            if node.respond_to?(:loc) &&
           node.loc.respond_to?(:heredoc_end) &&
           node.loc.heredoc_end.last_line >= parent.last_line
          return true
        end
    
          # Checks whether this `hash` element is on the same line as `other`.
      #
      # @note A multiline element is considered to be on the same line if it
      #       shares any of its lines with `other`
      #
      # @return [Boolean] whether this element is on the same line as `other`
      def same_line?(other)
        loc.last_line == other.loc.line || loc.line == other.loc.last_line
      end