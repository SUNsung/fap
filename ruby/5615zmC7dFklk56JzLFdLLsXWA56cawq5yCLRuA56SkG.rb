
        
              # Creates a field set for grouping HTML form elements.
      #
      # <tt>legend</tt> will become the fieldset's title (optional as per W3C).
      # <tt>options</tt> accept the same values as tag.
      #
      # ==== Examples
      #   <%= field_set_tag do %>
      #     <p><%= text_field_tag 'name' %></p>
      #   <% end %>
      #   # => <fieldset><p><input id='name' name='name' type='text' /></p></fieldset>
      #
      #   <%= field_set_tag 'Your details' do %>
      #     <p><%= text_field_tag 'name' %></p>
      #   <% end %>
      #   # => <fieldset><legend>Your details</legend><p><input id='name' name='name' type='text' /></p></fieldset>
      #
      #   <%= field_set_tag nil, class: 'format' do %>
      #     <p><%= text_field_tag 'name' %></p>
      #   <% end %>
      #   # => <fieldset class='format'><p><input id='name' name='name' type='text' /></p></fieldset>
      def field_set_tag(legend = nil, options = nil, &block)
        output = tag(:fieldset, options, true)
        output.safe_concat(content_tag('legend'.freeze, legend)) unless legend.blank?
        output.concat(capture(&block)) if block_given?
        output.safe_concat('</fieldset>')
      end
    
            # This is what child classes implement.
        def render
          raise NotImplementedError, 'Subclasses must implement a render method'
        end
    
            private
    
        def render_template(event)
      info do
        message = '  Rendered #{from_rails_root(event.payload[:identifier])}'.dup
        message << ' within #{from_rails_root(event.payload[:layout])}' if event.payload[:layout]
        message << ' (#{event.duration.round(1)}ms)'
      end
    end
    
        def merged
      'merged'
    end
    
            private
    
          def identity
        @identity ||= current_user.identities
                                  .with_extern_uid(provider, uid)
                                  .first_or_initialize(extern_uid: uid)
      end
    
            true
      rescue Gitlab::Auth::AuthenticationError
        false
      end
    end
  end
end

    
            include ::EachBatch
      end
    
          def link_url
        raise NotImplementedError
      end
    end
  end
end

    
            def initialize(badge)
          @entity = badge.entity
          @status = badge.status
        end
    
    
    
          def masked_token?(token)
        token.length == TOKEN_LENGTH * 2
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
          def close_body(body)
        body.close if body.respond_to?(:close)
      end
    end
  end
end

    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end